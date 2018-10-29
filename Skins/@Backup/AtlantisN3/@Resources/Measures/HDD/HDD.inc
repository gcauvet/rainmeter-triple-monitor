[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc

[RefreshLoad]
Measure=Calc
Formula=Counter
IfEqualValue=1
IfEqualAction=[!Refresh]
UpdateDivider=-1

[MUsedDC]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=C:
UpdateDivider=5
IgnoreRemovable=0
OnChangeAction=[!UpdateMeasureGroup HDDC][!UpdateMeterGroup HDDC]

[MFreeDC]
Measure=FreeDiskSpace
Drive=C:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDC

[MSDC]
Measure=FreeDiskSpace
Drive=C:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDC

[MDiskC]
Measure=FreeDiskSpace
Label=1
Drive=C:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDC

[D2]
AutoScale=1
NumOfDecimals=2
Text=%1%
Percentual=1
DynamicVariables=1

[TitleC]
Meter=STRING
MeterStyle=Style2
MeasureName=MDiskC
Text=C:%1
LeftMouseupAction=[C:]
ToolTipTitle=C: %1
ToolTipText=#OD#
Y=5

[FDiskC]
Meter=STRING
MeasureName=MFreeDC
MeterStyle=Style3|D2
ToolTipTitle=C: [MDiskC]: [MSDC:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDC:/1073741824, 2]GB#CRLF##u#: [MUsedDC:/1073741824, 2]GB
Group=HDDC

[MUsedD]
Measure=Freediskspace
Drive=D:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDD][!WriteKeyValue "Variables" "sornd ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDD][!WriteKeyValue "Variables" "sornd" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDD][!UpdateMeterGroup HDDD]
UpdateDivider=5

[MFreeDD]
Measure=FreeDiskSpace
Drive=D:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDD

[MSDD]
Measure=FreeDiskSpace
Drive=D:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDD

[MDiskD]
Measure=FreeDiskSpace
Label=1
Drive=D:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDD


[TitleD]
Meter=#sornd#
MeterStyle=Style2
MeasureName=MDiskD
Text=D:%1
LeftMouseUpAction=[D:]
ToolTipTitle=D: %1
ToolTipText=#OD#
Hidden=1
Group=HDDD

[FDiskD]
Meter=#sornd#
MeasureName=MFreeDD
MeterStyle=Style3|D2
ToolTipTitle=D: [MDiskD]: [MSDD:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDD:/1073741824, 2]GB#CRLF##u#: [MUsedD:/1073741824, 2]GB
Group=HDDD
Hidden=1

[MUsedE]
Measure=Freediskspace
Drive=E:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDE][!WriteKeyValue "Variables" "sorne ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDE][!WriteKeyValue "Variables" "sorne" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDE][!UpdateMeterGroup HDDE]
UpdateDivider=5

[MFreeDE]
Measure=FreeDiskSpace
Drive=E:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDE

[MSDE]
Measure=FreeDiskSpace
Drive=E:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDE

[MDiskE]
Measure=FreeDiskSpace
Label=1
Drive=E:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDE

[TitleE]
Meter=#sorne#
MeterStyle=Style2
MeasureName=MDiskE
Text=E:%1
LeftMouseUpAction=[E:]
ToolTipTitle=E: %1
ToolTipText=#OD#
Hidden=1
Group=HDDE

[FDiskE]
Meter=#sorne#
MeasureName=MFreeDE
MeterStyle=Style3|D2
ToolTipTitle=E: [MDiskE]: [MSDE:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDE:/1073741824, 2]GB#CRLF##u#: [MUsedE:/1073741824, 2]GB
Group=HDDE
Hidden=1

[MUsedF]
Measure=Freediskspace
Drive=F:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDF][!WriteKeyValue "Variables" "sornf" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDF][!WriteKeyValue "Variables" "sornf" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDF][!UpdateMeterGroup HDDF]
UpdateDivider=5

