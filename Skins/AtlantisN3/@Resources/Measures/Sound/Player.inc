[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc
UPLV1=[!UpdateMeasureGroup Volu][!UpdateMeterGroup Volu]

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,280,120,#FPB1# | Extend plus
Shape2=Rectangle 70,5,2,110,#FPB1# | Extend plus1

[Bar]
Meter=Shape
Shape=Rectangle 5,0,195,5,2 | Fill LinearGradient Gradient
LeftMouseUpAction=[!CommandMeasure "Wplayer" "SetPosition $MouseX:%$"]
ToolTipText=#STP#
ToolTipType=1
Gradient=270 | #FBC# ; 0.0 | #FBP# ; 0.7 
UpdateDivider=-1
X=73
Y=86

[Bar2]
Meter=Shape
Shape=Rectangle 6,0.6,192,4,2  | Fill LinearGradient Gradient
Shape2=Rectangle ([WPProgress]*1.93-186),0.6,192,4,2
Shape3=Combine Shape | Intersect Shape2 
Gradient=270 | #FBB# ; 0.0 | #DA1# ; 0.7
DynamicVariables=1
X=r
Y=r

[Wplayer]
Measure=NowPlaying
PlayerName=#Player#
PlayerType=Title
DisableLeadingZero=1
Substitute="":"-"
OnChangeAction=[!UpdateMeasureGroup Sic][!UpdateMeterGroup Sic]

[WPArtist]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=Artist
Substitute="":"-"
UpdateDivider=-1
Group=Sic

[WPAlbum]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=ALBUM
Substitute="":"-"
UpdateDivider=-1
Group=Sic

[WPPosition]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=POSITION
Substitute="":"-"

[WPDuration]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=DURATION
UpdateDivider=-1
Substitute="":"-"
Group=Sic

[WPProgress]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=PROGRESS
Substitute="":"-"

[WCover]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=COVER
UpdateDivider=-1
Group=Sic

[MBitrate]
Measure=Plugin
Plugin=WindowMessagePlugin
WindowClass=Winamp v1.x
WindowMessage=1024 1 126
OnChangeAction=[!UpdateMeter TBTR]
Substitute="":"-"
Group=Sic

[MSample]
Measure=Plugin
Plugin=WindowMessagePlugin
WindowClass=Winamp v1.x
WindowMessage=1024 0 126
Substitute="":"-"
UpdateDivider=-1
Group=Sic

[PProgr]
Measure=NowPlaying
PlayerName=[Wplayer]
PlayerType=State
IfBelowValue=1
IfBelowAction=[!HideMeterGroup Mu]
IfEqualValue=1
IfEqualAction=[!ShowMeterGroup Mu]
UpdateDivider=-1
Group=Sic

[MVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
OnChangeAction=#UPLV1#

[PercentageCalc]
Measure=Calc
Formula=MVolume
IfBelowValue=0
IfBelowAction=[!SetOption MetVolume Text "#Mu#"]
IfAboveValue=-1
IfAboveAction=[!SetOption MetVolume Text "#vol#: %1%"]
UpdateDivider=-1
Group=Volu

[PSTS]
X=5
Y=7
UpdateDivider=-1
Group=Sic

[Cover]
Meter=Shape
MeterStyle=PSTS
Shape=Rectangle 0,0,55,55,30 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient Gradient
Gradient=7,1 | #FBB# ; 0.0 | #DA1# ; 1.0

[Cover1]
Meter=IMAGE
MeterStyle=PSTS
MeasureName=WCover
H=60
W=60

[PCover]
Measure=Calc
Formula=WCover
IfBelowValue=0
IfBelowAction=[!ShowMeter Cover][!HideMeter Cover1]
IfEqualValue=1
IfEqualAction=[!ShowMeter Cover1][!HideMeter Cover]
UpdateDivider=-1
Group=Sic

[GMB]
X=25r
Y=97
FontSize=10
FontFace=Wingdings
MouseOverAction=[!SetOption #CURRENTSECTION# FontSize 12 ][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontSize 10 ][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Vol+]
Meter=STRING
MeterStyle=Style2|GMB
X=105
Text=5
FontFace=Webdings
LeftMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume 5"]#UPLV1#
ToolTipText=#VOLU#

[Prev]
Meter=String
MeterStyle=Style2|GMB
Text=ç
LeftMouseUpAction=[!CommandMeasure "Wplayer" "Previous"]
ToolTipText=#Pre#

[Play]
Meter=String
MeterStyle=Style2|GMB
Text=u
LeftMouseDownAction=[!CommandMeasure "Wplayer" "PlayPause"]
ToolTipText=#P&P#

[Stop]
Meter=String
MeterStyle=Style2|GMB
Text=p
LeftMouseUpAction=[!CommandMeasure "Wplayer" "Stop"]
ToolTipText=#ST#

[Next]
Meter=String
MeterStyle=Style2|GMB
Text=è
LeftMouseDownAction=[!CommandMeasure "Wplayer" "Next"]
ToolTipText=#Next#

[Vol-]
Meter=STRING
MeterStyle=Style2|GMB
FontFace=Webdings
Text=6
LeftMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume -5"]#UPLV1#
ToolTipText=#VOLD#


[STLC]
Text=%1
Y=20r
H=15
W=192
Clipstring=2
ToolTipText=%1
Group=Sic|Mu

[STLC1]
Y=r
Text=%1
Group=Sic|Mu

[Artist]
Meter=STRING
MeterStyle=Style3|STLC
MeasureName=WPArtist
Y=5

[TrackS]
Meter=STRING
MeterStyle=Style3|STLC
MeasureName=Wplayer

[Album]
Meter=STRING
MeterStyle=Style3|STLC
MeasureName=WPAlbum

[Time1]
Meter=STRING
MeasureName=WPPosition
MeasureName2=WPProgress
MeterStyle=Style3|STLC1
Text=%1 - %2%
Y=20r
NumOfDecimals=0
UpdateDivider=1

[Time2]
Meter=STRING
MeasureName=WPDuration
MeterStyle=Style3|STLC1
Text=%1
X=150

[MetVolume]
Meter=String
MeasureName=PercentageCalc
MeterStyle=Style3
X=270
Y=r
StringAlign=Right
LeftMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume 5"]#UPLV1#
RightMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume -5"]#UPLV1#
TooltipText=#VOLC#
Group=Volu

[TBTR]
Meter=STRING
MeasureName=MBitrate
MeterStyle=Style2
Text=%1 kbps
X=32
Y=75
Group=Sic|Mu
StringAlign=Center

[TBTR1]
Meter=STRING
MeasureName=MSample
MeterStyle=Style2
Text=%1 khz
X=r
Y=20r
Group=Sic|Mu
StringAlign=Center