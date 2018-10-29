[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc

[Fond]
Meter=Shape
MeterStyle=PFond
Shape=Rectangle 0,0,150,150,#FPB1# | Extend plus
Shape2=Rectangle 70,5,2,140,#FPB1# | Extend plus1

[MCPU]
Measure=CPU

[MGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=1
Blacklist=dwm|csrss

[MProcesses]
Measure=Plugin
Plugin=UsageMonitor
Category=System
Counter=Processes
Index=0
UpdateDivider=4
OnChangeAction=[!UpdateMeter Proc]

[MBin]
Measure=RecycleManager
RecycleType=COUNT
Drives=All
UpdateDivider=2
OnChangeAction=[!UpdateMeasure BinM]

[CPUT]
Meter=STRING
MeterStyle=Style2
Text=CPU
Y=5

[CPUValue]
Meter=STRING
MeterStyle=Style3
MeasureName=MCPU
Text=%1%
NumOfDecimals=2
UpdateDivider=1

[GPUText]
Meter=STRING
MeterStyle=Style2
Text=GPU

[GPUValue]
Meter=STRING
MeterStyle=Style3
NumOfDecimals=0
Text=[MGPU:1]%
UpdateDivider=1

[RAMText]
Meter=STRING
MeterStyle=Style2
Text=RAM

[FM%]
Meter=STRING
MeasureName=MFreeMem
MeterStyle=Style3
Percentual=1
AutoScale=1
NumOfDecimals=2
Text=%1%
DynamicVariables=1
ToolTipTitle=RAM: [MMemTotal:/1073741824, 2]GB
ToolTipText=#f#: [MFreeMem:/1073741824, 2]GB#CRLF##u#: [MUsedMem:/1073741824, 2]GB
Group=RA

[SWAPText]
Meter=STRING
MeterStyle=Style2
Text=SWAP

[FSw%]
Meter=STRING
MeasureName=MFreeSwap
MeterStyle=Style3
Percentual=1
AutoScale=1
NumOfDecimals=2
Text=%1%
ToolTipTitle=SWAP: [MSwapTotal:/1073741824, 2]GB
ToolTipText=#f#: [MFreeSwap:/1073741824, 2]GB#CRLF##u#: [MUsedSwap:/1073741824, 2]GB
DynamicVariables=1
Group=RA1

[MFreeMem]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=6
OnChangeAction=[!UpdateMeasureGroup RA][!UpdateMeterGroup RA]

[MMemTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=-1

[MUsedMem]
Measure=PhysicalMemory
UpdateDivider=-1
Group=RA

[MSwapTotal]
Measure=SwapMemory
Total=1
UpdateDivider=-1

[MUsedSwap]
Measure=SwapMemory
UpdateDivider=-1
Group=RA1

[MFreeSwap]
Measure=SwapMemory
InvertMeasure=1
UpdateDivider=6
OnChangeAction=[!UpdateMeasureGroup RA1][!UpdateMeterGroup RA1]

[MPercent]
Measure=Plugin
PlugIn=PowerPlugin.dll
PowerState=PERCENT
UpdateDivider=10
OnChangeAction=[!UpdateMeter PCent1]

[BatT]
Meter=STRING
MeterStyle=Style2
Text=#bap#
LeftMouseUpAction=[control.exe powercfg.cpl]
ToolTipText=#OPOP#

[PCent1]
Meter=STRING
MeterStyle=Style3
MeasureName=MPercent
Text=%1%

[Title]
Meter=STRING
MeterStyle=Style2
Text=#pro#
LeftMouseUpAction=["taskmgr.exe"]
Tooltiptitle=#pro#
ToolTipText=#Otm#

[Proc]
Meter=STRING
MeterStyle=Style3
Text=[MProcesses:0]

[BinName]
Meter=STRING
MeterStyle=Style2
Text=#RecBin#
Tooltiptitle=#RecBin#
ToolTipText="#LCRB#. #LCERB#."
LeftMouseUpAction=!CommandMeasure "MBin" "OpenBin"
RightMouseDownAction=!CommandMeasure "MBin" "EmptyBin"

[TRecy]
Meter=STRING
MeterStyle=Style3
MeasureName=MBin

[BinM]
Measure=Calc
Formula=MBin
IfAboveAction=[!SetOption TRecy Text "%1 #IT#"][!UpdateMeter TRecy]
IfAboveValue=0
IfBelowAction=[!SetOption TRecy Text "-"][!UpdateMeter TRecy]
IfBelowValue=1
UpdateDivider=-1
Group=Recy