[MFreeDF]
Measure=FreeDiskSpace
Drive=F:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDF

[MSDF]
Measure=FreeDiskSpace
Drive=F:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDF

[MDiskF]
Measure=FreeDiskSpace
Label=1
Drive=F:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDF

[TitleF]
Meter=#sornf#
MeterStyle=Style2
MeasureName=MDiskF
Text=F:%1
LeftMouseUpAction=[F:]
ToolTipTitle=F: %1
ToolTipText=#OD#
Hidden=1
Group=HDDF

[FDiskF]
Meter=#sornf#
MeasureName=MFreeDF
MeterStyle=Style3|D2
ToolTipTitle=F: [MDiskF]: [MSDF:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDF:/1073741824, 2]GB#CRLF##u#: [MUsedF:/1073741824, 2]GB
Group=HDDF
Hidden=1


[MUsedG]
Measure=Freediskspace
Drive=G:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDG][!WriteKeyValue "Variables" "sorng" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDG][!WriteKeyValue "Variables" "sorng" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDG][!UpdateMeterGroup HDDG]
UpdateDivider=5

[MFreeDG]
Measure=FreeDiskSpace
Drive=G:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDG

[MSDG]
Measure=FreeDiskSpace
Drive=G:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDG

[MDiskG]
Measure=FreeDiskSpace
Label=1
Drive=G:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDG

[TitleG]
Meter=#sorng#
MeterStyle=Style2
MeasureName=MDiskG
Text=G:%1
LeftMouseUpAction=[G:]
ToolTipTitle=G: %1
ToolTipText=#OD#
Hidden=1
Group=HDDG

[FDiskG]
Meter=#sorng#
MeasureName=MFreeDG
MeterStyle=Style3|D2
ToolTipTitle=G: [MDiskG]: [MSDG:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDG:/1073741824, 2]GB#CRLF##u#: [MUsedG:/1073741824, 2]GB
Group=HDDG
Hidden=1


[MUsedH]
Measure=Freediskspace
Drive=H:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDH][!WriteKeyValue "Variables" "sornh" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDH][!WriteKeyValue "Variables" "sornh" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDH][!UpdateMeterGroup HDDH]
UpdateDivider=5

[MFreeDH]
Measure=FreeDiskSpace
Drive=H:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDH

[MSDH]
Measure=FreeDiskSpace
Drive=H:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDH

[MDiskH]
Measure=FreeDiskSpace
Label=1
Drive=H:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDH

[TitleH]
Meter=#sornh#
MeterStyle=Style2
MeasureName=MDiskH
Text=H:%1
LeftMouseUpAction=[H:]
ToolTipTitle=H: %1
ToolTipText=#OD#
Hidden=1
Group=HDDH

[FDiskH]
Meter=#sornh#
MeasureName=MFreeDH
MeterStyle=Style3|D2
ToolTipTitle=H: [MDiskH]: [MSDH:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDH:/1073741824, 2]GB#CRLF##u#: [MUsedH:/1073741824, 2]GB
Group=HDDH
Hidden=1


[MUsedI]
Measure=Freediskspace
Drive=I:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDI][!WriteKeyValue "Variables" "sornI" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDI][!WriteKeyValue "Variables" "sornI" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDI][!UpdateMeterGroup HDDI]
UpdateDivider=5

[MFreeDI]
Measure=FreeDiskSpace
Drive=I:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDI

[MSDI]
Measure=FreeDiskSpace
Drive=I:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDI

[MDiskI]
Measure=FreeDiskSpace
Label=1
Drive=I:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDI


[TitleI]
Meter=#sornI#
MeterStyle=Style2
MeasureName=MDiskI
Text=I:%1
LeftMouseUpAction=[I:]
ToolTipTitle=I: %1
ToolTipText=#OD#
Hidden=1
Group=HDDI

