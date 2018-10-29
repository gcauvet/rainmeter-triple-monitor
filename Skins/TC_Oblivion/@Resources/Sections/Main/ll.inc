[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

LL1_BTN_W=146
LL1_BTN_H=20

LL2_BTN_W=146
lL2_BTN_H=20


;==========================================================LAUNCHER==========================================================

;LinkLauncher1==========================================
[LL_Border]
Meter=image
Imagename=#Bor_L_LL#
x=960
y=60
Antialias=1
hidden=1
Group=Main_Launcher | Main

;===LinkLauncher 1=====================
[LL1_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#LL1_Title#
x=20r
y=40r
hidden=1
Group=Main_Launcher | Main

;Button 1=====================

[LL1_BTN1]
Meter=Image
ImageName=#BTN_L_R1#
x=2r
y=29r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN1_Txt FontColor #red#][!UpdateMeter LL1_BTN1_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN1_Txt FontColor #black#][!UpdateMeter LL1_BTN1_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN1_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN1_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 2=====================

[LL1_BTN2]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN2_Txt FontColor #red#][!UpdateMeter LL1_BTN2_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN2_Txt FontColor #black#][!UpdateMeter LL1_BTN2_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN2_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN2_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 3=====================

[LL1_BTN3]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN3_Txt FontColor #red#][!UpdateMeter LL1_BTN3_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN3_Txt FontColor #black#][!UpdateMeter LL1_BTN3_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN3_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN3_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 4=====================

[LL1_BTN4]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN4_Txt FontColor #red#][!UpdateMeter LL1_BTN4_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN4_Txt FontColor #black#][!UpdateMeter LL1_BTN4_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN4_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN4_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 5=====================

[LL1_BTN5]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN5_Txt FontColor #red#][!UpdateMeter LL1_BTN5_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN5_Txt FontColor #black#][!UpdateMeter LL1_BTN5_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN5_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN5_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 6=====================
[LL1_BTN6]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-99r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN6_Txt FontColor #red#][!UpdateMeter LL1_BTN6_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN6_Txt FontColor #black#][!UpdateMeter LL1_BTN6_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN6_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN6_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 7=====================

[LL1_BTN7]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN7_Txt FontColor #red#][!UpdateMeter LL1_BTN7_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN7_Txt FontColor #black#][!UpdateMeter LL1_BTN7_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN7_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN7_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 8=====================

[LL1_BTN8]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN8_Txt FontColor #red#][!UpdateMeter LL1_BTN8_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN8_Txt FontColor #black#][!UpdateMeter LL1_BTN8_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN8_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN8_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 9=====================

[LL1_BTN9]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN9_Txt FontColor #red#][!UpdateMeter LL1_BTN9_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN9_Txt FontColor #black#][!UpdateMeter LL1_BTN9_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN9_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN9_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN9_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 10=====================

[LL1_BTN10]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN10_Txt FontColor #red#][!UpdateMeter LL1_BTN10_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN10_Txt FontColor #black#][!UpdateMeter LL1_BTN10_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN10_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN10_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN10_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 11=====================

[LL1_BTN11]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-99r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN11_Txt FontColor #red#][!UpdateMeter LL1_BTN11_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN11_Txt FontColor #black#][!UpdateMeter LL1_BTN11_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN11_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN11_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN11_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 12=====================

[LL1_BTN12]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN12_Txt FontColor #red#][!UpdateMeter LL1_BTN12_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN12_Txt FontColor #black#][!UpdateMeter LL1_BTN12_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN12_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN12_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN12_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 13=====================

[LL1_BTN13]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN13_Txt FontColor #red#][!UpdateMeter LL1_BTN13_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN13_Txt FontColor #black#][!UpdateMeter LL1_BTN13_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN13_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN13_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN13_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 14=====================

[LL1_BTN14]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN14_Txt FontColor #red#][!UpdateMeter LL1_BTN14_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN14_Txt FontColor #black#][!UpdateMeter LL1_BTN14_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN14_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN14_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN14_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 15=====================

[LL1_BTN15]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#LL1_BTN_W#
H=#LL1_BTN_H#
MouseOverAction=[!SetOption LL1_BTN15_Txt FontColor #red#][!UpdateMeter LL1_BTN15_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL1_BTN15_Txt FontColor #black#][!UpdateMeter LL1_BTN15_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL1_BTN15_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL1_BTN15_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL1_BTN15_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main


;AppLauncher 2============================================

[LL2_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#LL2_Title#
x=-342r
y=30r
hidden=1
Group=Main_Launcher | Main

;Button 1=====================

[LL2_BTN1]
Meter=Image
ImageName=#BTN_L_R1#
x=2r
y=29r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN1_Txt FontColor #red#][!UpdateMeter LL2_BTN1_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN1_Txt FontColor #black#][!UpdateMeter LL2_BTN1_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN1_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN1_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 2=====================

[LL2_BTN2]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN2_Txt FontColor #red#][!UpdateMeter LL2_BTN2_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN2_Txt FontColor #black#][!UpdateMeter LL2_BTN2_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN2_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN2_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 3=====================

[LL2_BTN3]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN3_Txt FontColor #red#][!UpdateMeter LL2_BTN3_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN3_Txt FontColor #black#][!UpdateMeter LL2_BTN3_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN3_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN3_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 4=====================

[LL2_BTN4]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-51r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN4_Txt FontColor #red#][!UpdateMeter LL2_BTN4_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN4_Txt FontColor #black#][!UpdateMeter LL2_BTN4_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN4_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN4_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 5=====================

[LL2_BTN5]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN5_Txt FontColor #red#][!UpdateMeter LL2_BTN5_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN5_Txt FontColor #black#][!UpdateMeter LL2_BTN5_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN5_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN5_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 6=====================
[LL2_BTN6]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN6_Txt FontColor #red#][!UpdateMeter LL2_BTN6_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN6_Txt FontColor #black#][!UpdateMeter LL2_BTN6_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN6_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN6_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 7=====================

[LL2_BTN7]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-51r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN7_Txt FontColor #red#][!UpdateMeter LL2_BTN7_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN7_Txt FontColor #black#][!UpdateMeter LL2_BTN7_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN7_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN7_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 8=====================

[LL2_BTN8]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=45r
W=#LL2_BTN_W#
H=#LL2_BTN_H#
MouseOverAction=[!SetOption LL2_BTN8_Txt FontColor #red#][!UpdateMeter LL2_BTN8_Txt][!Redraw]
MouseLeaveAction=[!SetOption LL2_BTN8_Txt FontColor #black#][!UpdateMeter LL2_BTN8_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#LL2_BTN8_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[LL2_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#LL2_BTN8_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main