[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc
@Include3=#@#Measures\Divers\WXDataWeatherRegExp.inc

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,230,350,#FPB1# | Extend plus
Shape2=Rectangle 60,5,2,340,#FPB1# | Extend plus1

[STPI]
X=5
Y=5
H=40
W=40
DynamicVariables=1
PreserveAspectRatio=1
AntiAlias=1
Group=Weather
UpdateDivider=-1

[STD]
Y=r
H=15
W=150
Group=Weather
ClipString=1
FontColor=#FBC#

[STD1]
X=r
Y=20r
H=15
W=150
Group=Weather
ClipString=1

[WeatherParent]
Measure=Plugin
Plugin=WebParser
UpdateRate=650
URL=http://wxdata.weather.com/wxdata/weather/local/#WeatherCode#?cc=*&unit=#Unit#&dayf=6&locale=#Locale#
RegExp=(?siU)^(.*)$
FinishAction=[!UpdateMeasureGroup Weather][!UpdateMeterGroup Weather]
ForceReload=1
Group=Weather

;Today

[TodayGeneralParent]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#TodayGeneral#
UpdateDivider=-1

[DayWeek]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayGeneralParent]
StringIndex=2
Substitute=#jpw#
UpdateDivider=-1

[MonthDay]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayGeneralParent]
StringIndex=3
Substitute=#jpw1#
UpdateDivider=-1

[TodayConditionsParent]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#TodayDayConditions#
UpdateDivider=-1

[IconCurrent]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayConditionsParent]
StringIndex=1
UpdateDivider=-1

[Condition]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayConditionsParent]
StringIndex=2
UpdateDivider=-1

[LowTemp]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayGeneralParent]
StringIndex=5
UpdateDivider=-1

[HighTemp]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[TodayGeneralParent]
StringIndex=4
UpdateDivider=-1


;Today

[MeterCurrentIcon]
Meter=Image
MeasureName=IconCurrent
MeterStyle=STPI
ImagePath=#@#Images\Weather

[Date]
Meter=STRING
MeasureName=DayWeek
MeasureName2=MonthDay
MeterStyle=Style3|STD
Text=%1 %2

[TempLL]
Meter=String
MeasureName=LowTemp
MeasureName2=HighTemp
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#

[Condit]
Meter=STRING
MeasureName=Condition
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

;Day+1

[Day1General]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day1General#
UpdateDivider=-1

[DayWeek+1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1General]
StringIndex=1
Substitute=#jpw#
UpdateDivider=-1

[MonthDay+1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1General]
StringIndex=2
Substitute=#jpw1#
UpdateDivider=-1

[Day1Conditions]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day1DayConditions#
UpdateDivider=-1

[IconDay1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1Conditions]
StringIndex=1
UpdateDivider=-1

[ConditionD+1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1Conditions]
StringIndex=2
UpdateDivider=-1

[LowTemp+1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1General]
StringIndex=4
UpdateDivider=-1

[HighTemp+1]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day1General]
StringIndex=3
UpdateDivider=-1

;Meter Day+1

[IconDay+1]
Meter=Image
MeasureName=IconDay1
MeterStyle=STPI
ImagePath=#@#Images\Weather
Y=75

[DateDay+1]
Meter=STRING
MeasureName=DayWeek+1
MeasureName2=MonthDay+1
MeterStyle=Style3|STD
Text=%1 %2

[TempLLDay+1]
Meter=String
MeasureName=LowTemp+1
MeasureName2=HighTemp+1
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#

[ConditDay+1]
Meter=STRING
MeasureName=ConditionD+1
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

;Day+2

[Day2General]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day2General#
UpdateDivider=-1

[DayWeek+2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2General]
StringIndex=1
Substitute=#jpw#
UpdateDivider=-1

[MonthDay+2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2General]
StringIndex=2
Substitute=#jpw1#
UpdateDivider=-1

[Day2Conditions]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day2DayConditions#
UpdateDivider=-1

