[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,200,25,#FPB1# | Extend plus 
Shape2=Rectangle 70,5,2,15,#FPB1# | Extend plus1

[MUptime]
Measure=Uptime
Format=%4!i!#D#, %3!i!h, %2!i!m, %1!i!s 

[MTime]
Measure=TIME
Format=#TForm#

[Time]
Meter=STRING
MeterStyle=Style2
MeasureName=MTime
Text=%1
UpdateDivider=1
X=35
Y=5
StringAlign=Center
LeftMouseDownAction=control.exe timedate.cpl
TooltipText=#D&THP#

[UpTime]
Meter=STRING
MeterStyle=Style3
MeasureName=MUptime
Text=%1
UpdateDivider=1
