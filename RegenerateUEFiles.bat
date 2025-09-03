@echo off
RD /S /Q "%cd%\Saved"
RD /S /Q "%cd%\DerivedDataCache"
RD /S /Q "%cd%\Intermediate\Config"
RD /S /Q "%cd%\Intermediate\PipInstall"
RD /S /Q "%cd%\Intermediate\ReimportCache"
RD /S /Q "%cd%\Intermediate\ShaderAutogen"
RD /S /Q "%cd%\Binaries"
RD /S /Q "%cd%\.vs"
del /f "%cd%\*.sln"
del /f "%cd%\.idea"
del /f "%cd%\Intermediate\CachedAssetRegistry_0.bin"
del /f "%cd%\Intermediate\TargetInfo.json"

set MyUVS="C:\Program Files (x86)\Epic Games\Launcher\Engine\Binaries\Win64\UnrealVersionSelector.exe"
set MyUBT="f:\Program Files\Epic Games\UE_5.6\Engine\Binaries\DotNET\UnrealBuildTool.exe"

rem change Transformation to your own project name
set MyFullPath="%cd%\MattiasFUSTER"


%MyUVS% /projectfiles %MyFullPath%.uproject

%MyUBT% Development Win64 -Project=%MyFullPath%.uproject -TargetType=Editor -Progress -NoEngineChanges -NoHotReloadFromIDE

%MyFullPath%.sln