[FDiskI]
Meter=#sornI#
MeasureName=MFreeDI
MeterStyle=Style3|D2
ToolTipTitle=I: [MDiskI]: [MSDI:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDI:/1073741824, 2]GB#CRLF##u#: [MUsedI:/1073741824, 2]GB
Group=HDDI
Hidden=1

[MUsedJ]
Measure=Freediskspace
Drive=J:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDJ][!WriteKeyValue "Variables" "sornJ" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDJ][!WriteKeyValue "Variables" "sornJ" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDJ][!UpdateMeterGroup HDDJ]
UpdateDivider=5

[MFreeDJ]
Measure=FreeDiskSpace
Drive=J:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDJ

[MSDJ]
Measure=FreeDiskSpace
Drive=J:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDJ

[MDiskJ]
Measure=FreeDiskSpace
Label=1
Drive=J:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDJ


[TitleJ]
Meter=#sornJ#
MeterStyle=Style2
MeasureName=MDiskJ
Text=J:%1
LeftMouseUpAction=[J:]
ToolTipTitle=J: %1
ToolTipText=#OD#
Hidden=1
Group=HDDJ

[FDiskJ]
Meter=#sornJ#
MeasureName=MFreeDJ
MeterStyle=Style3|D2
ToolTipTitle=J: [MDiskJ]: [MSDJ:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDJ:/1073741824, 2]GB#CRLF##u#: [MUsedJ:/1073741824, 2]GB
Group=HDDJ
Hidden=1


[MUsedK]
Measure=Freediskspace
Drive=K:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDK][!WriteKeyValue "Variables" "sornK" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDK][!WriteKeyValue "Variables" "sornK" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDK][!UpdateMeterGroup HDDK]
UpdateDivider=5

[MFreeDK]
Measure=FreeDiskSpace
Drive=K:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDK

[MSDK]
Measure=FreeDiskSpace
Drive=K:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDK

[MDiskK]
Measure=FreeDiskSpace
Label=1
Drive=K:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDK


[TitleK]
Meter=#sornK#
MeterStyle=Style2
MeasureName=MDiskK
Text=K:%1
LeftMouseUpAction=[K:]
ToolTipTitle=K: %1
ToolTipText=#OD#
Hidden=1
Group=HDDK

[FDiskK]
Meter=#sornK#
MeasureName=MFreeDK
MeterStyle=Style3|D2
ToolTipTitle=K: [MDiskK]: [MSDK:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDK:/1073741824, 2]GB#CRLF##u#: [MUsedK:/1073741824, 2]GB
Group=HDDK
Hidden=1


[MUsedL]
Measure=Freediskspace
Drive=L:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDL][!WriteKeyValue "Variables" "sornL" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDL][!WriteKeyValue "Variables" "sornL" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDL][!UpdateMeterGroup HDDL]
UpdateDivider=5

[MFreeDL]
Measure=FreeDiskSpace
Drive=L:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDL

[MSDL]
Measure=FreeDiskSpace
Drive=L:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDL

[MDiskL]
Measure=FreeDiskSpace
Label=1
Drive=L:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDL

[TitleL]
Meter=#sornL#
MeterStyle=Style2
MeasureName=MDiskL
Text=L:%1
LeftMouseUpAction=[L:]
ToolTipTitle=L: %1
ToolTipText=#OD#
Hidden=1
Group=HDDL

[FDiskL]
Meter=#sornL#
MeasureName=MFreeDL
MeterStyle=Style3|D2
ToolTipTitle=L: [MDiskL]: [MSDL:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDL:/1073741824, 2]GB#CRLF##u#: [MUsedL:/1073741824, 2]GB
Group=HDDL
Hidden=1


[MUsedM]
Measure=Freediskspace
Drive=M:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDM][!WriteKeyValue "Variables" "sornM" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDM][!WriteKeyValue "Variables" "sornM" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDM][!UpdateMeterGroup HDDM]
UpdateDivider=5

