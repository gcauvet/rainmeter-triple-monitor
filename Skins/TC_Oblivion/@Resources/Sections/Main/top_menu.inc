[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc
@include3=#@#Version.inc
@include4=#@#Images.inc

;Version=========================================================
[MAIN_TM_Version]
meter=string
meterstyle=TS_STD | TS_Size6 | TS_Right
fontcolor=#white#,120
text=Version: #SkinVersion#
x=(#SCREENAREAWIDTH#-10)
y=0


;BORDERS==========================================================

[MAIN_BG]
meter=image
x=0
y=0
W=#SCREENAREAWIDTH#
H=#SCREENAREAHEIGHT#
solidcolor=0,0,0,0

[Main_TM_Border]
Meter=image
ImageName=#Bor_TM_Main#
x=0
y=0
Antialias=1
Group=Main_TopMenu | Main











;Buttons=========================================================


;Button 0 OVERVIEW=====================

[Main_TM_BTN0_ON]
Meter=Image
ImageName=#BTN_TM_RED#
x=517
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Overview" "ov.ini"][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN0_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Overview"
x=61r
y=3r
Group=Main_TopMenu | Main



;Button 1 LAUNCHER=====================

[Main_TM_BTN1_ON]
Meter=Image
ImageName=#BTN_TM_BLUE#
x=651
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
;LeftMouseUpAction=[!ShowMeterGroup Main_Launcher][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Main\Launcher" "Launcher.ini"][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

;[Main_TM_BTN1_OFF]
;Meter=Image
;ImageName=#BTN_TM_BLUE#
;x=0r
;y=0r
;MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
;MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
;LeftMouseUpAction=[!HideMeterGroup Main_Launcher][!Redraw]
;Antialias=1
;Hidden=1
;Group=Main_Launcher | Main_TopMenu | Main

[Main_TM_BTN1_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="LAUNCHER"
x=61r
y=3r
Group=Main_TopMenu | Main



;Button 2 Operations=====================

[Main_TM_BTN2]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=785
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_OP_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN2_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_OP_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN2_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Operations"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN20]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Main\File" "file.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN20_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="File-Archive"
x=61r
y=4r
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN21]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Main\Media" "media.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN21_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Media-Archive"
x=61r
y=4r
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN22]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\Time\WorldMap" "worldmap.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main

[Main_TM_BTN22_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="World-Map"
x=61r
y=4r
hidden=1
Group=Main_OP_Launcher | Main_TopMenu | Main



;Button 3 Power-CTRL=====================

[Main_TM_BTN3]
Meter=Image
ImageName=#BTN_TM_BLUE#
x=919
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_Pwr_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN3_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_PWR_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN3_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Power-CTRL"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN30]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "TC_Oblivion" "lock.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN30_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Lock"
x=61r
y=4r
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN31]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "TC_Oblivion" "logout.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN31_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Log out"
x=61r
y=4r
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN32]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "TC_Oblivion" "reboot.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN32_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Restart"
x=61r
y=4r
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN33]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "TC_Oblivion" "shutdown.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main

[Main_TM_BTN33_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Shutdown"
x=61r
y=4r
hidden=1
Group=Main_PWR_Launcher | Main_TopMenu | Main


;Button 4 SEARCH=====================

[Main_TM_BTN4_ON]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=1053
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_Search][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN4_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_Search][!Redraw]
Antialias=1
Hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN4_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="SEARCH"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN41]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Main\Search" "Search.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN41_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Search-Window"
x=61r
y=4r
hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN42]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
Antialias=1
hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN42_Txt]
Meter=STRING
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
Text="<<< Google >>>"
X=61r
Y=4r
W=122
H=18
SolidColor=0,0,0,1
LeftMouseUpAction=!RainmeterPluginBang "MAIN_SEARCH1_IN ExecuteBatch 1"
hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN43]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
Antialias=1
hidden=1
Group=Main_Search | Main_TopMenu | Main

[Main_TM_BTN43_Txt]
Meter=STRING
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
Text="<<< Youtube >>>"
X=61r
Y=4r
W=122
H=18
SolidColor=0,0,0,1
LeftMouseUpAction=!RainmeterPluginBang "MAIN_SEARCH2_IN ExecuteBatch 1"
hidden=1
Group=Main_Search | Main_TopMenu | Main


[MAIN_SEARCH1_IN]
Measure=Plugin
Plugin=InputText.dll
FontFace=Orbitron
InlineSetting=CharacterSpacing | 1
InlinePattern=.*
FontSize=9
StringAlign=center
FontColor=#white#
AntiAlias=0
SolidColor=26,144,158
X=1055
Y=63
W=118
H=16
FocusDismiss=1
Command1=!Execute ["http://www.google.com/search?q=$UserInput$"] DefaultValue="GOOGLE"
Group=Main_Search | Main_TopMenu | Main


[MAIN_SEARCH2_IN]
Measure=Plugin
Plugin=InputText.dll
FontFace=Orbitron
InlineSetting=CharacterSpacing | 1
InlinePattern=.*
FontSize=9
StringAlign=center
FontColor=#white#
AntiAlias=0
SolidColor=26,144,158
X=1055
Y=82
W=118
H=16
FocusDismiss=1
Command1=!Execute ["http://www.youtube.com/results?search_query=$UserInput$"] DefaultValue="YOUTUBE"
Group=Main_Search | Main_TopMenu | Main


;Button 5 INTERNALS=====================

