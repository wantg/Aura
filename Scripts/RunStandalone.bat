set UnrealEditorPath=d:\UnrealEngine\Engine\Binaries\Win64\UnrealEditor.exe
set CWD=%~dp0
@REM set Root=%~dp0%..
for %%d in ("%~dp0\..") do set Root=%%~fd
@REM set ProjectFile="%Root%\Blank.uproject"
for %%A IN ("%Root%/*.uproject") DO (set ProjectFile=%Root%\%%~nxA)
set MapReference=

set ProjectFile="%ProjectFile%"

start %UnrealEditorPath% %ProjectFile% %MapReference% -game              log=Standalone.log -windowed
