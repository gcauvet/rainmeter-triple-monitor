[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc
@include3=#@#Images.inc


;BORDERS==========================================================

[OV_Backgrnd_Status]
Meter = Image
ImageName=#BG_RECYCLE_STATUS#
X = 740
Y = 62
W = 221
H = 27
Antialias=1
Group=OV_TRASH | Overview | Main


;LABELS======================================================
[OV_Reclycle_Count_Label]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_DGreen
Text = "ELEMENTS"
X=740
Y=26
Group=OV_TRASH | Overview | Main

[OV_Reclycle_Size_Label]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_DGreen
Text = "SIZE"
X=740
Y=46
Group=OV_TRASH | Overview | Main


;MEASURES==========================================================
[OV_Recycle_Count_Cal]
Measure = Plugin
Plugin = RecycleManager.dll
RecycleType = Count
Drives = All

[OV_Recycle_Size_Cal]
Measure = Plugin
Plugin = RecycleManager.dll
RecycleType = Size
Drives = All

[OV_Recycle_Status_Cal]
Measure = Calc
Formula = OV_Recycle_Count_Cal
IfAboveAction = [ !HideMeter OV_Recycle_Empty_Txt ] [ !ShowMeter OV_Recycle_Full_Txt ]
IfAboveValue = 0
IfEqualAction = [ !HideMeter OV_Recycle_Full_Txt ] [ !ShowMeter OV_Recycle_Empty_Txt ]
IfEqualValue = 0


;METERS===========================================================

[OV_Recycle_Elements_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
MeasureName = OV_Recycle_Count_Cal
X = 850
Y = 26
AntiAlias = 0
Text = %1
Group=OV_TRASH | Overview | Main

[OV_Recycle_Size_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size8 | TS_Blue
MeasureName = OV_Recycle_Size_Cal
X = 850
Y = 46
AutoScale = 1
NumOfDecimals = 2
Text = "%1B"
Group=OV_TRASH | Overview | Main

[OV_Recycle_Empty_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size24 | TS_White
Text="Inactive"
X = 750
Y = 56
Group=OV_TRASH | Overview | Main

[OV_Recycle_Full_Txt]
Meter = String
MeterStyle=TS_STD | TS_Size24 | TS_Red
Text="Active"
X = 750
Y = 56
Hidden = 1
Group=OV_TRASH | Main



;BUTTONS=============================================================================

[OV_Recycle_BTN1]
Meter=Image
ImageName=#BTN_REC_BLUE#
x=750
y=96
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_REC_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_REC_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction = [ !PluginBang "OV_Recycle_Count_Cal OpenBin" ]
Antialias=1
Group=OV_TRASH | Overview | Main

[OV_Recycle_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="OPEN"
x=796
y=116
Group=OV_TRASH | Overview | Main

[OV_Recycle_BTN2]
Meter=Image
ImageName=#BTN_REC_RED#
x=851
y=96
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_REC_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_REC_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction = [ !PluginBang "OV_Recycle_Count_Cal EmptyBin" ]
Antialias=1
Group=OV_TRASH | Overview | Main

[OV_Recycle_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="CLEAR"
x=897
y=116
Group=OV_TRASH | Overview | Main