[MFreeDM]
Measure=FreeDiskSpace
Drive=M:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDM

[MSDM]
Measure=FreeDiskSpace
Drive=M:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDM

[MDiskM]
Measure=FreeDiskSpace
Label=1
Drive=M:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDM

[TitleM]
Meter=#sornM#
MeterStyle=Style2
MeasureName=MDiskM
Text=M:%1
LeftMouseUpAction=[M:]
ToolTipTitle=M: %1
ToolTipText=#OD#
Hidden=1
Group=HDDM

[FDiskM]
Meter=#sornM#
MeasureName=MFreeDM
MeterStyle=Style3|D2
ToolTipTitle=M: [MDiskM]: [MSDM:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDM:/1073741824, 2]GB#CRLF##u#: [MUsedM:/1073741824, 2]GB
Group=HDDM
Hidden=1


[MUsedN]
Measure=Freediskspace
Drive=N:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDN][!WriteKeyValue "Variables" "sornN" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDN][!WriteKeyValue "Variables" "sornN" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDN][!UpdateMeterGroup HDDN]
UpdateDivider=5

[MFreeDN]
Measure=FreeDiskSpace
Drive=N:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDN

[MSDN]
Measure=FreeDiskSpace
Drive=N:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDN

[MDiskN]
Measure=FreeDiskSpace
Label=1
Drive=N:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDN

[TitleN]
Meter=#sornN#
MeterStyle=Style2
MeasureName=MDiskN
Text=N:%1
LeftMouseUpAction=[N:]
ToolTipTitle=N: %1
ToolTipText=#OD#
Hidden=1
Group=HDDN

[FDiskN]
Meter=#sornN#
MeasureName=MFreeDN
MeterStyle=Style3|D2
ToolTipTitle=N: [MDiskN]: [MSDN:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDN:/1073741824, 2]GB#CRLF##u#: [MUsedN:/1073741824, 2]GB
Group=HDDN
Hidden=1

[MUsedO]
Measure=Freediskspace
Drive=O:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDO][!WriteKeyValue "Variables" "sornO" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDO][!WriteKeyValue "Variables" "sornO" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDO][!UpdateMeterGroup HDDO]
UpdateDivider=5

[MFreeDO]
Measure=FreeDiskSpace
Drive=O:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDO

[MSDO]
Measure=FreeDiskSpace
Drive=O:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDO

[MDiskO]
Measure=FreeDiskSpace
Label=1
Drive=O:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDO

[TitleO]
Meter=#sornO#
MeterStyle=Style2
MeasureName=MDiskO
Text=O:%1
LeftMouseUpAction=[O:]
ToolTipTitle=O: %1
ToolTipText=#OD#
Hidden=1
Group=HDDO

[FDiskO]
Meter=#sornO#
MeasureName=MFreeDO
MeterStyle=Style3|D2
ToolTipTitle=O: [MDiskO]: [MSDO:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDO:/1073741824, 2]GB#CRLF##u#: [MUsedO:/1073741824, 2]GB
Group=HDDO
Hidden=1

[MUsedP]
Measure=Freediskspace
Drive=P:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDP][!WriteKeyValue "Variables" "sornP" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDP][!WriteKeyValue "Variables" "sornP" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDP][!UpdateMeterGroup HDDP]
UpdateDivider=5

[MFreeDP]
Measure=FreeDiskSpace
Drive=P:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDP

[MSDP]
Measure=FreeDiskSpace
Drive=P:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDP

[MDiskP]
Measure=FreeDiskSpace
Label=1
Drive=P:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDP

[TitleP]
Meter=#sornP#
MeterStyle=Style2
MeasureName=MDiskP
Text=P:%1
LeftMouseUpAction=[P:]
ToolTipTitle=P: %1
ToolTipText=#OD#
Hidden=1
Group=HDDP

