[SPLT2]
Meter=Shape
MeterStyle=STSP1
Shape=Rectangle 28,334,41,15,2 | Fill LinearGradient GradientClo | Extend BallsClo

[Title6]
Meter=String
MeterStyle=Style
Text=Dock
X=47
Y=335
StringAlign=Center
LeftMouseUpAction=[!ShowMeterGroup G6][!HideMeterGroup G1][!HideMeterGroup G2][!HideMeterGroup G3][!HideMeterGroup G4][!HideMeterGroup G5][!Redraw]
UpdateDivider=-1

[Docka]
Meter=Shape
MeterStyle=BRG
X=367
Y=71
Group=G6
Hidden=1
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Config\ConfDock" "ConfDock.ini"]
TooltipText=#T5P6#

[Do1]
Meter=Shape
MeterStyle=PF|PG6
Y=71

[Do2]
Meter=Shape
MeterStyle=PF|PG6

[Do3]
Meter=Shape
MeterStyle=PF|PG6

[Do4]
Meter=Shape
MeterStyle=PF|PG6

[Do5]
Meter=Shape
MeterStyle=PF|PG6

[Do6]
Meter=Shape
MeterStyle=PF|PG6

[Do7]
Meter=Shape
MeterStyle=PF|PG6

[Do8]
Meter=Shape
MeterStyle=PF|PG6

[PG6]
Shape=Rectangle 0,0,199,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=17r
Group=G6
Hidden=1
UpdateDivider=-1

[1St]
X=120
Y=17r
Group=G6
Hidden=1
DynamicVariables=1
UpdateDivider=-1

[Titre1]
Meter=String
MeterStyle=Style|1st
Text=#SHC1-2# 
Y=70
LeftMouseUpAction=!CommandMeasure "MeasureInput11 ExecuteBatch 1"

[MeasureInput11]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=71
H=15
W=200
Command1=[!SetVariable SHC1-2 "$UserInput$"][!WriteKeyValue Variables SHC1-2 "[MeasureInput11]"][!UpdateMeter Titre1][!WriteKeyValue Variables SHC1-2 [MeasureInput11] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre2]
Meter=String
MeterStyle=Style|1st
Text=#SHC2-2# 
LeftMouseUpAction=!CommandMeasure "MeasureInput12 ExecuteBatch 1"

[MeasureInput12]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=88
H=15
W=200
Command1=[!SetVariable SHC2-2 "$UserInput$"][!WriteKeyValue Variables SHC2-2 "[MeasureInput12]"][!UpdateMeter Titre2][!WriteKeyValue Variables SHC2-2 [MeasureInput12] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre3]
Meter=String
MeterStyle=Style|1st
Text=#SHC3-2# 
LeftMouseUpAction=!CommandMeasure "MeasureInput13 ExecuteBatch 1"

[MeasureInput13]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=105
H=15
W=200
Command1=[!SetVariable SHC3-2 "$UserInput$"][!WriteKeyValue Variables SHC3-2 "[MeasureInput13]"][!UpdateMeter Titre3][!WriteKeyValue Variables SHC3-2 [MeasureInput13] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre4]
Meter=String
MeterStyle=Style|1st
Text=#SHC4-2# 
LeftMouseUpAction=!CommandMeasure "MeasureInput14 ExecuteBatch 1"

[MeasureInput14]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=122
H=15
W=200
Command1=[!SetVariable SHC4-2 "$UserInput$"][!WriteKeyValue Variables SHC4-2 "[MeasureInput14]"][!UpdateMeter Titre4][!WriteKeyValue Variables SHC4-2 [MeasureInput14] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre5]
Meter=String
MeterStyle=Style|1st
Text=#SHC5-2#
LeftMouseUpAction=!CommandMeasure "MeasureInput15 ExecuteBatch 1"

[MeasureInput15]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=139
H=15
W=200
Command1=[!SetVariable SHC5-2 "$UserInput$"][!WriteKeyValue Variables SHC5-2 "[MeasureInput15]"][!UpdateMeter Titre5][!WriteKeyValue Variables SHC5-2 [MeasureInput15] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre6]
Meter=String
MeterStyle=Style|1st
Text=#SHC6-2#
LeftMouseUpAction=!CommandMeasure "MeasureInput16 ExecuteBatch 1"

[MeasureInput16]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=156
H=15
W=200
Command1=[!SetVariable SHC6-2 "$UserInput$"][!WriteKeyValue Variables SHC6-2 "[MeasureInput16]"][!UpdateMeter Titre6][!WriteKeyValue Variables SHC6-2 [MeasureInput16] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre7]
Meter=String
MeterStyle=Style|1st
Text=#SHC7-2#
LeftMouseUpAction=!CommandMeasure "MeasureInput17 ExecuteBatch 1"

[MeasureInput17]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=173
H=15
W=200
Command1=[!SetVariable SHC7-2 "$UserInput$"][!WriteKeyValue Variables SHC7-2 "[MeasureInput17]"][!UpdateMeter Titre7][!WriteKeyValue Variables SHC7-2 [MeasureInput17] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#

[Titre8]
Meter=String
MeterStyle=Style|1st
Text=#SHC8-2#
LeftMouseUpAction=!CommandMeasure "MeasureInput18 ExecuteBatch 1"

[MeasureInput18]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG6
FontFace=Calibri
FontSize=8
StringAlign=Left
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=115
Y=190
H=15
W=200
Command1=[!SetVariable SHC8-2 "$UserInput$"][!WriteKeyValue Variables SHC8-2 "[MeasureInput18]"][!UpdateMeter Titre8][!WriteKeyValue Variables SHC8-2 [MeasureInput18] "#@#Measures\Divers\Shortcut.inc"]#MTAJR2#