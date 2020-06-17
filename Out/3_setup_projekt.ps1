# Execute Script
# 1. Run Powershell as Admin
# 2. set-executionpolicy remotesigned

Remove-Item ..\GH_Injector_MSVC_2019_QT_5_15_0\*.dll
Remove-Item ..\GH_Injector_MSVC_2019_QT_5_15_0\*.exe

copy .\3_Input\x64\*.dll ..\GH_Injector_MSVC_2019_QT_5_15_0\
copy .\3_Input\x64\*.exe ..\GH_Injector_MSVC_2019_QT_5_15_0\
copy .\3_Input\x86\*.dll ..\GH_Injector_MSVC_2019_QT_5_15_0\
copy .\3_Input\x86\*.exe ..\GH_Injector_MSVC_2019_QT_5_15_0\


#Compress-Archive .\Out\* QT_GH_Injector.zip