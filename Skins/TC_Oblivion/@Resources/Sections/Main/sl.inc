[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

SL_BTN_W=218
SL_BTN_H=20


;BORDERS==========================================================

[SL_Border]
Meter=image
Imagename=#Bor_L_SL#
x=10
y=60
Antialias=1
hidden=1
Group=Main_Launcher | Main

;LABEL==================================================

[SL_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#SL_Title#
x=20r
y=40r
hidden=1
Group=Main_Launcher | Main


;BUTTONS=========================================================

;Button 1=====================

[SL_BTN1]
Meter=Image
ImageName=#BTN_SL#
x=2r
y=29r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN1_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN1_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 2=====================

[SL_BTN2]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN2_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN2_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 3=====================

[SL_BTN3]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN3_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN3_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 4=====================

[SL_BTN4]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN4_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN4_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 5=====================

[SL_BTN5]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN5_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN5_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 6=====================

[SL_BTN6]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN6_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN6_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 7=====================

[SL_BTN7]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN7_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN7_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 8=====================

[SL_BTN8]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN8_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN8_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 9=====================

[SL_BTN9]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN9_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN9_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN9_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main


;Button 10=====================

[SL_BTN10]
Meter=Image
ImageName=#BTN_SL#
x=-10r
y=21r
W=#SL_BTN_W#
H=#SL_BTN_H#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL_HOVER#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName #BTN_SL#][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#SL_BTN10_FUNC#][!HideMeterGroup Main_Launcher][!Redraw]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[SL_BTN10_Txt]
meter=string
MeterStyle=TS_STD | TS_White | TS_Size9
text=#SL_BTN10_Txt#
x=10r
y=3r
hidden=1
Group=Main_Launcher | Main