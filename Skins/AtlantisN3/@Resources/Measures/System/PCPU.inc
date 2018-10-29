[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,150,90,#FPB1# | Extend plus 
Shape2=Rectangle 70,5,2,80,#FPB1# | Extend plus1

[D2]
UpdateDivider=1

[D1]
H=15
W=60
Clipstring=2
TooltipText=%1
UpdateDivider=1

[TopProcess]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=% Processor Time
Index=1
Percent=1
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc

[ProText]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess
Text=%1
Y=5

[ProValue]
Meter=STRING
MeterStyle=Style3|D2
Text=[TopProcess:1]%


[TopProcess2]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=% Processor Time
Index=2
Percent=1
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc

[ProText2]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess2
Text=%1

[ProValue2]
Meter=STRING
MeterStyle=Style3|D2
Text=[TopProcess2:1]%

[TopProcess3]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=% Processor Time
Index=3
Percent=1
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc

[ProText3]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess3
Text=%1

[ProValue3]
Meter=STRING
MeterStyle=Style3|D2
Text=[TopProcess3:1]%


[TopProcess4]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=% Processor Time
Index=4
Percent=1
Blacklist=_Total|Idle|dwm|wmpnetwk|csrss|svchost|lsass|System|system|Memory Compression|wininit|RemindersServer|spoolsv|IpOverUsbSvc

[ProText4]
Meter=STRING
MeterStyle=Style2|D1
MeasureName=TopProcess4
Text=%1

[ProValue4]
Meter=STRING
MeterStyle=Style3|D2
Text=[TopProcess4:1]%