[FDiskP]
Meter=#sornP#
MeasureName=MFreeDP
MeterStyle=Style3|D2
ToolTipTitle=P: [MDiskP]: [MSDP:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDP:/1073741824, 2]GB#CRLF##u#: [MUsedP:/1073741824, 2]GB
Group=HDDP
Hidden=1

[MUsedQ]
Measure=Freediskspace
Drive=Q:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDQ][!WriteKeyValue "Variables" "sornQ" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDQ][!WriteKeyValue "Variables" "sornQ" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDQ][!UpdateMeterGroup HDDQ]
UpdateDivider=5

[MFreeDQ]
Measure=FreeDiskSpace
Drive=Q:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDQ

[MSDQ]
Measure=FreeDiskSpace
Drive=Q:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDQ

[MDiskQ]
Measure=FreeDiskSpace
Label=1
Drive=Q:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDQ

[TitleQ]
Meter=#sornQ#
MeterStyle=Style2
MeasureName=MDiskQ
Text=Q:%1
LeftMouseUpAction=[Q:]
ToolTipTitle=Q: %1
ToolTipText=#OD#
Hidden=1
Group=HDDQ

[FDiskQ]
Meter=#sornQ#
MeasureName=MFreeDQ
MeterStyle=Style3|D2
ToolTipTitle=Q: [MDiskQ]: [MSDQ:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDQ:/1073741824, 2]GB#CRLF##u#: [MUsedQ:/1073741824, 2]GB
Group=HDDQ
Hidden=1

[MUsedR]
Measure=Freediskspace
Drive=R:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDR][!WriteKeyValue "Variables" "sornR" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDR][!WriteKeyValue "Variables" "sornR" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDR][!UpdateMeterGroup HDDR]
UpdateDivider=5

[MFreeDR]
Measure=FreeDiskSpace
Drive=R:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDR

[MSDR]
Measure=FreeDiskSpace
Drive=R:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDR

[MDiskR]
Measure=FreeDiskSpace
Label=1
Drive=R:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDR

[TitleR]
Meter=#sornR#
MeterStyle=Style2
MeasureName=MDiskR
Text=R:%1
LeftMouseUpAction=[R:]
ToolTipTitle=R: %1
ToolTipText=#OD#
Hidden=1
Group=HDDR

[FDiskR]
Meter=#sornR#
MeasureName=MFreeDR
MeterStyle=Style3|D2
ToolTipTitle=R: [MDiskR]: [MSDR:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDR:/1073741824, 2]GB#CRLF##u#: [MUsedR:/1073741824, 2]GB
Group=HDDR
Hidden=1

[MUsedS]
Measure=Freediskspace
Drive=S:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDS][!WriteKeyValue "Variables" "sornS" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDS][!WriteKeyValue "Variables" "sornS" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDS][!UpdateMeterGroup HDDS]
UpdateDivider=5

[MFreeDS]
Measure=FreeDiskSpace
Drive=S:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDS

[MSDS]
Measure=FreeDiskSpace
Drive=S:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDS

[MDiskS]
Measure=FreeDiskSpace
Label=1
Drive=S:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDS

[TitleS]
Meter=#sornS#
MeterStyle=Style2
MeasureName=MDiskS
Text=S:%1
LeftMouseUpAction=[S:]
ToolTipTitle=S: %1
ToolTipText=#OD#
Hidden=1
Group=HDDS

[FDiskS]
Meter=#sornS#
MeasureName=MFreeDS
MeterStyle=Style3|D2
ToolTipTitle=S: [MDiskS]: [MSDS:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDS:/1073741824, 2]GB#CRLF##u#: [MUsedS:/1073741824, 2]GB
Group=HDDS
Hidden=1

[MUsedT]
Measure=Freediskspace
Drive=T:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDT][!WriteKeyValue "Variables" "sornT" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDT][!WriteKeyValue "Variables" "sornT" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDT][!UpdateMeterGroup HDDT]
UpdateDivider=5

