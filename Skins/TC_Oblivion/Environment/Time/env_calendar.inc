[Variables]
;Author=Maxi S. (Freaky333) modified by Thorsten C. (HordesPrime)

@include=#@#settings.inc
@include2=#@#styles.inc

CalendarStartX=370
CalendarStartY=30
PanelWxH=25
PanelDayTextX=(#PanelWxH#-6)r
PanelDayTextY=(#PanelWxH#-22)r
NextPanelX=10r
NextPanelY=(-#PanelWxH#+22)r
NextPanelLineX=(-#PanelWxH#*7-18)r
NextPanelLineY=26r

;============================================================================================================================
;==========================================================Calendar==========================================================
;============================================================================================================================


;====================================================================================================================================
;==========================================================CalendarMeasures==========================================================
;====================================================================================================================================

[MeasureCurrentMonthNum]
Measure=Time
Format=%d
OnChangeAction=!Refresh

[MeasureWeekDayNum]
Measure=Time
Format=%w
UpdateDivider=-1

[MeasureMonthNum]
Measure=Time
Format=%m
UpdateDivider=-1

[MeasureYear]
Measure=Time
Format=%B %Y
UpdateDivider=-1

[MeasureMonthDayCount]
Measure=Calc
Formula=((MeasureMonthNum=4)||(MeasureMonthNum=6)||(MeasureMonthNum=9)||(MeasureMonthNum=11))? 30:((MeasureMonthNum=2)?((((MeasureYear%4)=0)&&((MeasureYear%100)>0))? 29:(((MeasureYear%400)=0)? 29:28)):31)
UpdateDivider=-1

[MeasurePrevMonthDayCount]
Measure=Calc
Formula=((MeasureMonthNum-1=4)||(MeasureMonthNum-1=6)||(MeasureMonthNum-1=9)||(MeasureMonthNum-1=11))? 30:((MeasureMonthNum-1=2)?((((MeasureYear%4)=0)&&((MeasureYear%100)>0))? 29:(((MeasureYear%400)=0)? 29:28)):31)
UpdateDivider=-1

[MeasureMonthFirstWeekDay]
Measure=Calc
Formula=((MeasureWeekDayNum>MeasureCurrentMonthNum)||(MeasureWeekDayNum=MeasureCurrentMonthNum))?(MeasureWeekDayNum-(MeasureCurrentMonthNum-1)):(7-(ABS(MeasureWeekDayNum-MeasureCurrentMonthNum+1)%7))
UpdateDivider=-1

;==========================================================DaysLineA-Measures-PrevMonth==========================================================

[MeasureA1a]
Measure=Calc
Formula=2+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureA2a]
Measure=Calc
Formula=3+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureA3a]
Measure=Calc
Formula=4+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureA4a]
Measure=Calc
Formula=5+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureA5a]
Measure=Calc
Formula=6+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureA6a]
Measure=Calc
Formula=7+(MeasurePrevMonthDayCount-MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineA-Measures==========================================================

[MeasureA1]
Measure=Calc
Formula=2-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA1Text Text [MeasureA1a]][!SetOption CalendarPanelDayA1Text FontColor #tgreen#,80]
IfAboveValue=1
IfAboveAction=[!SetOption CalendarPanelDayA1Text Text [MeasureA1a]][!SetOption CalendarPanelDayA1Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA2]
Measure=Calc
Formula=3-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA2Text Text [MeasureA2a]][!SetOption CalendarPanelDayA2Text FontColor #tgreen#,80]
IfAboveValue=2
IfAboveAction=[!SetOption CalendarPanelDayA2Text Text [MeasureA2a]][!SetOption CalendarPanelDayA2Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA3]
Measure=Calc
Formula=4-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA3Text Text [MeasureA3a]][!SetOption CalendarPanelDayA3Text FontColor #tgreen#,80]
IfAboveValue=3
IfAboveAction=[!SetOption CalendarPanelDayA3Text Text [MeasureA3a]][!SetOption CalendarPanelDayA3Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA4]
Measure=Calc
Formula=5-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA4Text Text [MeasureA4a]][!SetOption CalendarPanelDayA4Text FontColor #tgreen#,80]
IfAboveValue=4
IfAboveAction=[!SetOption CalendarPanelDayA4Text Text [MeasureA4a]][!SetOption CalendarPanelDayA4Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA5]
Measure=Calc
Formula=6-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA5Text Text [MeasureA5a]][!SetOption CalendarPanelDayA5Text FontColor #tgreen#,80]
IfAboveValue=5
IfAboveAction=[!SetOption CalendarPanelDayA5Text Text [MeasureA5a]][!SetOption CalendarPanelDayA5Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA6]
Measure=Calc
Formula=7-(MeasureMonthFirstWeekDay)
IfBelowValue=1
IfBelowAction=[!SetOption CalendarPanelDayA6Text Text [MeasureA6a]][!SetOption CalendarPanelDayA6Text FontColor #tgreen#,80]
IfAboveValue=6
IfAboveAction=[!SetOption CalendarPanelDayA6Text Text [MeasureA6a]][!SetOption CalendarPanelDayA6Text FontColor #tgreen#,160]
UpdateDivider=-1

[MeasureA7]
Measure=Calc
Formula=8-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineB-Measures==========================================================

[MeasureB1]
Measure=Calc
Formula=9-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB2]
Measure=Calc
Formula=10-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB3]
Measure=Calc
Formula=11-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB4]
Measure=Calc
Formula=12-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB5]
Measure=Calc
Formula=13-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB6]
Measure=Calc
Formula=14-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureB7]
Measure=Calc
Formula=15-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineC-Measures==========================================================

