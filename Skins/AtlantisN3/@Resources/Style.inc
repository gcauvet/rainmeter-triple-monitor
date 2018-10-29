[Style]
FontColor=255,255,255
FontFace=Calibri
FontSize=8
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
UpdateDivider=-1

[Style1]
FontColor=#DA1#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Center
ToolTipType=1
X=50
Y=65
UpdateDivider=-1
Dynamicvariables=1

[Style2]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
X=5
Y=20r
StringAlign=Left
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style3]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=left
ToolTipType=1
X=85
Y=r
Dynamicvariables=1
UpdateDivider=-1

[Style4]
FontColor=#FBC#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
X=112
Y=r
ToolTipType=1
UpdateDivider=-1

[Style5]
FontColor=#FBC#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Right
X=350
Y=r
ToolTipType=1
UpdateDivider=-1

[StyleC]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
UpdateDivider=-1

[StyleF]
FontColor=255,255,255
FontFace=Calibri
FontSize=9
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor #DA1#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[PFond]
Shape=Rectangle 0,0,150,110 | Extend plus 
Shape2=Rectangle 70,5,2,100 | Extend plus1
Plus=Fill LinearGradient Gradient1 | StrokeWidth 1.5 | Stroke LinearGradient Gradient
Plus1=Fill Color #FBB# | StrokeWidth 0
Gradient=90 | #FBB#,#alpha# ; 0.0 | #FBC#,#alpha# ; 1.0
Gradient1=160 | #DA1#,#alpha# ; 0.0 | #FBP#,#alpha# ; 1.0
UpdateDivider=-1

[BRG]
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG1]
X=20r
Y=6
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!SetOption #CURRENTSECTION# Y "9"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!SetOption #CURRENTSECTION# Y ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG2]
X=20r
Y=10
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!SetOption #CURRENTSECTION# Y "13"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!SetOption #CURRENTSECTION# Y ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1


[Variables]
FPB1=5
MyColor=0,15,213
MyAlpha=255
eft=shadow
eft1=500
eft2=Clockopia
eft3=8
eft4=None
FBB=250,250,250
DA1=49,94,151
;DA1=45,119,164
FBC=108,172,210
FBP=0,0,0
FBD=205,211,212
alpha=203
Player=Winamp
SlideshowFolder=#@#Preview
SlideShowUpdate=20
CorT=250
MEMTO=2048
VITM=800
VITCL=800
TForm=%R:%S
;Weather
WeatherCode=FRXX0289
Unit=M
;Do not change this value
UNV=C
MTAJR1=[!Refreshgroup Sephi]
MTAJR5=[!Refresh "#ROOTCONFIG#\Divers\Slideshow"]
MTAJR7=[!Refresh "#ROOTCONFIG#\System\GPU"]
MTAJR6=[!Refresh "#ROOTCONFIG#\Divers\Weather"]
MTAJR2=[!Refresh "#ROOTCONFIG#\Divers\Dock1"][!Refresh "#ROOTCONFIG#\Divers\Dock1"]
language=English
English=#@#Languages\English.inc
Français=#@#Languages\Français.inc
Spanish=#@#Languages\Spanish.inc
Italian=#@#Languages\Italian.inc
German=#@#Languages\German.inc
Portuguese=#@#Languages\Portuguese.inc
Russian=#@#Languages\Russian.inc
Serbian=#@#Languages\Serbian.inc
Locale=en_US
