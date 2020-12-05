SET mypath=%~dp0
SET project=%mypath%GH_Injector_MSVC_2019_QT_5_15_0.sln
SET vcvarsall="C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat"

call %vcvarsall% amd64
msbuild /t:Clean;Build /p:Configuration=Release /p:PlatformTarget=x64 -verbosity:q -consoleloggerparameters:Summary
echo The build process for x64 was executed
rem pause

call %vcvarsall% x86
msbuild /t:Clean;Build /p:Configuration=Release /p:PlatformTarget=x86 -verbosity:q -consoleloggerparameters:Summary
echo The build process for x86 was executed
pause