# Execute Script
# 1. Run Powershell as Admin
# 2. set-executionpolicy remotesigned

.\1_setup_output.ps1

Remove-Item .\QT_GH_Injector.zip -Recurse
Compress-Archive .\QT_GH_Injector\* QT_GH_Injector.zip