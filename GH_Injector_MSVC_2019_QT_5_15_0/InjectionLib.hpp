#pragma once
#include <vector>
#include <string>
#include "Injection.h"


class InjectionLib
{
public:
	InjectionLib();
	~InjectionLib();

	bool Init();
	bool LoadingStatus();

	DWORD InjectFuncA (INJECTIONDATAA* pData);
	DWORD InjectFuncW (INJECTIONDATAW* pData);
	void ScanHook(int pid, std::vector<std::string>& hList);
	void RestoreHook(int pid, std::vector<std::string>& hList);

private:
	std::vector<HookInfo> hookInfo;
	
	HINSTANCE hInjectionMod;
	f_InjectA InjectA;
	f_InjectW InjectW;
	f_ValidateInjectionFunctions ValidateFunc;
	f_RestoreInjectionFunctions RestoreFunc;
};