[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,150,90,#FPB1# | Extend plus 
Shape2=Rectangle 70,5,2,80,#FPB1# | Extend plus1

[D1]
H=15
W=60
Clipstring=2
TooltipText=%1

[D2]
Text=%1B
AutoScale=1
NumOfDecimals=2
DynamicVariables=1

[TopProcess1]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=1
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc
OnChangeAction=[!UpdateMeterGroup Proc1][!UpdateMeasure RAMSc1]

[RAMSc1]
Measure=Calc
Formula=TopProcess1
UpdateDivider=-1

[ProText1]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess1
Text=%1
Group=Proc1
Y=5

[ProValue1]
Meter=STRING
MeterStyle=Style3|D2
MeasureName=RAMSc1
Group=Proc1

[TopProcess]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=2
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc
OnChangeAction=[!UpdateMeterGroup Proc][!UpdateMeasure RAMSc2]

[RAMSc2]
Measure=Calc
Formula=TopProcess
UpdateDivider=-1

[ProText]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess
Text=%1
Group=Proc

[ProValue]
Meter=STRING
MeterStyle=Style3|D2
MeasureName=RAMSc2
Group=Proc


[TopProcess2]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=3
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc
OnChangeAction=[!UpdateMeterGroup Proc2][!UpdateMeasure RAMSc3]

[RAMSc3]
Measure=Calc
Formula=TopProcess2
UpdateDivider=-1

[ProText2]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess2
Text=%1

Group=Proc2

[ProValue2]
Meter=STRING
MeterStyle=Style3|D2
MeasureName=RAMSc3
Group=Proc2


[TopProcess3]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=4
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc
OnChangeAction=[!UpdateMeterGroup Proc3][!UpdateMeasure RAMSc4]

[RAMSc4]
Measure=Calc
Formula=TopProcess3
UpdateDivider=-1

[ProText3]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess3
Text=%1
Group=Proc3

[ProValue3]
Meter=STRING
MeterStyle=Style3|D2
MeasureName=RAMSc4
Group=Proc3

