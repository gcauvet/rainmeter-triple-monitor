[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc
@include3=#@#Images.inc

[OV_CTRL_BTN1]
Meter=Image
ImageName=#BTN_RE_RED#
x=975
y=28
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Settings\System" "Settings.ini"][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="SKIN SETTINGS"
x=65r
y=5r
Group=OV_CTRL | Overview | Main


;Button 2=====================

[OV_CTRL_BTN2]
Meter=Image
ImageName=#BTN_RE_RED#
x=-65r
y=21r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_RED#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Settings\Launcher_Conf" "Launcher_Conf.ini"][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="LAUNCHER CONF"
x=65r
y=5r
Group=OV_CTRL | Overview | Main

;Button 3=====================

[OV_CTRL_BTN3]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=-65r
y=21r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#@#Plugins\][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="PLUG-INS"
x=65r
y=5r
Group=OV_CTRL | Overview | Main





;Button 4=====================

[OV_CTRL_BTN4]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=70r
y=-57r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Manage][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="MANAGE RAINM"
x=65r
y=5r
Group=OV_CTRL | Overview | Main

;Button 4=====================

[OV_CTRL_BTN5]
Meter=Image
ImageName=#BTN_RE_BLUE#
x=-65r
y=21r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!RefreshApp][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="REFRESH RAINM"
x=65r
y=5r
Group=OV_CTRL | Overview | Main


;Button 6=====================

[OV_CTRL_BTN6]
Meter=Image
ImageName=#BTN_RE_WHITE#
x=-65r
y=21r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_WHITE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!About][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="ABOUT RAINM"
x=65r
y=5r
Group=OV_CTRL | Overview | Main

;Button 7=====================

[OV_CTRL_BTN7]
Meter=Image
ImageName=#BTN_RE_BLUE#
x=-65r
y=21r
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_RE_BLUE#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Quit][!Redraw]
Antialias=1
Group=OV_CTRL | Overview | Main

[OV_CTRL_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Size7 | TS_Black | TS_Center
text="EXIT RAINM"
x=65r
y=5r
Group=OV_CTRL | Overview | Main