#include "InjectionLib.hpp"


InjectionLib::InjectionLib()
    : hInjectionMod(nullptr), InjectA(nullptr), InjectW(nullptr),ValidateFunc(nullptr),RestoreFunc(nullptr)
{
    //Init();
}


InjectionLib::~InjectionLib()
{
    BOOL fFreeResult = FreeLibrary(hInjectionMod);
}

bool InjectionLib::Init()
{
    hInjectionMod = LoadLibrary(GH_INJ_MOD_NAME);
    if (hInjectionMod == nullptr)
        return false;

    InjectA = reinterpret_cast<f_InjectA>(GetProcAddress(hInjectionMod, "InjectA"));
    InjectW = reinterpret_cast<f_InjectW>(GetProcAddress(hInjectionMod, "InjectW"));
    ValidateFunc = reinterpret_cast<f_ValidateInjectionFunctions>(GetProcAddress(hInjectionMod, "ValidateInjectionFunctions"));
    RestoreFunc = reinterpret_cast<f_RestoreInjectionFunctions>(GetProcAddress(hInjectionMod, "RestoreInjectionFunctions"));

    if (InjectA == nullptr || InjectW == nullptr || ValidateFunc == nullptr || RestoreFunc == nullptr)
        return false;

    return true;
}

bool InjectionLib::LoadingStatus()
{
    if (hInjectionMod == nullptr)
        return false;
	
    if (InjectA == nullptr || InjectW == nullptr || ValidateFunc == nullptr || RestoreFunc == nullptr)
        return false;

    return true;
}

DWORD InjectionLib::InjectFuncA(INJECTIONDATAA* pData)
{
    if (!LoadingStatus())
        return 42;
	
	return InjectA(pData);	
}

DWORD InjectionLib::InjectFuncW(INJECTIONDATAW* pData)
{
    if (!LoadingStatus())
        return 42;
	
    return InjectW(pData);
}

void InjectionLib::ScanHook(int pid, std::vector<std::string>& hList)
{
    hookInfo.clear();

	
    DWORD err1, err2;
    ValidateFunc(pid, err1, err2, hookInfo);


    UINT Changed = 0;
    for (auto i : hookInfo)
    {
        if (i.ChangeCount && !i.ErrorCode)
        {
            hList.push_back(i.ModulePath + "." + i.FunctionName);
            ++Changed;
        }
    }

    //ToDo: return Error
}

void InjectionLib::RestoreHook(int pid, std::vector<std::string>& hList)
{
    DWORD err1, err2;
    std::vector<HookInfo> hookInfoNew;
	
    for(auto i : hookInfo)
    {
        std::string dllFunc = i.ModulePath + "." + i.FunctionName;
    	if(std::find(hList.begin(), hList.end(), dllFunc) != hList.end())
    	{
            hookInfoNew.push_back(i);
    	}
    }

    RestoreFunc(pid, err1, err2, hookInfoNew);
	//ToDo: return Error
}
