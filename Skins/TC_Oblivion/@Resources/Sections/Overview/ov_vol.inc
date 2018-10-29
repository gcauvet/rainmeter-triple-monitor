[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

Update=1000


;BORDERS==================================================================





[OV_VOL_Audio_Bar_BGrnd]
Meter=Bar
MeasureName=OV_VOL_Audio_Bar_BGrnd_Cal
BarOrientation=Horizontal
BarColor=#dgreen#
W=40
H=100
X=515
y=35
Group=OV_Vol | Overview | Main


;MEASURES======================================================================

[OV_Vol_Audio]
Measure=Plugin
Plugin=Win7AudioPlugin


[OV_VOL_Audio_Bar_BGrnd_Cal]
Measure=Calc
Formula=1


;METERS======================================================================

[OV_Vol_100_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
StringAlign=right
Text="100 -"
x=-5r
y=-7r
Group=OV_Vol | Overview | Main

[OV_Vol_0_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
StringAlign=right
Text="0 -"
x=0r
y=99r
Group=OV_Vol | Overview | Main


;BUTTONS================================================

[OV_Vol_BTN_Up]
Meter=Image
ImageName=#BTN_ARR_RIGHT#
X=-30r
Y=-70r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_ARR_RIGHT_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_ARR_RIGHT#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!CommandMeasure "OV_Vol_Audio" "ChangeVolume 5"
Group=OV_Vol | Overview | Main

[OV_Vol_BTN_Down]
Meter=Image
ImageName=#BTN_ARR_LEFT#
X=0r
Y=30r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_ARR_LEFT_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_ARR_LEFT#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!CommandMeasure "OV_Vol_Audio" "ChangeVolume -5"
Group=OV_Vol | Overview | Main

[OV_Vol_BTN_Mute]
Meter=Image
ImageName=#BTN_TRANS#
X=400
Y=56
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TRANS_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TRANS#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!CommandMeasure "OV_Vol_Audio" "ToggleMute"
Group=OV_Vol | Overview | Main

[OV_Vol_BTN_Mute_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size8 | TS_Blue | TS_Center
Text="Mute"
x=35r
y=3r
Group=OV_Vol | Overview | Main

[OV_Vol_BTN_CTRL]
Meter=Image
ImageName=#BTN_TRANS#
X=-35r
Y=25r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TRANS_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_TRANS#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction="%windir%\system32\control.exe /name Microsoft.Sound"
Group=OV_Vol | Overview | Main

[OV_Vol_BTN_CTRL_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size8 | TS_Blue | TS_Center
Text="CTRL"
x=35r
y=3r
Group=OV_Vol | Overview | Main

;BARS===========================================================

[OV_VOL_Audio_CurrentVolume_BAR]
Meter=Bar
MeasureName=OV_Vol_Audio
BarOrientation=Vertical
BarColor=#red#,200
W=38
H=98
X=516
Y=36
Group=OV_Vol | Overview | Main