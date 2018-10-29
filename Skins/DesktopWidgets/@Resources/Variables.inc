[Variables]
BarWidth=4
BarHeight=(#WORKAREAHEIGHT#/5)
BarGapX=2R
BarGapY=0
BarOrientation=Vertical

FFTAttack=0
FFTDecay=0
FFTSize=4096
FreqMin=20
FreqMax=18000
; Audio settings
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTOptions

MeasureName=MeasureAudioRepeat
MeterName=MeterBarRepeat



Bands=152
Sensitivity=55
ColorIntensity=1
ColorTransitionTime=2
ColorPlaylist=RandomColorPlaylist



; === DO NOT ADD VARIABLES BELOW THIS LINE ===

[RandomColorPlaylist]
; For advanced users
Measure=String

1=Random,Random,Random|Random,Random,Random
; Transition this color string from right to left
Mode1=RightToLeft
; Output to a temporary variable, for use in the next sequence
Out1=Left

2=Random,Random,Random|Random,Random,Random
Mode2=RightToLeft
Out2=Right

3=Random,Random,Random|Random,Random,Random
Out3=Bottom
Mode3=RightToLeft

4=Left|Right
; Output to a table of interpolated colors, one specific color for each bar/band
Out4=TopRepeat

5=Bottom|TopRepeat
; Output to display
Out5=Meter
