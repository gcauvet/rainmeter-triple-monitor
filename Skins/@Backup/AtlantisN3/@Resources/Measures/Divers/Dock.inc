[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc
@include3=#@#Measures\Divers\Shortcut.inc
S01=!ShowMetergroup
H01=!HideMetergroup
S11=!ShowMeter
H11=!HideMeter

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,310,30,#FPB1# | Extend plus 
Shape2=Rectangle 65,5,2,20,#FPB1# | Extend plus1

[C1]
Meter=Shape
MeterStyle=BRG2
LeftMouseDownAction=[#S01# Notes1][#H01# Notes2][#H01# Notes3][!Redraw]
ToolTipText=Dock 1
X=6

[C2]
Meter=Shape
MeterStyle=BRG2
LeftMouseDownAction=[#S01# Notes2][#H01# Notes1][#H01# Notes3][!Redraw]
ToolTipText=Windows

[C3]
Meter=Shape
MeterStyle=BRG2
LeftMouseDownAction=[#S01# Notes3][#H01# Notes1][#H01# Notes2][!Redraw]
ToolTipText=Controls

[ShutSty]
X=28r
Y=5
H=21
W=21
MouseOverAction=[!SetOption #CURRENTSECTION# W 25][!SetOption #CURRENTSECTION# H 25][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# W 21][!SetOption #CURRENTSECTION# H 21][!UpdateMeter #CURRENTSECTION#][!Redraw]
ToolTipType=1
UpdateDivider=-1
AntiAlias=1

[G1]
Hidden=0
Group=Notes1

[Icon1]
Meter=Image
MeterStyle=ShutSty|G1 
X=75
ImageName=#Im1-1#
LeftMouseDownAction=["#SHC1-1#"]
Tooltiptext=#SHC1-2#

[Icon2]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im2-1#
LeftMouseDownAction=["#SHC2-1#"]
Tooltiptext=#SHC2-2#

[Icon3]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im3-1#
LeftMouseDownAction=["#SHC3-1#"]
Tooltiptext=#SHC3-2#

[Icon4]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im4-1#
LeftMouseDownAction=["#SHC4-1#"]
Tooltiptext=#SHC4-2#

[Icon5]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im5-1#
LeftMouseDownAction=["#SHC5-1#"]
Tooltiptext=#SHC5-2#

[Icon6]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im6-1#
LeftMouseDownAction=["#SHC6-1#"]
Tooltiptext=#SHC6-2#

[Icon7]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im7-1#
LeftMouseDownAction=["#SHC7-1#"]
Tooltiptext=#SHC7-2#

[Icon8]
Meter=Image
MeterStyle=ShutSty|G1
ImageName=#Im8-1#
LeftMouseDownAction=["#SHC8-1#"]
Tooltiptext=#SHC8-2#

[G2]
Hidden=1
Group=Notes2

[Win1]
Meter=Image
MeterStyle=ShutSty|G2
X=75
ImageName=#@#Images\Icones\calc.ico
LeftMouseDownAction=["calc.exe"]
Tooltiptext=Calculator

[Win2]
Meter=Image
MeterStyle=ShutSty|G2
ImageName=#@#Images\Icones\Notepad.ico
LeftMouseDownAction=["Notepad.exe"]
Tooltiptext=Notepad

[Win3]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\Regedit.ico
LeftMouseDownAction=["regedit.exe"]
Tooltiptext=Regedit

[Win4]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\Control Panel.ico
LeftMouseDownAction=["control.exe"]
Tooltiptext=Control Panel

[Win5]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\Taskmgr.ico
LeftMouseDownAction=["taskmgr.exe"]
Tooltiptext=Task Manager

[Win6]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\File Explorer.ico
LeftMouseDownAction=["explorer.exe"]
Tooltiptext=Explorer

[Win7]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\Ribbons.ico
LeftMouseDownAction=["Ribbons.scr"]
Tooltiptext=Ribbon

[Win8]
Meter=Image
MeterStyle=ShutSty|G2 
ImageName=#@#Images\Icones\ComPr.ico
LeftMouseDownAction=["cmd.exe"]
Tooltiptext=CMD

[G3]
Hidden=1
Group=Notes3

[Sleep]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C8.png
LeftMouseDownAction=[%windir%\System32\rundll32.exe powrprof.dll,SetSuspendState]
ToolTipText=#Hibe#
X=75

[Restart]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C4.png
LeftMouseUpAction=[%windir%\System32\shutdown.exe -r -t 00]
ToolTipText=#Rest#

[Shutdown]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C6.png
LeftMouseUpAction=[%windir%\System32\shutdown.exe -s -t 00]
ToolTipText=#Shut#

[Logoff]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C3.png
LeftMouseDownAction=[%windir%\System32\shutdown.exe -L]
ToolTipText=#Logo#

[Hybrid]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C5.png
LeftMouseDownAction=[%windir%\System32\shutdown.exe /s /hybrid /t 00]
ToolTipText=Hybrid #shut#

[Advanced]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C1.png
LeftMouseDownAction=[%windir%\System32\shutdown.exe -r -o -t 00]
ToolTipText=#Rest1#

[Lock]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C7.png
LeftMouseUpAction=[rundll32.exe user32.dll,LockWorkStation]
ToolTipText=#LOCWK#

[Switcher]
Meter=Image
MeterStyle=ShutSty|G3 
ImageName=#@#Images\Icones\C2.png
LeftMouseUpAction=explorer shell:::{3080F90E-D7AD-11D9-BD98-0000947B0257}
ToolTipText=Window Switcher