[IW01]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,224,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=290

[IW02]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,69,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=r
Y=20r

[IW03]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,34,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=r
Y=20r

[IW04]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,89,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=160
Y=r

[SGPU3]
DynamicVariables=1
X=317
Y=+1r
StringAlign=Center
MouseActionCursorName=Pen

[Weat]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#WEATH# (#T16P1#)
Y=290
LeftMouseUpAction=[https://weather.codes/]
TooltipText=#RCOY1#
UpdateDivider=-1

[Weat1]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#T15P1#
Y=310
UpdateDivider=-1

[WeatIm]
Meter=Shape
MeterStyle=PG4
X=290
Y=-1r
Shape=Rectangle 2,0,60,13,1 | Fill Color #DA2# | Extend Balls2
Balls2=StrokeWidth 2 | Stroke LinearGradient Gradient4
Gradient4=80 | #FBC# ; 0.0 | #FBP# ; 1.0
UpdateDivider=-1

[TextW]
Meter=String
MeterStyle=Style|SGPU3|PG4
Text=#WeatherCode#
LeftMouseUpAction=!CommandMeasure "MeasureInput1 ExecuteBatch 1"

[MeasureInput1]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG4
FontFace=Calibri
FontSize=8
StringAlign=Center
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=295
Y=311
H=10
W=53
Command1=[!SetVariable WeatherCode "$UserInput$"][!WriteKeyValue Variables WeatherCode "[MeasureInput1]"][!UpdateMeter TextW][!WriteKeyValue Variables WeatherCode [MeasureInput1] "#@#Style.inc"]#MTAJR6#

[Unit]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#T17P1#:
Y=330
Tooltiptext=#T18P1#
UpdateDivider=-1

[CurUnit]
Meter=String
MeterStyle=Style|PG4
Text=#Unit# (#OACT#)
X=165
Y=r
ToolTipType=1
ToolTipText=#OACT#

[UnitC]
Meter=Shape
MeterStyle=IMSrev|PG4
X=295
Y=r

[IMSrev]
Shape=Rectangle 1,0,15,14,1 | Fill Color #DA2# | Extend Balls2
Balls2=StrokeWidth 2 | Stroke LinearGradient Gradient4
Gradient4=80 | #FBC# ; 0.0 | #FBP# ; 1.0
UpdateDivider=-1

[M]
X=3r
Y=1r
Meter=String
MeterStyle=Style|PG4
Text=M
LeftMouseUpAction=[!WriteKeyValue "Variables" "Unit" "M" "#@#Style.inc"][!WriteKeyValue "Variables" "UNV" "C" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Divers\Weather"][!SetOption CurUnit Text "M (#OACT#)"][!UpdateMeter CurUnit][!Redraw]
ToolTipTitle=M (metric)
ToolTipType=1
ToolTipText=Celzius
UpdateDivider=-1

[UnitF]
Meter=Shape
MeterStyle=IMSrev|PG4
X=26r
Y=-1r

[F]
X=5r
Y=1r
Meter=String
MeterStyle=Style|PG4
Text=F
LeftMouseUpAction=[!WriteKeyValue "Variables" "Unit" "F" "#@#Style.inc"][!WriteKeyValue "Variables" "UNV" "F" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Divers\Weather"][!SetOption CurUnit Text "F (#OACT#)"][!UpdateMeter CurUnit][!Redraw]
ToolTipTitle=F
ToolTipText=Fahrenheits
UpdateDivider=-1