[MeasureC1]
Measure=Calc
Formula=16-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC2]
Measure=Calc
Formula=17-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC3]
Measure=Calc
Formula=18-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC4]
Measure=Calc
Formula=19-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC5]
Measure=Calc
Formula=20-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC6]
Measure=Calc
Formula=21-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureC7]
Measure=Calc
Formula=22-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineD-Measures==========================================================

[MeasureD1]
Measure=Calc
Formula=23-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD2]
Measure=Calc
Formula=24-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD3]
Measure=Calc
Formula=25-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD4]
Measure=Calc
Formula=26-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD5]
Measure=Calc
Formula=27-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD6]
Measure=Calc
Formula=28-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureD7]
Measure=Calc
Formula=29-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineE-Measures==========================================================

[MeasureE1]
Measure=Calc
Formula=30-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE2]
Measure=Calc
Formula=31-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE3]
Measure=Calc
Formula=32-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE4]
Measure=Calc
Formula=33-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE5]
Measure=Calc
Formula=34-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE6]
Measure=Calc
Formula=35-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureE7]
Measure=Calc
Formula=36-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineF-Measures==========================================================

[MeasureF1]
Measure=Calc
Formula=37-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

[MeasureF2]
Measure=Calc
Formula=38-(MeasureMonthFirstWeekDay)
UpdateDivider=-1

;==========================================================DaysLineF-Measures-NextMonth==========================================================

