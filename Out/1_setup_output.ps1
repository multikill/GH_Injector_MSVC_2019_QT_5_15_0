# Execute Script
# 1. Run Powershell as Admin
# 2. set-executionpolicy remotesigned


### Create folder structure
$outputFolder = ".\QT_GH_Injector\"
$x86des       = $outputFolder + "x86\"
$x64des       = $outputFolder + "x64\"
$x86platforms = $x86des + "platforms\"
$x64platforms = $x64des + "platforms\"

Remove-Item $outputFolder -Recurse

New-Item -Name $outputFolder -ItemType "directory"
New-Item -Name $x86des       -ItemType "directory"
New-Item -Name $x64des       -ItemType "directory"
New-Item -Name $x86platforms -ItemType "directory"
New-Item -Name $x64platforms -ItemType "directory"


### Copy qt dependencies 
$qt32path = "c:\Qt\5.15.0\msvc2019\"
$qt64path = "c:\Qt\5.15.0\msvc2019_64\"

$qtcore    = "bin\Qt5Core.dll"
$qtgui     = "bin\Qt5Gui.dll"
$qtnetwork = "bin\Qt5Network.dll"
$qtwidgets = "bin\Qt5Widgets.dll"
$qtwindows = "plugins\platforms\qwindows.dll"

Copy-Item $qt32path$qtcore    -Destination $x86des
Copy-Item $qt32path$qtgui     -Destination $x86des
Copy-Item $qt32path$qtnetwork -Destination $x86des
Copy-Item $qt32path$qtwidgets -Destination $x86des
Copy-Item $qt32path$qtwindows -Destination $x86platforms

Copy-Item $qt64path$qtcore    -Destination $x64des
Copy-Item $qt64path$qtgui     -Destination $x64des
Copy-Item $qt64path$qtnetwork -Destination $x64des
Copy-Item $qt64path$qtwidgets -Destination $x64des
Copy-Item $qt64path$qtwindows -Destination $x64platforms


### Copy GH GUI dependencies 
$x86_gh_exe = $x86des + "GH_Injector_x86.exe"
$x64_gh_exe = $x64des + "GH_Injector_x64.exe"

Copy-Item ..\x86\Release\GH_Injector_MSVC_2019_QT_5_15_0.exe -Destination $x86_gh_exe
Copy-Item ..\x64\Release\GH_Injector_MSVC_2019_QT_5_15_0.exe -Destination $x64_gh_exe


### Copy Injector dependencies
$InjectorPath = "C:\git\GH-Injector-Library\"
$x86InjectorDll = $InjectorPath + "\Release\x86\*.dll"
$x64InjectorDll = $InjectorPath + "\Release\x64\*.dll"
$x86InjectorExe = $InjectorPath + "\Release\x86\*.exe"
$x64InjectorExe = $InjectorPath + "\Release\x64\*.exe"

Copy-Item $x86InjectorDll -Destination $x86des
Copy-Item $x64InjectorDll -Destination $x64des
Copy-Item $x86InjectorExe -Destination $x86des
Copy-Item $x64InjectorExe -Destination $x64des
