[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc
@include3=#@#Version.inc
@include4=#@#Images.inc

;Version=========================================================
[IN_TM_Version]
meter=string
meterstyle=TS_STD | TS_Size6 | TS_Right
fontcolor=#white#,120
text=Version: #SkinVersion#
x=(#SCREENAREAWIDTH#-10)
y=0


;==========================================================TOP==========================================================

[STORAGE_BG]
meter=image
x=0
y=0
W=#SCREENAREAWIDTH#
H=#SCREENAREAHEIGHT#
solidcolor=0,0,0,0

[Storage_TM_Border]
Meter=image
ImageName=#Bor_TM_Storage#
x=0
y=0
Antialias=1