[MeasureE1a]
Measure=Calc
Formula=30-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE1Text Text [MeasureE1a]][!SetOption CalendarPanelDayE1Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE2a]
Measure=Calc
Formula=31-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE2Text Text [MeasureE2a]][!SetOption CalendarPanelDayE2Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE3a]
Measure=Calc
Formula=32-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE3Text Text [MeasureE3a]][!SetOption CalendarPanelDayE3Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE4a]
Measure=Calc
Formula=33-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE4Text Text [MeasureE4a]][!SetOption CalendarPanelDayE4Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE5a]
Measure=Calc
Formula=34-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE5Text Text [MeasureE5a]][!SetOption CalendarPanelDayE5Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE6a]
Measure=Calc
Formula=35-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE6Text Text [MeasureE6a]][!SetOption CalendarPanelDayE6Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureE7a]
Measure=Calc
Formula=36-MeasureMonthFirstWeekDay-MeasureMonthDayCount
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayE7Text Text [MeasureE7a]][!SetOption CalendarPanelDayE7Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureF1a]
Measure=Calc
Formula=37-MeasureMonthDayCount-MeasureMonthFirstWeekDay
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayF1Text Text [MeasureF1a]][!SetOption CalendarPanelDayF1Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureF2a]
Measure=Calc
Formula=38-MeasureMonthDayCount-MeasureMonthFirstWeekDay
IfAboveValue=0
IfAboveAction=[!SetOption CalendarPanelDayF2Text Text [MeasureF2a]][!SetOption CalendarPanelDayF2Text FontColor #tgreen#,80]
UpdateDivider=-1

[MeasureF3]
Measure=Calc
Formula=39-MeasureMonthDayCount-MeasureMonthFirstWeekDay
UpdateDivider=-1

[MeasureF4]
Measure=Calc
Formula=40-MeasureMonthDayCount-MeasureMonthFirstWeekDay
UpdateDivider=-1

[MeasureF5]
Measure=Calc
Formula=41-MeasureMonthDayCount-MeasureMonthFirstWeekDay
UpdateDivider=-1

[MeasureF6]
Measure=Calc
Formula=42-MeasureMonthDayCount-MeasureMonthFirstWeekDay
UpdateDivider=-1

[MeasureF7]
Measure=Calc
Formula=43-MeasureMonthDayCount-MeasureMonthFirstWeekDay
UpdateDivider=-1

;==========================================================Position-Measures==========================================================

[MeasurePosDayA]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=2)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=3)? 2:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=4)? 3:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=5)? 4:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=6)? 5:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=7)? 6:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=8)? 7:0)))))))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineA]) (#CalendarStartY#+(#PanelWxH#+4)*1) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineA]
Measure=Calc
Formula=(MeasurePosDayA-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineA]) (#CalendarStartY#+(#PanelWxH#+4)*1) CalendarLabel][!RainmeterRedraw]

[MeasurePosDayB]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=9)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=10)? 2:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=11)? 3:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=12)? 4:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=13)? 5:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=14)? 6:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=15)? 7:0)))))))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineB]) (#CalendarStartY#+(#PanelWxH#+4)*2) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineB]
Measure=Calc
Formula=(MeasurePosDayB-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineB]) (#CalendarStartY#+(#PanelWxH#+4)*2) CalendarLabel][!RainmeterRedraw]

[MeasurePosDayC]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=16)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=17)? 2:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=18)? 3:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=19)? 4:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=20)? 5:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=21)? 6:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=22)? 7:0)))))))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineC]) (#CalendarStartY#+(#PanelWxH#+4)*3) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineC]
Measure=Calc
Formula=(MeasurePosDayC-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineC]) (#CalendarStartY#+(#PanelWxH#+4)*3) CalendarLabel][!RainmeterRedraw]

[MeasurePosDayD]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=23)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=24)? 2:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=25)? 3:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=26)? 4:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=27)? 5:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=28)? 6:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=29)? 7:0)))))))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineD]) (#CalendarStartY#+(#PanelWxH#+4)*4) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineD]
Measure=Calc
Formula=(MeasurePosDayD-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineD]) (#CalendarStartY#+(#PanelWxH#+4)*4) CalendarLabel][!RainmeterRedraw]

[MeasurePosDayE]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=30)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=31)? 2:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=32)? 3:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=33)? 4:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=34)? 5:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=35)? 6:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=36)? 7:0)))))))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineE]) (#CalendarStartY#+(#PanelWxH#+4)*5) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineE]
Measure=Calc
Formula=(MeasurePosDayE-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineE]) (#CalendarStartY#+(#PanelWxH#+4)*5) CalendarLabel][!RainmeterRedraw]

[MeasurePosDayF]
Measure=Calc
Formula=(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=37)? 1:(((MeasureCurrentMonthNum+MeasureMonthFirstWeekDay)=38)? 2:0))
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineF]) (#CalendarStartY#+(#PanelWxH#+4)*6) CalendarLabel][!RainmeterRedraw]

[MeasurePosLineF]
Measure=Calc
Formula=(MeasurePosDayF-1)
IfAboveValue=0
IfAboveAction=[!MoveMeter (#CalendarStartX#+(#PanelWxH#+4)*[MeasurePosLineF]) (#CalendarStartY#+(#PanelWxH#+4)*6) CalendarLabel][!RainmeterRedraw]

;================================================================================================================================
;==========================================================DaysHeadline==========================================================
;================================================================================================================================


[MeasureDate]
Measure=Time
Format=%A, %dth %B, %Y
UpdateDivider=-1

[CalendarPanelDay1]
Meter=IMAGE
X=#CalendarStartX#
Y=#CalendarStartY#
W=#PanelWxH#
H=#PanelWxH#
SolidColor=#tgreen#,100
AntiAlias=1

[CalendarPanelDay1Text]
Meter=STRING
Text=Mo
X=#PanelDayTextX#
Y=#PanelDayTextY#
StringAlign=RIGHT
FontColor=#white#
FontFace=#Font#
FontSize=7
DynamicVariables=1
AntiAlias=1

[CalendarPanelDay2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=Tu

[CalendarPanelDay3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=We

[CalendarPanelDay4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=Th

[CalendarPanelDay5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=Fr

[CalendarPanelDay6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=Sa

[CalendarPanelDay7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDay7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=Su

;=============================================================================================================================
;==========================================================DaysLineA==========================================================
;=============================================================================================================================

[CalendarPanelDayA1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayA1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA1]

[CalendarPanelDayA2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA2]

[CalendarPanelDayA3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA3]

[CalendarPanelDayA4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA4]

[CalendarPanelDayA5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA5]

[CalendarPanelDayA6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA6]

[CalendarPanelDayA7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayA7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureA7]

;=============================================================================================================================
;==========================================================DaysLineB==========================================================
;=============================================================================================================================

[CalendarPanelDayB1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayB1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB1]

[CalendarPanelDayB2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB2]

[CalendarPanelDayB3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB3]

[CalendarPanelDayB4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB4]

[CalendarPanelDayB5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB5]

[CalendarPanelDayB6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB6]

[CalendarPanelDayB7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayB7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureB7]

;=============================================================================================================================
;==========================================================DaysLineC==========================================================
;=============================================================================================================================

[CalendarPanelDayC1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayC1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC1]

[CalendarPanelDayC2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC2]

[CalendarPanelDayC3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC3]

[CalendarPanelDayC4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC4]

[CalendarPanelDayC5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC5]

[CalendarPanelDayC6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC6]

[CalendarPanelDayC7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayC7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureC7]

;=============================================================================================================================
;==========================================================DaysLineD==========================================================
;=============================================================================================================================

[CalendarPanelDayD1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayD1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD1]

[CalendarPanelDayD2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD2]

[CalendarPanelDayD3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD3]

[CalendarPanelDayD4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD4]

[CalendarPanelDayD5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD5]

[CalendarPanelDayD6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD6]

[CalendarPanelDayD7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayD7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureD7]

;=============================================================================================================================
;==========================================================DaysLineE==========================================================
;=============================================================================================================================

[CalendarPanelDayE1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayE1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE1]

[CalendarPanelDayE2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE2]

[CalendarPanelDayE3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE3]

[CalendarPanelDayE4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE4]

[CalendarPanelDayE5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE5]

[CalendarPanelDayE6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE6]

[CalendarPanelDayE7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayE7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureE7]

;=============================================================================================================================
;==========================================================DaysLineF==========================================================
;=============================================================================================================================

[CalendarPanelDayF1]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelLineX#
Y=#NextPanelLineY#

[CalendarPanelDayF1Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF1]

[CalendarPanelDayF2]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF2Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF2]

[CalendarPanelDayF3]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF3Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF3]
FontColor=#tgreen#,80

[CalendarPanelDayF4]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF4Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF4]
FontColor=#tgreen#,80

[CalendarPanelDayF5]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF5Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF5]
FontColor=#tgreen#,80

[CalendarPanelDayF6]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF6Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF6]
FontColor=#tgreen#,80

[CalendarPanelDayF7]
Meter=IMAGE
MeterStyle=CalendarPanelDay1
X=#NextPanelX#
Y=#NextPanelY#

[CalendarPanelDayF7Text]
Meter=STRING
MeterStyle=CalendarPanelDay1Text
Text=[MeasureF7]
FontColor=#tgreen#,80

[CalendarLabel]
Meter=IMAGE
X=0
Y=0
W=#PanelWxH#
H=#PanelWxH#
SolidColor=255,0,0,150
