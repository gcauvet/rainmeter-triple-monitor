[Im3]
Meter=Shape
MeterStyle=PF|PG1
X=115
Y=310

[Im4]
Meter=Shape
MeterStyle=PF|PG1
X=174
Y=310

[Im5]
Meter=Shape
MeterStyle=PF|PG1
X=245
Y=310

[Im6]
Meter=Shape
MeterStyle=PF|PG1
X=305
Y=310

[Im7]
Meter=Shape
MeterStyle=PF|PG1
X=115
Y=335

[Im8]
Meter=Shape
MeterStyle=PF|PG1
X=174
Y=335

[Im9]
Meter=Shape
MeterStyle=PF|PG1
X=245
Y=335

[Im10]
Meter=Shape
MeterStyle=PF|PG1
X=305
Y=335

[Im14]
Meter=Shape
MeterStyle=PF1|PG1
Shape=Rectangle 0,0,69,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=286

[Im15]
Meter=Shape
MeterStyle=PF1|PG1
Shape=Rectangle 0,0,154,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=205
Y=286

[Player]
Meter=String
MeterStyle=Style|STTI|PG1
Text=#Playr#:
Y=286
UpdateDivider=-1

[Cur]
Meter=String
MeterStyle=Style|PG1
Text=#player# (#OACT#)
X=90r
Y=r

[Winamp]
Y=25r
Meter=String
MeterStyle=Style|STTI|PG1
Text=Winamp
LeftMouseUpAction=[#VVS# "Player" "Winamp" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "Winamp (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Winamp Player
UpdateDivider=-1

[WMP]
Meter=String
MeterStyle=Style|PG1
Text=WMP
X=65r
Y=r
LeftMouseUpAction=[#VVS# "Player" "WMP" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "WMP (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Windows Media Player
UpdateDivider=-1

[Monkey]
Meter=String
MeterStyle=Style|PG1
Text=Monkey
X=65r
Y=r
LeftMouseUpAction=[#VVS# "Player" "MediaMonkey" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "MediaMonkey (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=MediaMonkey
UpdateDivider=-1

[ITunes]
Meter=String
MeterStyle=Style|PG1
Text=ITunes
X=65r
Y=r
LeftMouseUpAction=[#VVS# "Player" "iTunes" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "iTunes (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=iTunes Player
UpdateDivider=-1

[CAD]
Meter=String
MeterStyle=Style|STTI|PG1
Text=CAD
X=127
Y=25r
LeftMouseUpAction=[#VVS# "Player" "CAD" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "CAD (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipTitle=CAD - (needs plugins) for VLC, Foobar2000, J. River Media Center, Media Jukebox)
ToolTipText=VLC (libcad plugin), #CRLF#Foobar2000 (foo_cad plugin), #CRLF#J. River Media Jukebox (intcad plugin), #CRLF#J. River Media Center (intcad plugin), #CRLF#MusicBee...
UpdateDivider=-1

[AIMP]
Meter=String
MeterStyle=Style|PG1
Text=AIMP
X=58r
Y=r
LeftMouseUpAction=[#VVS# "Player" "AIMP" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "AIMP (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=AIMP Player
UpdateDivider=-1

[Spotify]
Meter=String
MeterStyle=Style|PG1
Text=Spotify
X=67r
Y=r
LeftMouseUpAction=[#VVS# "Player" "Spotify" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "Spotify (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Spotify 
UpdateDivider=-1

[WLM]
Meter=String
MeterStyle=Style|PG1
Text=WLM
X=64r
Y=r
LeftMouseUpAction=[#VVS# "Player" "WLM" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Sound\Player"][!SetOption Cur Text "WLM (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Last.fm, OpenPandora, Zune...
UpdateDivider=-1