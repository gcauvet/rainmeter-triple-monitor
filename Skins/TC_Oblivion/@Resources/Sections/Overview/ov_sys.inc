[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc

;MEASURES======================================================

[OV_Sys_CPU_Cal]
Measure=CPU
Processor=0

[OV_Sys_SWAP_Cal]
Measure=SwapMemory
UpdateDivider=20

[OV_Sys_RAM_Cal]
Measure=PhysicalMemory
UpdateDivider=20

[OV_Sys_GPU_USAGE_Cal]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=GPU usage
MaxValue=100
MinValue=0



;METERS========================================================

[OV_Sys_CPU_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size18 | TS_Blue | TS_Center
MeasureName=OV_Sys_CPU_Cal
X=79
Y=34
Text=%1%
Group=OV_SYS | Overview | Main

[OV_Sys_SWAP_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size18 | TS_Blue | TS_Center
MeasureName=OV_Sys_SWAP_Cal
X=79
Y=93
Text=%1%
Percentual=1
Group=OV_SYS | Overview | Main

[OV_Sys_RAM_Txt]
Meter=String
MeterStyle=TS_STD | TS_Size18 | TS_Blue | TS_Center
MeasureName=OV_Sys_RAM_Cal
X=180
Y=34
Text=%1%
Percentual=1
Group=OV_SYS | Overview | Main

[OV_Sys_GPU_USAGE_Txt]
Meter=STRING
MeterStyle=TS_STD | TS_Size18 | TS_Blue | TS_Center
MeasureName=OV_Sys_GPU_USAGE_Cal
X=180
Y=93
Text=%1%
Group=OV_SYS | Overview | Main