[Main_TM_BTN5_ON]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=1235
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_Int_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN5_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_Int_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_Int_Launcher | Main_TopMenu | Main

[Main_TM_BTN5_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Internals"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN50]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!LoadLayout "TC_Oblivion_2_Internals"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN50_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Load Layout"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN51]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\board" "board.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN51_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Board"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN52]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\core" "core.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN52_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Core"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN53]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\gpu" "gpu.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN53_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="GPU"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN54]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\network" "network.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN54_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Network"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN55]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\processes" "processes.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN55_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Processes"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN56]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Internals\ram" "ram.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN56_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="RAM / SWAP"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN57]
Meter=Image
ImageName=#BTN_TM_MENU_RED#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!DeactivateConfigGroup "INTERNALS"][!Redraw]
Antialias=1
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main

[Main_TM_BTN57_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="CLOSE ALL"
x=61r
y=4r
hidden=1
Group=Main_int_Launcher | Main_TopMenu | Main


;Button 6 ENVIRONMENT=====================

[Main_TM_BTN6_ON]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=1369
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_Env_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN6_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_Env_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN6_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Environment"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN60]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!LoadLayout "TC_Oblivion_3_Environment"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN60_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Load Layout"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN61]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\media" "media.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN61_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Media-System"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN62]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\news" "news.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN62_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="News-Link"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN63]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\steam" "steam.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN63_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Steam"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN64]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\time" "time.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN64_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Time-Panel"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN65]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\User" "user.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN65_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="User-Data"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN66]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Environment\weather" "weather.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN66_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Weather-Link"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN67]
Meter=Image
ImageName=#BTN_TM_MENU_RED#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!DeactivateConfigGroup "ENVIRONMENT"][!Redraw]
Antialias=1
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main

[Main_TM_BTN67_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="CLOSE ALL"
x=61r
y=4r
hidden=1
Group=Main_Env_Launcher | Main_TopMenu | Main



;Button 7 STORAGE=====================

[Main_TM_BTN7]
Meter=Image
ImageName=#BTN_TM_RED#
x=1503
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_ST_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN7_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_ST_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN7_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="STORAGE"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN70]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!LoadLayout "TC_Oblivion_4_Storage"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN70_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Load Layout"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN71]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Storage\HDD" "hdd.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN71_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="HDD-Drives"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN72]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Storage\USB" "usb.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN72_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="USB-Drives"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN73]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Storage\NET" "net.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN73_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="NET-Drives"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN74]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Storage\ODD" "odd.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN74_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="ODD-Drives"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN75]
Meter=Image
ImageName=#BTN_TM_MENU_RED#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!DeactivateConfigGroup "STORAGE"][!Redraw]
Antialias=1
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main

[Main_TM_BTN75_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="CLOSE ALL"
x=61r
y=4r
hidden=1
Group=Main_ST_Launcher | Main_TopMenu | Main


;Button 8 =====================

[Main_TM_BTN8]
Meter=Image
ImageName=#BTN_TM_RED#
x=1637
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_RM_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN8_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_RM_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN8_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="RainMeter"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN80]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Manage][!Redraw]
Antialias=1
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN80_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Manage"
x=61r
y=4r
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN81]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!RefreshApp][!Redraw]
Antialias=1
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN81_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Refresh"
x=61r
y=4r
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN82]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!About][!Redraw]
Antialias=1
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN82_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="About"
x=61r
y=4r
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN83]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Quit][!Redraw]
Antialias=1
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN83_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Exit"
x=61r
y=4r
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN84]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!execute ["http://www.rainmeter.net"]
Antialias=1
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main

[Main_TM_BTN84_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Website"
x=61r
y=4r
hidden=1
Group=Main_RM_Launcher | Main_TopMenu | Main


;Button 9 MEDIA-ARCHIVE=====================

[Main_TM_BTN9]
Meter=Image
ImageName=#BTN_TM_BLUE#
x=1771
y=15
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Main_SET_Launcher][!Redraw]
Antialias=1
Group=Main_TopMenu | Main

[Main_TM_BTN9_OFF]
Meter=Image
ImageName=#BTN_TM_GREEN#
x=0r
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_GREEN#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup Main_SET_Launcher][!Redraw]
Antialias=1
Hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN9_Txt]
meter=string
meterstyle=TS_STD | TS_White | TS_Size8 | TS_Center
text="Settings"
x=61r
y=3r
Group=Main_TopMenu | Main

[Main_TM_BTN90]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Settings\System" "settings.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN90_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Skin Settings"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN91]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Settings\Launcher_Conf" "Launcher_Conf.ini"][!Redraw]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN91_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Launcher-Conf"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN92]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#@#Plugins\][!Redraw]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN92_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Plug-Ins"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN93]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#@#Fonts\][!Redraw]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN93_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Fonts"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN94]
Meter=Image
ImageName=#BTN_TM_MENU#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!execute ["#@#settings.inc"]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN94_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Settings.inc"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN96]
Meter=Image
ImageName=#BTN_TM_MENU_RED#
x=-61r
y=15r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TM_MENU_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!DeactivateConfigGroup "TC_Oblivion_Skin"][!Redraw]
Antialias=1
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main

[Main_TM_BTN96_Txt]
meter=string
meterstyle=TS_STD | TS_Yellow | TS_Size7 | TS_Center
text="Close Skin"
x=61r
y=4r
hidden=1
Group=Main_SET_Launcher | Main_TopMenu | Main
