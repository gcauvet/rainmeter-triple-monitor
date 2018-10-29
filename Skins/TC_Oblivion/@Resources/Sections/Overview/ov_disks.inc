[Variables]
@include=#@#Settings.inc
@include2=#@#Styles.inc



;MEASURES====================================

[OV_HDD_Used1_Cal]
Measure=FreeDiskSpace
Drive=#disk1#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter1_Label ] [ !ShowMeter OV_HDD_Bar1 ] [ !ShowMeter OV_HDD_Label1_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter1_Label ] [ !HideMeter OV_HDD_Bar1 ] [ !HideMeter OV_HDD_Label1_Txt ] 
UpdateDivider=120

[OV_HDD_Used2_Cal]
Measure=FreeDiskSpace
Drive=#Disk2#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter2_Label ] [ !ShowMeter OV_HDD_Bar2 ] [ !ShowMeter OV_HDD_Label2_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter2_Label ] [ !HideMeter OV_HDD_Bar2 ] [ !HideMeter OV_HDD_Label2_Txt ] 
UpdateDivider=120

[OV_HDD_Used3_Cal]
Measure=FreeDiskSpace
Drive=#Disk3#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter3_Label ] [ !ShowMeter OV_HDD_Bar3 ] [ !ShowMeter OV_HDD_Label3_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter3_Label ] [ !HideMeter OV_HDD_Bar3 ] [ !HideMeter OV_HDD_Label3_Txt ] 
UpdateDivider=120

[OV_HDD_Used4_Cal]
Measure=FreeDiskSpace
Drive=#Disk4#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter4_Label ] [ !ShowMeter OV_HDD_Bar4 ] [ !ShowMeter OV_HDD_Label4_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter4_Label ] [ !HideMeter OV_HDD_Bar4 ] [ !HideMeter OV_HDD_Label4_Txt ] 
UpdateDivider=120

[OV_HDD_Used5_Cal]
Measure=FreeDiskSpace
Drive=#Disk5#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter5_Label ] [ !ShowMeter OV_HDD_Bar5 ] [ !ShowMeter OV_HDD_Label5_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter5_Label ] [ !HideMeter OV_HDD_Bar5 ] [ !HideMeter OV_HDD_Label5_Txt ] 
UpdateDivider=120

[OV_HDD_Used6_Cal]
Measure=FreeDiskSpace
Drive=#Disk6#:
InvertMeasure=1
IfAboveValue = 1
IfAboveAction = [ !ShowMeter OV_HDD_DriveLetter6_Label ] [ !ShowMeter OV_HDD_Bar6 ] [ !ShowMeter OV_HDD_Label6_Txt ] 
IfBelowValue = 1
IfBelowAction = [ !HideMeter OV_HDD_DriveLetter6_Label ] [ !HideMeter OV_HDD_Bar6 ] [ !HideMeter OV_HDD_Label6_Txt ] 
UpdateDivider=120

[OV_HDD_DriveLabel1_Cal]
Measure = FreeDiskSpace
Drive = "#Disk1#:"
Label = 1
UpdateDivider = 3

[OV_HDD_DriveLabel2_Cal]
Measure = FreeDiskSpace
Drive = "#Disk2#:"
Label = 1
UpdateDivider = 3

[OV_HDD_DriveLabel3_Cal]
Measure = FreeDiskSpace
Drive = "#Disk3#:"
Label = 1
UpdateDivider = 3

[OV_HDD_DriveLabel4_Cal]
Measure = FreeDiskSpace
Drive = "#Disk4#:"
Label = 1
UpdateDivider = 3

[OV_HDD_DriveLabel5_Cal]
Measure = FreeDiskSpace
Drive = "#Disk5#:"
Label = 1
UpdateDivider = 3

[OV_HDD_DriveLabel6_Cal]
Measure = FreeDiskSpace
Drive = "#Disk6#:"
Label = 1
UpdateDivider = 3



;LABELS======================================

[OV_HDD_DriveLetter1_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=270
Y=26
W=77
H=10
Text=#disk1#:\
Group=OV_DISKS | Overview | Main

[OV_HDD_DriveLetter2_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
W=77
H=10
Text=#Disk2#:\
Group=OV_DISKS | Overview | Main

[OV_HDD_DriveLetter3_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
W=77
H=10
Text=#Disk3#:\
Group=OV_DISKS | Overview | Main

[OV_HDD_DriveLetter4_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
W=77
H=10
Text=#Disk4#:\
Group=OV_DISKS | Overview | Main

[OV_HDD_DriveLetter5_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
W=77
H=10
Text=#Disk5#:\
Group=OV_DISKS | Overview | Main

[OV_HDD_DriveLetter6_Label]
Meter=String
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
W=77
H=10
Text=#Disk6#:\
Group=OV_DISKS | Overview | Main



;BARS===============================================

[OV_HDD_Bar1]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used1_Cal
X=26r
Y=-100r
W=77
H=10
LeftMouseUpAction=["#disk1#:\"]
Group=OV_DISKS | Overview | Main

[OV_HDD_Bar2]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used2_Cal
X=0r
Y=20r
W=77
H=10
LeftMouseUpAction=["#Disk2#:\"]
Group=OV_DISKS | Overview | Main

[OV_HDD_Bar3]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used3_Cal
X=0r
Y=20r
W=77
H=10
LeftMouseUpAction=["#Disk3#:\"]
Group=OV_DISKS | Overview | Main

[OV_HDD_Bar4]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used4_Cal
X=0r
Y=20r
W=77
H=10
LeftMouseUpAction=["#Disk4#:\"]
Group=OV_DISKS | Overview | Main

[OV_HDD_Bar5]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used5_Cal
X=0r
Y=20r
W=77
H=10
LeftMouseUpAction=["#Disk5#:\"]
Group=OV_DISKS | Overview | Main

[OV_HDD_Bar6]
Meter=Bar
BarColor=#red#
SolidColor=86,117,125
BarOrientation=HORIZONTAL
MeasureName=OV_HDD_Used6_Cal
X=0r
Y=20r
W=77
H=10
LeftMouseUpAction=["#Disk6#:\"]
Group=OV_DISKS | Overview | Main

;METERS=============================================

[OV_HDD_Label1_Txt]
Meter=String
measurename=OV_HDD_DriveLabel1_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=-100r
Group=OV_DISKS | Overview | Main

[OV_HDD_Label2_Txt]
Meter=String
measurename=OV_HDD_DriveLabel2_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
Group=OV_DISKS | Overview | Main

[OV_HDD_Label3_Txt]
Meter=String
measurename=OV_HDD_DriveLabel3_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
Group=OV_DISKS | Overview | Main

[OV_HDD_Label4_Txt]
Meter=String
measurename=OV_HDD_DriveLabel4_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
Group=OV_DISKS | Overview | Main

[OV_HDD_Label5_Txt]
Meter=String
measurename=OV_HDD_DriveLabel5_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
Group=OV_DISKS | Overview | Main

[OV_HDD_Label6_Txt]
Meter=String
measurename=OV_HDD_DriveLabel6_Cal
MeterStyle=TS_STD | TS_Size7 | TS_White
X=0r
Y=20r
Group=OV_DISKS | Overview | Main