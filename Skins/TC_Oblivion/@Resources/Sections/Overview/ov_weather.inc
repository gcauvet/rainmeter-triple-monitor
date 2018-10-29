[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

update=1000

;Measures==============================================================================================================

[OV_WEATHER_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
UpdateRate=1000
Url=http://wxdata.weather.com/wxdata/weather/local/#Location1#?cc=*&unit=#Unit#&dayf=
RegExp="(?siU).*<locale>(.*)</locale>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*<loc id="(.*)">.*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<bar>.*<r>(.*)</r>.*<d>(.*)</d>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<uv>.*<i>(.*)</i>.*<t>(.*)</t>.*<dewp>(.*)</dewp>.*<moon>.*<icon>(.*)</icon>.*<t>(.*)</t>.*<dayf>.*<lsup>(.*)</lsup>.*<day d="0" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="(.*)">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>"


[OV_WEATHER_LOC_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=8
Substitute="Ue":"Ü","ue":"ü","Ae":"Ä","ae":"ä","Oe":"Ö","oe":"ö","":"LOADING . . ."


[OV_WEATHER_TEMP_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=17


[OV_WEATHER_TEMP_UNIT_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=2


[OV_WEATHER_Rain_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=49


[OV_WEATHER_UNITS_Current_Cal]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=4


[OV_WEATHER_COND_CURRENT]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=19


[OV_WEATHER_ICON_CURRENT]
Measure=Plugin
Plugin=WebParser.dll
Url=[OV_WEATHER_Current_Cal]
StringIndex=20
Substitute="":"0"




;METERS====================================================================================================

[OV_WEATHER_LOC_Label]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_Green
X=1280
Y=26
Text=LOCATION
Group=OV_Weather | Overview | Main

[OV_WEATHER_LOC_CURRENT_Txt]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_White
MeasureName=OV_WEATHER_LOC_Current_Cal
X=0r
Y=12r
Group=OV_Weather | Overview | Main

[OV_WEATHER_COND_Label]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_Green
Text=CONDITIONS
X=0r
Y=20r
Group=OV_Weather | Overview | Main

[OV_WEATHER_COND_CURRENT_Txt]
Meter=STRING
MeasureName=OV_WEATHER_COND_CURRENT
MeterStyle=TS_STD | TS_Size8 | TS_White
Text=%1
X=0r
Y=12r
Group=OV_Weather | Overview | Main

[OV_WEATHER_ICON]
Meter=IMAGE
MeasureName=OV_WEATHER_ICON_CURRENT
Path=#@#Images\Weather
X=170r
Y=-20r
W=50
H=50
Antialias=1
ImageAlpha=160
ImageTint=#red#
Group=OV_Weather | Overview | Main

[OV_WEATHER_TEMP_Label]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_Green
Text=TEMPERATURE
X=-170r
Y=50r
Group=OV_Weather | Overview | Main

[OV_WEATHER_TEMP_CURRENT_Txt]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_White
MeasureName=OV_WEATHER_TEMP_Current_Cal
MeasureName2=OV_WEATHER_TEMP_UNIT_Current_Cal
X=0r
Y=12r
Text=%1�%2
Group=OV_Weather | Overview | Main

[OV_WEATHER_HUM_Label]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_Green
Text=Rain
X=150r
Y=-12r
Group=OV_Weather | Overview | Main

[OV_WEATHER_HUM_CURRENT_Txt]
Meter=STRING
MeterStyle=TS_STD | TS_Size8 | TS_White
MeasureName=OV_WEATHER_Rain_Current_Cal
X=0r
Y=12r
Text=%1%
Group=OV_Weather | Overview | Main