[MFreeDT]
Measure=FreeDiskSpace
Drive=T:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDT

[MSDT]
Measure=FreeDiskSpace
Drive=T:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDT

[MDiskT]
Measure=FreeDiskSpace
Label=1
Drive=T:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDT

[TitleT]
Meter=#sornT#
MeterStyle=Style2
MeasureName=MDiskT
Text=T:%1
LeftMouseUpAction=[T:]
ToolTipTitle=T: %1
ToolTipText=#OD#
Hidden=1
Group=HDDT

[FDiskT]
Meter=#sornT#
MeasureName=MFreeDT
MeterStyle=Style3|D2
ToolTipTitle=T: [MDiskT]: [MSDT:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDT:/1073741824, 2]GB#CRLF##u#: [MUsedT:/1073741824, 2]GB
Group=HDDT
Hidden=1


[MUsedU]
Measure=Freediskspace
Drive=U:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDU][!WriteKeyValue "Variables" "sornU" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDU][!WriteKeyValue "Variables" "sornU" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDU][!UpdateMeterGroup HDDU]
UpdateDivider=5

[MFreeDU]
Measure=FreeDiskSpace
Drive=U:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDU

[MSDU]
Measure=FreeDiskSpace
Drive=U:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDU

[MDiskU]
Measure=FreeDiskSpace
Label=1
Drive=U:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDU

[TitleU]
Meter=#sornU#
MeterStyle=Style2
MeasureName=MDiskU
Text=U:%1
LeftMouseUpAction=[U:]
ToolTipTitle=U: %1
ToolTipText=#OD#
Hidden=1
Group=HDDU

[FDiskU]
Meter=#sornU#
MeasureName=MFreeDU
MeterStyle=Style3|D2
ToolTipTitle=U: [MDiskU]: [MSDU:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDU:/1073741824, 2]GB#CRLF##u#: [MUsedU:/1073741824, 2]GB
Group=HDDU
Hidden=1


[MUsedV]
Measure=Freediskspace
Drive=V:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDV][!WriteKeyValue "Variables" "sornV" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDV][!WriteKeyValue "Variables" "sornV" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDV][!UpdateMeterGroup HDDV]
UpdateDivider=5

[MFreeDV]
Measure=FreeDiskSpace
Drive=V:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDV

[MSDV]
Measure=FreeDiskSpace
Drive=V:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDV

[MDiskV]
Measure=FreeDiskSpace
Label=1
Drive=V:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDV

[TitleV]
Meter=#sornV#
MeterStyle=Style2
MeasureName=MDiskV
Text=V:%1
LeftMouseUpAction=[V:]
ToolTipTitle=V: %1
ToolTipText=#OD#
Hidden=1
Group=HDDV

[FDiskV]
Meter=#sornV#
MeasureName=MFreeDV
MeterStyle=Style3|D2
ToolTipTitle=V: [MDiskV]: [MSDV:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDV:/1073741824, 2]GB#CRLF##u#: [MUsedV:/1073741824, 2]GB
Group=HDDV
Hidden=1

[MUsedW]
Measure=Freediskspace
Drive=W:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDW][!WriteKeyValue "Variables" "sornW" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDW][!WriteKeyValue "Variables" "sornW" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDW][!UpdateMeterGroup HDDW]
UpdateDivider=5

[MFreeDW]
Measure=FreeDiskSpace
Drive=W:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDW

[MSDW]
Measure=FreeDiskSpace
Drive=W:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDW

[MDiskW]
Measure=FreeDiskSpace
Label=1
Drive=W:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDW

[TitleW]
Meter=#sornW#
MeterStyle=Style2
MeasureName=MDiskW
Text=W:%1
LeftMouseUpAction=[W:]
ToolTipTitle=W: %1
ToolTipText=#OD#
Hidden=1
Group=HDDW

