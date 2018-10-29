[VARIABLES]
@include=#@#Settings.inc
@include2=#@#Styles.inc



;MEASURES======================================================================

[ENV_NEWS_FEED1]
Measure=Plugin
Plugin=WebParser.dll
Url=#Feed1_URL#
RegExp="(?siU)<title.*>(.*)</title>.*<link.*>(.*)</link>.*<item.*<title.*>(.*)</title>.*<link.*>(.*)</link>(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)(?(?=.*<item).*<title.*>(.*)</title>.*<link.*>(.*)</link>)"
UpdateRate=900
StringIndex=1

[ENV_NEWS_FEED1_1]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=3
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link1]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=4
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_2]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=5
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link2]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=6
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_3]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=7
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link3]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=8
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_4]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=9
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link4]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=10
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_5]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=11
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link5]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=12
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_6]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=13
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link6]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=14
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_7]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=15
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link7]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=16
Substitute="&amp;":"&"

[ENV_NEWS_FEED1_8]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=17
Substitute=#SubFeeds#

[ENV_NEWS_FEED1_Link8]
Measure=Plugin
Plugin=WebParser.dll
Url=[ENV_NEWS_FEED1]
StringIndex=18
Substitute="&amp;":"&"



;BUTTONS==========================================================================

[ENV_NEWS_FEED1_BTN1]
Meter=IMAGE
X=118
Y=137
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link1]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_1]

[ENV_NEWS_FEED1_BTN1_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_1
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_White | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN2]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link2]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_2]

[ENV_NEWS_FEED1_BTN2_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_2
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_Blue | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN3]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link3]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_3]

[ENV_NEWS_FEED1_BTN3_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_3
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_White | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN4]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link4]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_4]

[ENV_NEWS_FEED1_BTN4_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_4
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_Blue | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN5]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link5]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_5]

[ENV_NEWS_FEED1_BTN5_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_5
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_White | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN6]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link6]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_6]

[ENV_NEWS_FEED1_BTN6_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_6
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_Blue | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN7]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link7]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_7]

[ENV_NEWS_FEED1_BTN7_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_7
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_White | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1

[ENV_NEWS_FEED1_BTN8]
Meter=IMAGE
X=-2r
Y=18r
W=453
H=16
SolidColor=#dgreen#,80
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #green#,120][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #dgreen#,80][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[ENV_NEWS_FEED1_Link8]"][!Redraw]
ToolTipText=[ENV_NEWS_FEED1_8]

[ENV_NEWS_FEED1_BTN8_Txt]
Meter=STRING
MeasureName=ENV_NEWS_FEED1_8
X=2r
Y=0r
W=453
H=16
MeterStyle=TS_STD | TS_Blue | TS_Size8 | TS_Clip1
stringcase=none
AntiAlias=1