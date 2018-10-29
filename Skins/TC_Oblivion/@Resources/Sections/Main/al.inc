[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc


AL1_BTN_W=146
AL1_BTN_H=20

AL2_BTN_W=146
AL2_BTN_H=20

AL3_BTN_W=146
AL3_BTN_H=20


;==========================================================LAUNCHER==========================================================

;AppLauncher1==========================================
[AL_Border]
Meter=image
Imagename=#Bor_L_AL#
x=360
y=60
Antialias=1
hidden=1
Group=Main_Launcher | Main





;===AppLauncher 1=====================


[AL1_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#AL1_Title#
x=20r
y=40r
hidden=1
Group=Main_Launcher | Main

;Button 1=====================

[AL1_BTN1]
Meter=Image
ImageName=#BTN_L_R1#
x=2r
y=29r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN1_Txt FontColor #red#][!UpdateMeter AL1_BTN1_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN1_Txt FontColor #black#][!UpdateMeter AL1_BTN1_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN1_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN1_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 2=====================

[AL1_BTN2]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN2_Txt FontColor #red#][!UpdateMeter AL1_BTN2_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN2_Txt FontColor #black#][!UpdateMeter AL1_BTN2_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN2_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN2_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 3=====================

[AL1_BTN3]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN3_Txt FontColor #red#][!UpdateMeter AL1_BTN3_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN3_Txt FontColor #black#][!UpdateMeter AL1_BTN3_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN3_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN3_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 4=====================

[AL1_BTN4]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN4_Txt FontColor #red#][!UpdateMeter AL1_BTN4_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN4_Txt FontColor #black#][!UpdateMeter AL1_BTN4_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN4_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN4_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 5=====================

[AL1_BTN5]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN5_Txt FontColor #red#][!UpdateMeter AL1_BTN5_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN5_Txt FontColor #black#][!UpdateMeter AL1_BTN5_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN5_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN5_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 6=====================
[AL1_BTN6]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-99r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN6_Txt FontColor #red#][!UpdateMeter AL1_BTN6_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN6_Txt FontColor #black#][!UpdateMeter AL1_BTN6_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN6_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN6_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 7=====================

[AL1_BTN7]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN7_Txt FontColor #red#][!UpdateMeter AL1_BTN7_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN7_Txt FontColor #black#][!UpdateMeter AL1_BTN7_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN7_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN7_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 8=====================

[AL1_BTN8]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN8_Txt FontColor #red#][!UpdateMeter AL1_BTN8_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN8_Txt FontColor #black#][!UpdateMeter AL1_BTN8_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN8_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN8_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 9=====================

[AL1_BTN9]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-51r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN9_Txt FontColor #red#][!UpdateMeter AL1_BTN9_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN9_Txt FontColor #black#][!UpdateMeter AL1_BTN9_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN9_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN9_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN9_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 10=====================

[AL1_BTN10]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN10_Txt FontColor #red#][!UpdateMeter AL1_BTN10_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN10_Txt FontColor #black#][!UpdateMeter AL1_BTN10_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN10_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN10_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN10_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 11=====================

[AL1_BTN11]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN11_Txt FontColor #red#][!UpdateMeter AL1_BTN11_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN11_Txt FontColor #black#][!UpdateMeter AL1_BTN11_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN11_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN11_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN11_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 12=====================

[AL1_BTN12]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL1_BTN_W#
H=#AL1_BTN_H#
MouseOverAction=[!SetOption AL1_BTN12_Txt FontColor #red#][!UpdateMeter AL1_BTN12_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL1_BTN12_Txt FontColor #black#][!UpdateMeter AL1_BTN12_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL1_BTN12_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL1_BTN12_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL1_BTN12_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main


;AppLauncher 2============================================


[AL2_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#AL2_Title#
x=-342r
y=55r
hidden=1
Group=Main_Launcher | Main


;Button 1=====================

[AL2_BTN1]
Meter=Image
ImageName=#BTN_L_R1#
x=2r
y=29r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN1_Txt FontColor #red#][!UpdateMeter AL2_BTN1_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN1_Txt FontColor #black#][!UpdateMeter AL2_BTN1_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN1_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN1_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 2=====================

[AL2_BTN2]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN2_Txt FontColor #red#][!UpdateMeter AL2_BTN2_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN2_Txt FontColor #black#][!UpdateMeter AL2_BTN2_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN2_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN2_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 3=====================

[AL2_BTN3]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN3_Txt FontColor #red#][!UpdateMeter AL2_BTN3_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN3_Txt FontColor #black#][!UpdateMeter AL2_BTN3_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN3_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN3_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 4=====================

[AL2_BTN4]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN4_Txt FontColor #red#][!UpdateMeter AL2_BTN4_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN4_Txt FontColor #black#][!UpdateMeter AL2_BTN4_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN4_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN4_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 5=====================

[AL2_BTN5]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN5_Txt FontColor #red#][!UpdateMeter AL2_BTN5_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN5_Txt FontColor #black#][!UpdateMeter AL2_BTN5_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN5_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN5_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 6=====================
[AL2_BTN6]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-99r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN6_Txt FontColor #red#][!UpdateMeter AL2_BTN6_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN6_Txt FontColor #black#][!UpdateMeter AL2_BTN6_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN6_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN6_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 7=====================

[AL2_BTN7]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN7_Txt FontColor #red#][!UpdateMeter AL2_BTN7_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN7_Txt FontColor #black#][!UpdateMeter AL2_BTN7_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN7_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN7_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 8=====================

[AL2_BTN8]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN8_Txt FontColor #red#][!UpdateMeter AL2_BTN8_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN8_Txt FontColor #black#][!UpdateMeter AL2_BTN8_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN8_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN8_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 9=====================

[AL2_BTN9]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN9_Txt FontColor #red#][!UpdateMeter AL2_BTN9_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN9_Txt FontColor #black#][!UpdateMeter AL2_BTN9_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN9_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN9_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN9_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 10=====================

[AL2_BTN10]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#AL2_BTN_W#
H=#AL2_BTN_H#
MouseOverAction=[!SetOption AL2_BTN10_Txt FontColor #red#][!UpdateMeter AL2_BTN10_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL2_BTN10_Txt FontColor #black#][!UpdateMeter AL2_BTN10_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL2_BTN10_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL2_BTN10_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL2_BTN10_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main


;AppLauncher 3============================================

[AL3_Title]
meter=string
MeterStyle=TS_STD | TS_Blue | TS_Size10
text=#AL3_Title#
x=-193r
y=30r
hidden=1
Group=Main_Launcher | Main

;Button 1=====================

[AL3_BTN1]
Meter=Image
ImageName=#BTN_L_R1#
x=2r
y=29r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN1_Txt FontColor #red#][!UpdateMeter AL3_BTN1_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN1_Txt FontColor #black#][!UpdateMeter AL3_BTN1_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN1_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN1_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN1_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 2=====================

[AL3_BTN2]
Meter=Image
ImageName=#BTN_L_R2#
x=-70r
y=21r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN2_Txt FontColor #red#][!UpdateMeter AL3_BTN2_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN2_Txt FontColor #black#][!UpdateMeter AL3_BTN2_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN2_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN2_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN2_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 3=====================

[AL3_BTN3]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=21r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN3_Txt FontColor #red#][!UpdateMeter AL3_BTN3_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN3_Txt FontColor #black#][!UpdateMeter AL3_BTN3_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN3_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN3_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN3_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 4=====================

[AL3_BTN4]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN4_Txt FontColor #red#][!UpdateMeter AL3_BTN4_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN4_Txt FontColor #black#][!UpdateMeter AL3_BTN4_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN4_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN4_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN4_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 5=====================

[AL3_BTN5]
Meter=Image
ImageName=#BTN_L_R1#
x=80r
y=-75r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN5_Txt FontColor #red#][!UpdateMeter AL3_BTN5_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN5_Txt FontColor #black#][!UpdateMeter AL3_BTN5_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN5_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN5_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN5_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 6=====================
[AL3_BTN6]
Meter=Image
ImageName=#BTN_L_R3#
x=-70r
y=44r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN6_Txt FontColor #red#][!UpdateMeter AL3_BTN6_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN6_Txt FontColor #black#][!UpdateMeter AL3_BTN6_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN6_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN6_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN6_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 7=====================

[AL3_BTN7]
Meter=Image
ImageName=#BTN_L_R4#
x=-70r
y=21r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN7_Txt FontColor #red#][!UpdateMeter AL3_BTN7_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN7_Txt FontColor #black#][!UpdateMeter AL3_BTN7_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN7_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN7_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN7_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main

;Button 8=====================

[AL3_BTN8]
Meter=Image
ImageName=#BTN_L_R5#
x=-70r
y=21r
W=#AL3_BTN_W#
H=#AL3_BTN_H#
MouseOverAction=[!SetOption AL3_BTN8_Txt FontColor #red#][!UpdateMeter AL3_BTN8_Txt][!Redraw]
MouseLeaveAction=[!SetOption AL3_BTN8_Txt FontColor #black#][!UpdateMeter AL3_BTN8_Txt][!Redraw]
LeftMouseUpAction=!Execute ["#AL3_BTN8_FUNC#"][!HideMeterGroup Main_Launcher]
Antialias=1
hidden=1
Group=Main_Launcher | Main

[AL3_BTN8_Txt]
meter=string
MeterStyle=TS_STD | TS_Black | TS_Size7 | TS_Center
text=#AL3_BTN8_Txt#
x=70r
y=3r
hidden=1
Group=Main_Launcher | Main