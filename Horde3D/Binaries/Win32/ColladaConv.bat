@ECHO OFF
CLS

IF NOT "%1" == "" GOTO dragndrop

REM Show arguments
ColladaConv
ECHO.

SET cmdLine=
SET /P cmdLine=Enter arguments: 
ECHO.

ColladaConv %cmdLine%

ECHO.
GOTO exit


:dragndrop

%~d0 
cd %~dp0
ColladaConv %1


:exit

PAUSE
