[Variables]

[SPLT1]
Meter=Shape
MeterStyle=STSP1
Shape=Rectangle 28,282,41,15,2 | Fill LinearGradient GradientClo | Extend BallsClo

[PG5]
Group=G5
Hidden=1
UpdateDivider=-1

[Title5]
Meter=String
MeterStyle=Style
Text=Themes
X=47
Y=283
StringAlign=Center
LeftMouseUpAction=[!ShowMeterGroup G5][!HideMeterGroup G1][!HideMeterGroup G2][!HideMeterGroup G3][!HideMeterGroup G4][!HideMeterGroup G6][!Redraw]
UpdateDivider=-1

[FondSty]
X=70r
Y=r
H=6
W=60
Tooltiptext=#MTHes#
ToolTipType=1

[Forme]
X=150r
Y=r
Plus=Fill Color #FBP#,#alpha# | StrokeWidth 0
UpdateDivider=-1

[Shape1]
Meter=Shape
MeterStyle=Forme|PG5
X=120
Y=80
Shape=Rectangle 0,0,80,60,0 | Extend plus
LeftMouseUpAction=[#VVS# "FPB1" "0" #@#Style.inc]#MTAJR1#

[Shape2]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,80,60,2 | Extend plus
LeftMouseUpAction=[#VVS# "FPB1" "2" #@#Style.inc]#MTAJR1#

[Shape3]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,80,60,5 | Extend plus
LeftMouseUpAction=[#VVS# "FPB1" "5" #@#Style.inc]#MTAJR1#
X=120
Y=80r

[Shape4]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,80,60,8 | Extend plus
LeftMouseUpAction=[#VVS# "FPB1" "8" #@#Style.inc]#MTAJR1#



[IT01]
Meter=Shape
MeterStyle=PF1|PG5
Shape=Rectangle 0,0,67,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=324

[IT02]
Meter=Shape
MeterStyle=PF1|PG5
Shape=Rectangle 0,0,109,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=83r
Y=r

[POT5]
Shape=Rectangle 0,0,20,14,2 | Fill LinearGradient GradientClo | Extend BallsClo

[IT03]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=118
Y=20r

[IT04]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT05]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT06]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT07]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT08]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT09]
Meter=Shape
MeterStyle=PF|PG5|POT5
X=27r
Y=r

[IT10]
Meter=Shape
MeterStyle=PF|PG5
Shape=Rectangle 0,0,15,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=27r
Y=r

[IT11]
Meter=Shape
MeterStyle=PF|PG5
Shape=Rectangle 0,0,15,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=27r
Y=r

[IT12]
Meter=Shape
MeterStyle=PF|PG5
Shape=Rectangle 0,0,15,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=27r
Y=r

[Alphatitre]
Meter=String
MeterStyle=Style|STTI|PG5
Text=#T3P16#:
Y=325
UpdateDivider=-1

[CurAl]
Meter=String
MeterStyle=Style|PG5
Text=#alpha#
X=80r
Y=r

[CurAl1]
Meter=String
MeterStyle=Style|PG5
Text=(#OACT#)
X=20r
Y=r

[AlphaSt]
X=27r
Y=r
Group=G5
Hidden=1
UpdateDivider=-1

[Al0]
Meter=String
MeterStyle=Style|AlphaSt|STTI
Text=255
Y=20r
LeftMouseUpAction=[#VVS# "alpha" "255" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "255"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=0%

[Al10]
Meter=String
MeterStyle=Style|AlphaSt
Text=229
LeftMouseUpAction=[#VVS# "alpha" "229" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "229"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=10%

[Al20]
Meter=String
MeterStyle=Style|AlphaSt
Text=203
LeftMouseUpAction=[#VVS# "alpha" "203" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "203"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=20%

[Al30]
Meter=String
MeterStyle=Style|AlphaSt
Text=178
LeftMouseUpAction=[#VVS# "alpha" "178" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "178"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=30%

[Al40]
Meter=String
MeterStyle=Style|AlphaSt
Text=152
LeftMouseUpAction=[#VVS# "alpha" "152" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "152"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=40%

[Al50]
Meter=String
MeterStyle=Style|AlphaSt
Text=127
LeftMouseUpAction=[#VVS# "alpha" "127" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "127"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=50%

[Al60]
Meter=String
MeterStyle=Style|AlphaSt
Text=101
LeftMouseUpAction=[#VVS# "alpha" "101" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "101"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=60%

[Al70]
Meter=String
MeterStyle=Style|AlphaSt
Text=76
LeftMouseUpAction=[#VVS# "alpha" "76" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "76"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=70%

[Al80]
Meter=String
MeterStyle=Style|AlphaSt
Text=50
LeftMouseUpAction=[#VVS# "alpha" "50" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "50"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=80%

[Al90]
Meter=String
MeterStyle=Style|AlphaSt
Text=25
LeftMouseUpAction=[#VVS# "alpha" "25" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "25"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=90%