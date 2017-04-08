@echo off
:calc
set /p EQUATION=Enter equation (eg. 7+7):
set /a Result=%EQUATION%
echo The answer is:%Result%
pause
cls
goto calc