[FDiskW]
Meter=#sornW#
MeasureName=MFreeDW
MeterStyle=Style3|D2
ToolTipTitle=W: [MDiskW]: [MSDW:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDW:/1073741824, 2]GB#CRLF##u#: [MUsedW:/1073741824, 2]GB
Group=HDDW
Hidden=1

[MUsedX]
Measure=Freediskspace
Drive=X:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDX][!WriteKeyValue "Variables" "sornX" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDX][!WriteKeyValue "Variables" "sornX" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDX][!UpdateMeterGroup HDDX]
UpdateDivider=5

[MFreeDX]
Measure=FreeDiskSpace
Drive=X:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDX

[MSDX]
Measure=FreeDiskSpace
Drive=X:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDX

[MDiskX]
Measure=FreeDiskSpace
Label=1
Drive=X:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDX

[TitleX]
Meter=#sornX#
MeterStyle=Style2
MeasureName=MDiskX
Text=X:%1
LeftMouseUpAction=[X:]
ToolTipTitle=X: %1
ToolTipText=#OD#
Hidden=1
Group=HDDX

[FDiskX]
Meter=#sornX#
MeasureName=MFreeDX
MeterStyle=Style3|D2
ToolTipTitle=X: [MDiskX]: [MSDX:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDX:/1073741824, 2]GB#CRLF##u#: [MUsedX:/1073741824, 2]GB
Group=HDDX


[MUsedY]
Measure=Freediskspace
Drive=Y:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDY][!WriteKeyValue "Variables" "sornY" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDY][!WriteKeyValue "Variables" "sornY" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDY][!UpdateMeterGroup HDDY]
UpdateDivider=5

[MFreeDY]
Measure=FreeDiskSpace
Drive=Y:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDY

[MSDY]
Measure=FreeDiskSpace
Drive=Y:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDY

[MDiskY]
Measure=FreeDiskSpace
Label=1
Drive=Y:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDY

[TitleY]
Meter=#sornY#
MeterStyle=Style2
MeasureName=MDiskY
Text=Y:%1
LeftMouseUpAction=[Y:]
ToolTipTitle=Y: %1
ToolTipText=#OD#
Hidden=1
Group=HDDY

[FDiskY]
Meter=#sornY#
MeasureName=MFreeDY
MeterStyle=Style3|D2
ToolTipTitle=Y: [MDiskY]: [MSDY:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDY:/1073741824, 2]GB#CRLF##u#: [MUsedY:/1073741824, 2]GB
Group=HDDY


[MUsedZ]
Measure=Freediskspace
Drive=Z:
InvertMeasure=1
IgnoreRemovable=0
IfEqualValue=0
IfEqualAction=[!HideMeterGroup HDDZ][!WriteKeyValue "Variables" "sornZ" ""]
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup HDDZ][!WriteKeyValue "Variables" "sornZ" "String"]
OnChangeAction=[!UpdateMeasureGroup HDDZ][!UpdateMeterGroup HDDZ]
UpdateDivider=5

[MFreeDZ]
Measure=FreeDiskSpace
Drive=Z:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDDZ

[MSDZ]
Measure=FreeDiskSpace
Drive=Z:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDZ

[MDiskZ]
Measure=FreeDiskSpace
Label=1
Drive=Z:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDDZ

[TitleZ]
Meter=#sornZ#
MeterStyle=Style2
MeasureName=MDiskZ
Text=Z:%1
LeftMouseUpAction=[Z:]
ToolTipTitle=Z: %1
ToolTipText=#OD#
Hidden=1
Group=HDDZ

[FDiskZ]
Meter=#sornZ#
MeasureName=MFreeDZ
MeterStyle=Style3|D2
ToolTipTitle=Z: [MDiskZ]: [MSDZ:/1073741824, 2]GB
ToolTipText=#f#: [MFreeDZ:/1073741824, 2]GB#CRLF##u#: [MUsedZ:/1073741824, 2]GB
Group=HDDZ
Hidden=1


[STPB]
Hidden=1
