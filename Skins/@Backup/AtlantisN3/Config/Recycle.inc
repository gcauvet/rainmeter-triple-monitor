[Il01]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,119,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=115
Y=70

[Il02]
Meter=Shape
MeterStyle=PF1|PG4
Shape=Rectangle 0,0,99,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=255
Y=r

[STI9]
Shape=Rectangle 0,0,24,14,2 | Fill LinearGradient GradientClo | Extend BallsClo
X=30r
Y=90

[Il03]
Meter=Shape
MeterStyle=PF|PG4|STI9
X=116

[Il04]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il05]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il06]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il07]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il08]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Meter=Shape
MeterStyle=PF|PG4|STI9

[Il10]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il11]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Il12]
Meter=Shape
MeterStyle=PF|PG4|STI9

[Recy]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#PTRCP#:
Y=70
UpdateDivider=-1

[Currrecy]
Meter=String
MeterStyle=Style|PG4
X=260
Y=r
Text=#cort# (#OACT#)

[Rc1e]
Meter=String
MeterStyle=Style|STTI|PG4
Y=20r
Text=150
LeftMouseUpAction=[#VVS# "CorT" "150" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "150 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc2e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=250
LeftMouseUpAction=[#VVS# "CorT" "250" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "250 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc3e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=350
LeftMouseUpAction=[#VVS# "CorT" "350" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "350 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc14e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=450
LeftMouseUpAction=[#VVS# "CorT" "450" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "450 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc15e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=550
LeftMouseUpAction=[#VVS# "CorT" "550" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "550 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc16e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=650
LeftMouseUpAction=[#VVS# "CorT" "650" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "650 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc17e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=750
LeftMouseUpAction=[#VVS# "CorT" "750" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "750 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc18e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=850
LeftMouseUpAction=[#VVS# "CorT" "850" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "850 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1

[Rc19e]
Meter=String
MeterStyle=Style|PG4|STSL1
Text=950
LeftMouseUpAction=[#VVS# "CorT" "950" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\HDD\Recycle"][!SetOption Currrecy Text "950 (#OACT#)"][!UpdateMeter Currrecy][!Redraw]
UpdateDivider=-1