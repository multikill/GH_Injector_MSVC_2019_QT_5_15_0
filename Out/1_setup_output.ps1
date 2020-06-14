# Execute Script
# 1. Run Powershell as Admin
# 2. set-executionpolicy remotesigned

Remove-Item .\QT_GH_Injector -Recurse
New-Item -Name "QT_GH_Injector" -ItemType "directory"


copy ..\x64\Static\GH_Injector_MSVC_2019_QT_5_15_0.exe .\QT_GH_Injector\GH_Injector_x64.exe
copy .\3_Input\x64\*.dll .\QT_GH_Injector\
copy .\3_Input\x64\*.exe .\QT_GH_Injector\
copy .\3_Input\*.dll .\QT_GH_Injector\
copy .\3_Input\*.exe .\QT_GH_Injector\


#Compress-Archive .\Out\* QT_GH_Injector.zip