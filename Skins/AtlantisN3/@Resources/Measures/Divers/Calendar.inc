[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc
S02=!SetOption
F01=FontColor

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,100,620,#FPB1# | Extend plus
Shape2=Rectangle 25,5,2,610,#FPB1# | Extend plus1

[MeasureDay]
Measure=Time
Format=%#d
OnChangeAction=!Refresh

[MeasureMonth]
Measure=Time
Format=%m
UpdateDivider=-1 

[MeasureYear]
Measure=Time
Format=%Y
UpdateDivider=-1 

[DaysInMonth]
Measure=Calc
Formula=((MeasureMonth=1) || (MeasureMonth=3) || (MeasureMonth=5) || (MeasureMonth=7) || (MeasureMonth=8) || (MeasureMonth=10) || (MeasureMonth=12) ? 31 : ((MeasureMonth=4) || (MeasureMonth=6) || (MeasureMonth=9) || (MeasureMonth=11) ? 30 : (((MeasureYear%4=0) && (MeasureYear%100<>0)) || (MeasureYear%400=0) ? 29 : 28)))
UpdateDivider=-1

[DaysW]
Measure=Calc
IfCondition=MeasureDay=1
IfTrueAction=[#S02# J1 #F01#  "#FBC#"]
IfFalseAction=[#S02# J1 #F01# "#FBB#"]
IfCondition2=MeasureDay=2
IfTrueAction2=[#S02# J2 #F01#  "#FBC#"]
IfFalseAction2=[#S02# J2 #F01# "#FBB#"]
IfCondition3=MeasureDay=3
IfTrueAction3=[#S02# J3 #F01#  "#FBC#"]
IfFalseAction3=[#S02# J3 #F01# "#FBB#"]
IfCondition4=MeasureDay=4
IfTrueAction4=[#S02# J4 #F01#  "#FBC#"]
IfFalseAction4=[#S02# J4 #F01# "#FBB#"]
IfCondition5=MeasureDay=5
IfTrueAction5=[#S02# J5 #F01#  "#FBC#"]
IfFalseAction5=[#S02# J5 #F01# "#FBB#"]
IfCondition6=MeasureDay=6
IfTrueAction6=[#S02# J6 #F01#  "#FBC#"]
IfFalseAction6=[#S02# J6 #F01# "#FBB#"]
IfCondition7=MeasureDay=7
IfTrueAction7=[#S02# J7 #F01#  "#FBC#"]
IfFalseAction7=[#S02# J7 #F01# "#FBB#"]
IfCondition8=MeasureDay=8
IfTrueAction8=[#S02# J8 #F01#  "#FBC#"]
IfFalseAction8=[#S02# J8 #F01# "#FBB#"]
IfCondition9=MeasureDay=9
IfTrueAction9=[#S02# J9 #F01#  "#FBC#"]
IfFalseAction9=[#S02# J9 #F01# "#FBB#"]
IfCondition10=MeasureDay=10
IfTrueAction10=[#S02# J10 #F01#  "#FBC#"]
IfFalseAction10=[#S02# J10 #F01# "#FBB#"]
IfCondition11=MeasureDay=11
IfTrueAction11=[#S02# J11 #F01#  "#FBC#"]
IfFalseAction11=[#S02# J11 #F01# "#FBB#"]
IfCondition12=MeasureDay=12
IfTrueAction12=[#S02# J12 #F01#  "#FBC#"]
IfFalseAction12=[#S02# J12 #F01# "#FBB#"]
IfCondition13=MeasureDay=13
IfTrueAction13=[#S02# J13 #F01#  "#FBC#"]
IfFalseAction13=[#S02# J13 #F01# "#FBB#"]
IfCondition14=MeasureDay=14
IfTrueAction14=[#S02# J14 #F01#  "#FBC#"]
IfFalseAction14=[#S02# J14 #F01# "#FBB#"]
IfCondition15=MeasureDay=15
IfTrueAction15=[#S02# J15 #F01#  "#FBC#"]
IfFalseAction15=[#S02# J15 #F01# "#FBB#"]
IfCondition16=MeasureDay=16
IfTrueAction16=[#S02# J16 #F01#  "#FBC#"]
IfFalseAction16=[#S02# J16 #F01# "#FBB#"]
IfCondition17=MeasureDay=17
IfTrueAction17=[#S02# J17 #F01#  "#FBC#"]
IfFalseAction17=[#S02# J17 #F01# "#FBB#"]
IfCondition18=MeasureDay=18
IfTrueAction18=[#S02# J18 #F01#  "#FBC#"]
IfFalseAction18=[#S02# J18 #F01# "#FBB#"]
IfCondition19=MeasureDay=19
IfTrueAction19=[#S02# J19 #F01#  "#FBC#"]
IfFalseAction19=[#S02# J19 #F01# "#FBB#"]
IfCondition20=MeasureDay=20
IfTrueAction20=[#S02# J20 #F01#  "#FBC#"]
IfFalseAction20=[#S02# J20 #F01# "#FBB#"]
IfCondition21=MeasureDay=21
IfTrueAction21=[#S02# J21 #F01#  "#FBC#"]
IfFalseAction21=[#S02# J21 #F01# "#FBB#"]
IfCondition22=MeasureDay=22
IfTrueAction22=[#S02# J22 #F01#  "#FBC#"]
IfFalseAction22=[#S02# J22 #F01# "#FBB#"]
IfCondition23=MeasureDay=23
IfTrueAction23=[#S02# J23 #F01#  "#FBC#"]
IfFalseAction23=[#S02# J23 #F01# "#FBB#"]
IfCondition24=MeasureDay=24
IfTrueAction24=[#S02# J24 #F01#  "#FBC#"]
IfFalseAction24=[#S02# J24 #F01# "#FBB#"]
IfCondition25=MeasureDay=25
IfTrueAction25=[#S02# J25 #F01#  "#FBC#"]
IfFalseAction25=[#S02# J25 #F01# "#FBB#"]
IfCondition26=MeasureDay=26
IfTrueAction26=[#S02# J26 #F01#  "#FBC#"]
IfFalseAction26=[#S02# J26 #F01# "#FBB#"]
IfCondition27=MeasureDay=27
IfTrueAction27=[#S02# J27 #F01#  "#FBC#"]
IfFalseAction27=[#S02# J27 #F01# "#FBB#"]
IfCondition28=MeasureDay=28
IfTrueAction28=[#S02# J28 #F01#  "#FBC#"]
IfFalseAction28=[#S02# J28 #F01# "#FBB#"]
IfCondition29=MeasureDay=29
IfTrueAction29=[#S02# J29 #F01#  "#FBC#"]
IfFalseAction29=[#S02# J29 #F01# "#FBB#"]
IfCondition30=MeasureDay=30
IfTrueAction30=[#S02# J30 #F01#  "#FBC#"]
IfFalseAction30=[#S02# J30 #F01# "#FBB#"]
IfCondition31=MeasureDay=31
IfTrueAction31=[#S02# J31 #F01#  "#FBC#"]
IfFalseAction31=[#S02# J31 #F01# "#FBB#"]
UpdateDivider=-1 

[PJ1]
X=10
Y=20r

[J1]
Meter=String
MeterStyle=Style1|PJ1
Text=1
Y=4

[J2]
Meter=String
MeterStyle=Style1|PJ1
Text=2

[J3]
Meter=String
MeterStyle=Style1|PJ1
Text=3

[J4]
Meter=String
MeterStyle=Style1|PJ1
Text=4

[J5]
Meter=String
MeterStyle=Style1|PJ1
Text=5

[J6]
Meter=String
MeterStyle=Style1|PJ1
Text=6

[J7]
Meter=String
MeterStyle=Style1|PJ1
Text=7

[J8]
Meter=String
MeterStyle=Style1|PJ1
Text=8

[J9]
Meter=String
MeterStyle=Style1|PJ1
Text=9

[J10]
Meter=String
MeterStyle=Style1|PJ1
Text=10

[J11]
Meter=String
MeterStyle=Style1|PJ1
Text=11

[J12]
Meter=String
MeterStyle=Style1|PJ1
Text=12

[J13]
Meter=String
MeterStyle=Style1|PJ1
Text=13

[J14]
Meter=String
MeterStyle=Style1|PJ1
Text=14

[J15]
Meter=String
MeterStyle=Style1|PJ1
Text=15

[J16]
Meter=String
MeterStyle=Style1|PJ1
Text=16

[J17]
Meter=String
MeterStyle=Style1|PJ1
Text=17

[J18]
Meter=String
MeterStyle=Style1|PJ1
Text=18

[J19]
Meter=String
MeterStyle=Style1|PJ1
Text=19

[J20]
Meter=String
MeterStyle=Style1|PJ1
Text=20

[J21]
Meter=String
MeterStyle=Style1|PJ1
Text=21

[J22]
Meter=String
MeterStyle=Style1|PJ1
Text=22

[J23]
Meter=String
MeterStyle=Style1|PJ1
Text=23

[J24]
Meter=String
MeterStyle=Style1|PJ1
Text=24

[J25]
Meter=String
MeterStyle=Style1|PJ1
Text=25

[J26]
Meter=String
MeterStyle=Style1|PJ1
Text=26

[J27]
Meter=String
MeterStyle=Style1|PJ1
Text=27

[J28]
Meter=String
MeterStyle=Style1|PJ1
Text=28

[J29]
Meter=String
MeterStyle=Style1|PJ1
Text=29
Hidden=[Ms29]

[J30]
Meter=String
MeterStyle=Style1|PJ1
Text=30
Hidden=[Ms30]

[J31]
Meter=String
MeterStyle=Style1|PJ1
Text=31
Hidden=[Ms31]

[Ms29]
Measure=Calc
Formula=DaysInMonth<29
UpdateDivider=-1

[Ms30]
Measure=Calc
Formula=DaysInMonth<30
UpdateDivider=-1

[Ms31]
Measure=Calc
Formula=DaysInMonth<31
UpdateDivider=-1


[MonthW]
Measure=Calc
IfCondition=MeasureMonth=1
IfTrueAction=[#S02# M1 #F01#  "#FBC#"]
IfFalseAction=[#S02# M1 #F01# "#FBB#"]
IfCondition2=MeasureMonth=2
IfTrueAction2=[#S02# M2 #F01#  "#FBC#"]
IfFalseAction2=[#S02# M2 #F01# "#FBB#"]
IfCondition3=MeasureMonth=3
IfTrueAction3=[#S02# M3 #F01#  "#FBC#"]
IfFalseAction3=[#S02# M3 #F01# "#FBB#"]
IfCondition4=MeasureMonth=4
IfTrueAction4=[#S02# M4 #F01#  "#FBC#"]
IfFalseAction4=[#S02# M4 #F01# "#FBB#"]
IfCondition5=MeasureMonth=5
IfTrueAction5=[#S02# M5 #F01#  "#FBC#"]
IfFalseAction5=[#S02# M5 #F01# "#FBB#"]
IfCondition6=MeasureMonth=6
IfTrueAction6=[#S02# M6 #F01#  "#FBC#"]
IfFalseAction6=[#S02# M6 #F01# "#FBB#"]
IfCondition7=MeasureMonth=7
IfTrueAction7=[#S02# M7 #F01#  "#FBC#"]
IfFalseAction7=[#S02# M7 #F01# "#FBB#"]
IfCondition8=MeasureMonth=8
IfTrueAction8=[#S02# M8 #F01#  "#FBC#"]
IfFalseAction8=[#S02# M8 #F01# "#FBB#"]
IfCondition9=MeasureMonth=9
IfTrueAction9=[#S02# M9 #F01#  "#FBC#"]
IfFalseAction9=[#S02# M9 #F01# "#FBB#"]
IfCondition10=MeasureMonth=10
IfTrueAction10=[#S02# M10 #F01#  "#FBC#"]
IfFalseAction10=[#S02# M10 #F01# "#FBB#"]
IfCondition11=MeasureMonth=11
IfTrueAction11=[#S02# M11 #F01#  "#FBC#"]
IfFalseAction11=[#S02# M11 #F01# "#FBB#"]
IfCondition12=MeasureMonth=12
IfTrueAction12=[#S02# M12 #F01#  "#FBC#"]
IfFalseAction12=[#S02# M12 #F01# "#FBB#"]
UpdateDivider=-1 

[PJ2]
X=35
Y=40r

[M1]
Meter=String
MeterStyle=Style4|PJ2
Text=#January#
Y=85

[M2]
Meter=String
MeterStyle=Style4|PJ2
Text=#February#

[M3]
Meter=String
MeterStyle=Style4|PJ2
Text=#March#

[M4]
Meter=String
MeterStyle=Style4|PJ2
Text=#April#

[M5]
Meter=String
MeterStyle=Style4|PJ2
Text=#May#

[M6]
Meter=String
MeterStyle=Style4|PJ2
Text=#June#

[M7]
Meter=String
MeterStyle=Style4|PJ2
Text=#July#

[M8]
Meter=String
MeterStyle=Style4|PJ2
Text=#August#

[M9]
Meter=String
MeterStyle=Style4|PJ2
Text=#September#

[M10]
Meter=String
MeterStyle=Style4|PJ2
Text=#October#

[M11]
Meter=String
MeterStyle=Style4|PJ2
Text=#November#

[M12]
Meter=String
MeterStyle=Style4|PJ2
Text=#December#

