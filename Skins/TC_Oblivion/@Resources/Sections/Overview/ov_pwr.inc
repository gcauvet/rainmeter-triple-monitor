[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

Update = 1000

;LABELS=========================================================

[OV_PowerStatus_Label]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_DGreen
Text="Status"
X = 1545
Y = 30
Group=OV_Power | Overview | Main

[OV_PowerLifetime_Label]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_DGreen
text="Lifetime"
X = 1545
Y = 20r
Group=OV_Power | Overview | Main


;MEASURES=======================================================

[OV_PowerPercent_Cal]
Measure = Plugin
Plugin = PowerPlugin.dll
PowerState = Percent
UpdateDivider = 5

[OV_PowerACLine_Cal]
Measure = Plugin
PlugIn = PowerPlugin.dll
PowerState = ACLine
Substitute = "0":"BATTERY","1":"ACLine"
IfEqualValue = 0
IfEqualAction = [ !ShowMeter OV_PowerStatus_Txt ] [ !HideMeter OV_PowerPercent_Txt ] [ !ShowMeter OV_PowerLifeTime_Txt ] [ !HideMeter OV_PowerFull_Txt ]
IfAboveValue = 0
IfAboveAction = [ !HideMeter OV_PowerLifeTime_Txt ] [ !ShowMeter OV_PowerPercent_Txt ] [ !HideMeter OV_PowerStatus_Txt ] [ !ShowMeter OV_PowerFull_Txt ]
UpdateDivider = 5

[OV_PowerLifetime_Cal]
Measure = Plugin
PlugIn = PowerPlugin.dll
PowerState = Lifetime
UpdateDivider = 5

[OV_PowerStatus_Cal]
Measure = Plugin
Plugin = PowerPlugin.dll
PowerState = Status
Substitute = "0":"NO BATTERY","1":"CHARGING","2":"CRITICAL","3":"LOW","4":"ABOVE LOW"
UpdateDivider = 5


;METERS=============================================================

[OV_PowerStatus_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Red
MeasureName = OV_PowerStatus_Cal
X = 1720
Y = -30r
AntiAlias = 0
Group=OV_Power | Overview | Main

[OV_PowerFull_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_White
X = 1630
Y = 30r
Text = "CHARGING"
Group=OV_Power | Overview | Main

[OV_PowerLifeTime_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
MeasureName = OV_PowerLifetime_Cal
X = 1630
Y = 0r
Text = %1 Remaining
Group=OV_Power | Overview | Main

[OV_PowerPercent_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Red
MeasureName = OV_PowerPercent_Cal
X = 1730
Y = 0r
Text = %1%
Group=OV_Power | Overview | Main

[OV_PowerACLine_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
MeasureName = OV_PowerACLine_Cal
X = 1630
Y = -20r
Text = %1
Group=OV_Power | Overview | Main


;BARS=====================================================

[OV_PowerPercent_Bar]
Meter=BAR
MeasureName=OV_PowerPercent_Cal
X=1542
Y=81
W=213
H=12
BarColor=#blue#
SolidColor=#red#
BarOrientation=Horizontal
Group=OV_Power | Overview | Main


;BUTTONS=================================================================

;Button 1=====================

[OV_Power_BTN1]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=1770
y=0r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction="%WINDIR%\System32\control.exe /name Microsoft.PowerOptions"
Antialias=1
Group=OV_Power | Overview | Main

[OV_Power_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="POWER OPTIONS"
x=65r
y=5r
Group=OV_Power | Overview | Main

;Button 2=====================

[OV_Power_BTN2]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=-295r
y=30r
W=88
H=20
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#" "Lock.ini"][!Redraw]
Antialias=1
Group=OV_Power | Overview | Main

[OV_Power_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="LOCK"
x=44r
y=5r
Group=OV_Power | Overview | Main

;Button 3=====================

[OV_Power_BTN3]
Meter=Image
ImageName=#BTN_RE_BLUE#
x=49r
y=-5r
W=88
H=20
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#" "LogOut.ini"][!Redraw]
Antialias=1
Group=OV_Power | Overview | Main

[OV_Power_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="LOG OUT"
x=44r
y=5r
Group=OV_Power | Overview | Main


;Button 4=====================

[OV_Power_BTN4]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=49r
y=-5r
W=88
H=20
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#" "Reboot.ini"][!Redraw]
Antialias=1
Group=OV_Power | Overview | Main

[OV_Power_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="RESTART"
x=44r
y=5r
Group=OV_Power | Overview | Main

;Button 5=====================

[OV_Power_BTN5]
Meter=Image
ImageName=#BTN_RE_RED#
x=49r
y=-5r
W=88
H=20
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#" "Shutdown.ini"][!Redraw]
Antialias=1
Group=OV_Power | Overview | Main

[OV_Power_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="SHUTDOWN"
x=44r
y=5r
Group=OV_Power | Overview | Main