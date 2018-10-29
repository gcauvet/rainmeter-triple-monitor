[IG01]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,29,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=199

[IG02]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,159,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=r
Y=20r

[IG03]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,159,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=r
Y=20r

[IG04]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,159,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=r
Y=20r

[SGPU2]
DynamicVariables=1
X=317
Y=+1r
StringAlign=Center
MouseActionCursorName=Pen

[GPUTe]
Meter=String
MeterStyle=Style|STTI|PG4
Text=GPU
Y=200
UpdateDivider=-1

[GPU]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#GPUSD#:
Y=220
UpdateDivider=-1

[ImGPU]
Meter=Shape
MeterStyle=IMS|PG4
X=300
Y=-1r

[GPUT]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#VITM#
LeftMouseUpAction=!CommandMeasure "MeasureInput3 ExecuteBatch 1"

[MeasureInput3]
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
X=302
Y=221
H=10
W=31
DefaultValue="800"
Command1=[!SetVariable VITM "$UserInput$"][!WriteKeyValue Variables VITM "[MeasureInput3]"][!UpdateMeter GPUT][!WriteKeyValue Variables VITM [MeasureInput3] "#@#Style.inc"]#MTAJR7#

[Mem]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#T38P1#:
Y=240
UpdateDivider=-1

[ImMem]
Meter=Shape
MeterStyle=IMS|PG4
X=300
Y=-1r

[Text33]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#MEMTO#
DynamicVariables=1
LeftMouseUpAction=!CommandMeasure "MeasureInput4 ExecuteBatch 1"

[MeasureInput4]
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
X=302
Y=241
H=10
W=31
DefaultValue="2048"
Command1=[!SetVariable MEMTO "$UserInput$"][!WriteKeyValue Variables MEMTO "[MeasureInput4]"][!UpdateMeter Text33][!WriteKeyValue Variables MEMTO [MeasureInput4] "#@#Style.inc"]#MTAJR7#

[MemVit]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#T36P1#:
Y=260
UpdateDivider=-1

[ImMemVi]
Meter=Shape
MeterStyle=IMS|PG4
X=300
Y=-1r

[Text34]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#VITCL#
LeftMouseUpAction=!CommandMeasure "MeasureInput5 ExecuteBatch 1"

[MeasureInput5]
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
X=302
Y=261
H=10
W=31
DefaultValue="800"
Command1=[!SetVariable VITCL "$UserInput$"][!WriteKeyValue Variables VITCL "[MeasureInput5]"][!UpdateMeter Text34][!WriteKeyValue Variables VITCL [MeasureInput5] "#@#Style.inc"]#MTAJR7#