[IconDay2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2Conditions]
StringIndex=1
UpdateDivider=-1

[ConditionD+2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2Conditions]
StringIndex=2
UpdateDivider=-1

[LowTemp+2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2General]
StringIndex=4
UpdateDivider=-1

[HighTemp+2]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day2General]
StringIndex=3
UpdateDivider=-1


;Meter Day+2

[IconDay+2]
Meter=Image
MeasureName=IconDay2
MeterStyle=STPI
ImagePath=#@#Images\Weather
Y=145

[DateDay+2]
Meter=STRING
MeasureName=DayWeek+2
MeasureName2=MonthDay+2
MeterStyle=Style3|STD
Text=%1 %2

[TempLLDay+2]
Meter=String
MeasureName=LowTemp+2
MeasureName2=HighTemp+2
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#

[ConditDay+2]
Meter=STRING
MeasureName=ConditionD+2
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

;Day+3

[Day3General]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day3General#
UpdateDivider=-1

[DayWeek+3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3General]
StringIndex=1
Substitute=#jpw#
UpdateDivider=-1

[MonthDay+3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3General]
StringIndex=2
Substitute=#jpw1#
UpdateDivider=-1

[Day3Conditions]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day3DayConditions#
UpdateDivider=-1

[IconDay3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3Conditions]
StringIndex=1
UpdateDivider=-1

[ConditionD+3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3Conditions]
StringIndex=2
UpdateDivider=-1

[LowTemp+3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3General]
StringIndex=4
UpdateDivider=-1

[HighTemp+3]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day3General]
StringIndex=3
UpdateDivider=-1

;Meter Day+3

[IconDay+3]
Meter=Image
MeasureName=IconDay3
MeterStyle=STPI
ImagePath=#@#Images\Weather
Y=215

[DateDay+3]
Meter=STRING
MeasureName=DayWeek+3
MeasureName2=MonthDay+3
MeterStyle=Style3|STD
Text=%1 %2

[TempLLDay+3]
Meter=String
MeasureName=LowTemp+3
MeasureName2=HighTemp+3
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#

[ConditDay+3]
Meter=STRING
MeasureName=ConditionD+3
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

;Day+4

[Day4General]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day4General#
UpdateDivider=-1

[DayWeek+4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4General]
StringIndex=1
Substitute=#jpw#
UpdateDivider=-1

[MonthDay+4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4General]
StringIndex=2
Substitute=#jpw1#
UpdateDivider=-1

[Day4Conditions]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[WeatherParent]
RegExp=#Day4DayConditions#
UpdateDivider=-1

[IconDay4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4Conditions]
StringIndex=1
UpdateDivider=-1

[ConditionD+4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4Conditions]
StringIndex=2
UpdateDivider=-1

[LowTemp+4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4General]
StringIndex=4
UpdateDivider=-1

[HighTemp+4]
Measure=Plugin
Group=Weather
Plugin=WebParser
URL=[Day4General]
StringIndex=3
UpdateDivider=-1


;Meter Day+4

[IconDay+4]
Meter=Image
MeasureName=IconDay4
MeterStyle=STPI
ImagePath=#@#Images\Weather
Y=285

[DateDay+4]
Meter=STRING
MeasureName=DayWeek+4
MeasureName2=MonthDay+4
MeterStyle=Style3|STD
Text=%1 %2

[TempLLDay+4]
Meter=String
MeasureName=LowTemp+4
MeasureName2=HighTemp+4
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#

[ConditDay+4]
Meter=STRING
MeasureName=ConditionD+4
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

[TempLLDay+4]
Meter=String
MeasureName=LowTemp+4
MeasureName2=HighTemp+4
MeterStyle=Style3|STD1
Text=Min: %1°/ Max: %2°#UNV#
Tooltiptext=Min/Max

[ConditDay+4]
Meter=STRING
MeasureName=ConditionD+4
MeterStyle=Style3|STD1
Text=%1
TooltipText=%1

