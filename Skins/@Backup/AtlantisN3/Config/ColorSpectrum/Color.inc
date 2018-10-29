
[Script]
Measure=Script
ScriptFile=ColorSpectrum.lua

[PG3]
Group=G3
Hidden=1

[CT]
H=8
W=28
ToolTipType=1
UpdateDivider=-1
Group=G3
Hidden=1

[IMS]
H=13
W=35
AntiAlias=1
ImageName=#PF1#
UpdateDivider=-1

[Imcs1]
Meter=Image
MeterStyle=IMS|PG3
X=166
Y=319

[IP51]
Meter=Image
MeterStyle=PF|PG3
SolidColor=#CPM1#
X=115
Y=320
W=45

[Orig]
Meter=String
MeterStyle=Style|STTI|PG3
Text=TestColorSpectrum#CRLF#Original code by Kaelri, modified and adapted by me :-).
Y=70

[StyleColorRed]
FontColor=DA2822
X=([SelectedColor:X] + [SelectedColor:W] + 55)
Y=r
DynamicVariables=1

[StyleColorGreen]
FontColor=A5C261
X=([SelectedColor:X] + [SelectedColor:W] + 90)
Y=r
DynamicVariables=1

[StyleColorBlue]
FontColor=0080C0
X=([SelectedColor:X] + [SelectedColor:W] + 125)
Y=r
DynamicVariables=1

[StyleColorComma]
Text=,
X=R
Y=r
FontColor=128,128,128

[Spectrum]
Meter=Image
;MeterStyle=PG3
X=122
Y=110
ImageName=#@#Images\Config\ColorSpectrum.png
LeftMouseUpAction=!CommandMeasure Script GetRGB($MouseX$,$MouseY$)
;Group=G3
;Hidden=2
UpdateDivider=-1

[Crosshair]
Meter=String
MeterStyle=Style|PG3
FontFace=Arial
FontColor=
StringEffect=Border
StringAlign=CenterCenter
X=366
Y=226
;X=256
;Y=225

[SelectedColorLabel]
Meter=String
Text=#T4P9#:
MeterStyle=Style|STTI|PG3
Y=250

[SelectedColor]
Meter=Image
SolidColor=66,66,66
X=r
Y=4R
W=45
H=45
DynamicVariables=1
UpdateDivider=-1
Group=G3
Hidden=1

[RGB_Label]
Meter=String
MeterStyle=Style|PG3
Text=RGB:
X=170
Y=2r
W=42
H=18
FontColor=128,128,128
DynamicVariables=1

[RGB_Red]
Meter=String
MeterStyle=Style|StyleColorRed|PG3

[RGB_Green]
Meter=String
MeterStyle=Style|StyleColorGreen|PG3

[RGB_Blue]
Meter=String
MeterStyle=Style|StyleColorBlue|PG3

[Col1]
Meter=String
MeterStyle=Style|STTI|PG3
Text=#T2P9#1: 
Y=320
TooltipText=#CPCLC#

[CurC1]
Meter=Image
MeterStyle=CT
SolidColor=#FBB#
X=50r
Y=2r
TooltipText=#OACT#




[Col2]
Meter=String
MeterStyle=Style|PG3
Text=#T2p9# 2
X=240
Y=320
TooltipText=#CPCLC#

[Col3]
Meter=String
MeterStyle=Style|STTI|PG3
Text=#T2p9# 3
Y=340
TooltipText=#CPCLC#

[Col4]
Meter=String
MeterStyle=Style|PG3
Text=#T2p9# 4
X=240
Y=340
TooltipText=#CPCLC#

