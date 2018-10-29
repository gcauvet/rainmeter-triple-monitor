[IP81]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,59,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=125

[IP82]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,59,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=145

[IP83]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,99,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=205
Y=r

[STI8]
Shape=Rectangle 0,0,19,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=30r
Y=165

[IP84]
Meter=Shape
MeterStyle=PF|PG4|STI8
X=116

[IP85]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP86]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP87]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP88]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP89]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP90]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP91]
Meter=Shape
MeterStyle=PF|PG4|STI8

[IP92]
Meter=Shape
MeterStyle=PF|PG4|STI8

[Slids]
Meter=String
MeterStyle=Style|STTI|PG4
Text=Slideshow:
Y=125

[SliIm]
Meter=Shape
MeterStyle=PG4
AntiAlias=1
X=180
Y=-2r
Shape=Rectangle 1,1,34,13,1 | Fill Color #DA2# | Extend Balls2
Balls2=StrokeWidth 2 | Stroke LinearGradient Gradient4
Gradient4=80 | #FBC# ; 0.0 | #FBP# ; 1.0
UpdateDivider=-1

[Sli1]
Meter=String
MeterStyle=Style|PG4
DynamicVariables=1
X=+5r
Y=+1r
LeftMouseUpAction=!ActivateConfig "#ROOTCONFIG#\Config\Slideshow" "Slideshow.ini"
Text=Select
Tooltiptext=#T3P1#

[SlidUpdate]
Meter=String
MeterStyle=Style|STTI|PG4
Y=145
Text=#MIAS#: 
UpdateDivider=-1

[CurrSli]
Meter=String
MeterStyle=Style|PG4
X=210
Y=r
Text=#SlideShowUpdate# (#OACT#)

[STSL]
X=30r
Y=r

[Del1]
Meter=String
MeterStyle=Style|STTI|PG4
Y=20r
Text=10
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "10" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "10 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del2]
Meter=String
MeterStyle=Style|PG4|STSL
Text=20
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "20" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "20 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del3]
Meter=String
MeterStyle=Style|PG4|STSL
Text=30
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "30" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "30 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del4]
Meter=String
MeterStyle=Style|PG4|STSL
Text=40
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "40" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "40 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del5]
Meter=String
MeterStyle=Style|PG4|STSL
Text=50
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "50" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "50 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del6]
Meter=String
MeterStyle=Style|PG4|STSL
Text=60
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "60" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "60 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del7]
Meter=String
MeterStyle=Style|PG4|STSL
Text=70
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "70" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "70 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del8]
Meter=String
MeterStyle=Style|PG4|STSL
Text=80
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "80" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "80 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1

[Del9]
Meter=String
MeterStyle=Style|PG4|STSL
Text=90
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "90" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "90 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
UpdateDivider=-1