;===========================================================================================================================
;Main-Config-File for the Skin. Do not change Variable-Names (names in front of =)
;Change Launcher Buttons from User-Section, System-Launcher and/or Network-Section (no GUI available for this)
;===========================================================================================================================



[Variables]

;User Information============================================================================================================
SkinUserName=Your Name
SkinUserPic=#@#UserPicture\UserPicture.png



;Drives======================================================================================================================
disk1=c
disk2=
disk3=
disk4=
disk5=
disk6=
usb1=
usb2=
usb3=
usb4=
net1=
net2=
net3=
net4=
odd1=
odd2=
odd3=



;Slideshow===================================================================================================================
MediaTime=5
MediaFolder=
MediaWidth=550
MediaHeight=240

;Media Player================================================================================================================
Player=Winamp

;Weather=====================================================================================================================
Location1=
Location2=
Location3=
Unit=m

;RSS=========================================================================================================================
Feed1_Name=GOOGLE NEWS
Feed2_Name=SPIEGEL ONLINE
Feed3_Name=FOCUS

Feed1_URL=https://news.google.de/?output=rss
Feed2_URL=http://www.spiegel.de/schlagzeilen/tops/index.rss
Feed3_URL=http://rss.focus.de/fol/XML/rss_folnews.xml

;SpeedFan====================================================================================================================
SF_MB_T1=
SF_MB_T2=
SF_MB_F1=
SF_MB_F2=
SF_CPU_T=
SF_CPU_F=
SF_CPUC1_T=
SF_CPUC2_T=
SF_CPUC3_T=
SF_CPUC4_T=
SF_CPUC5_T=
SF_CPUC6_T=
SF_CPUC7_T=
SF_CPUC8_T=
SF_HDD1_T=
SF_HDD2_T=
SF_HDD3_T=
SF_HDD4_T=
SF_HDD5_T=
SF_HDD6_T=

;Network Buttons (INTERNALS SECTIONS)========================================================================================
;Configure only here in Textfile
NW_BTN1_Txt="Firewall"
NW_BTN2_Txt="Internet#CRLF#Options"
NW_BTN3_Txt="Connection"
NW_BTN4_Txt="Network &#CRLF#Sharing-#CRLF#Center"
NW_BTN5_Txt="HomeGroup"
NW_BTN6_Txt="Check IP"

NW_BTN1_FUNC=shell:::{4026492F-2F69-46B8-B9BF-5654FC07E423}
NW_BTN2_FUNC=shell:::{A3DD4F92-658A-410F-84FD-6FBBBEF2FFFE}
NW_BTN3_FUNC=shell:::{38A98528-6CBF-4CA9-8DC0-B1E1D10F7B1B}
NW_BTN4_FUNC=shell:::{8E908FC9-BECC-40f6-915B-F4CA0E70D03D}
NW_BTN5_FUNC=shell:::{67CA7650-96E6-4FDD-BB43-A8E774F73A57}
NW_BTN6_FUNC=http://checkip.dyndns.org

;USER Buttons (ENVIRONMENT SECTION)==========================================================================================
;Configure only here in Textfile
USR_BTN1_Txt="User"
USR_BTN2_Txt="Documents"
USR_BTN3_Txt="Pictures"
USR_BTN4_Txt="Music"
USR_BTN5_Txt="Videos"
USR_BTN6_Txt="Downloads"

USR_BTN1_FUNC=%USERPROFILE%
USR_BTN2_FUNC=%USERPROFILE%\Documents
USR_BTN3_FUNC=%USERPROFILE%\Pictures
USR_BTN4_FUNC=%USERPROFILE%\Music
USR_BTN5_FUNC=%USERPROFILE%\Videos
USR_BTN6_FUNC=%USERPROFILE%\Downloads

;===Launcher=================================================================================================================

;Titles----------------------------------------------------------------------------------------------------------------------
SL_Title="System"
AL1_Title=
AL2_Title=
AL3_Title=
LL1_Title=
LL2_Title=

;SystemLauncher--------------------------------------------------------------------------------------------------------------
SL_BTN1_Txt="Cmd"
SL_BTN2_Txt="Controls"
SL_BTN3_Txt="Devices & Printer"
SL_BTN4_Txt="Device-Manager"
SL_BTN5_Txt="Performance"
SL_BTN6_Txt="Programs & Features"
SL_BTN7_Txt="Services"
SL_BTN8_Txt="System"
SL_BTN9_Txt="Task-Manager"
SL_BTN10_Txt="Windows-Update"

SL_BTN1_FUNC="%WINDIR%\System32\cmd.exe"
SL_BTN2_FUNC="%WINDIR%\System32\control.exe"
SL_BTN3_FUNC=shell:::{A8A91A66-3A7D-4424-8D24-04E180695C7A}
SL_BTN4_FUNC=shell:::{74246bfc-4c96-11d0-abef-0020af6b0b7a}
SL_BTN5_FUNC=shell:::{78F3955E-3B90-4184-BD14-5397C15F1EFC}
SL_BTN6_FUNC=shell:::{7b81be6a-ce2b-4676-a29e-eb907a5126c5}
SL_BTN7_FUNC="services.msc"
SL_BTN8_FUNC=shell:::{BB06C0E4-D293-4f75-8A90-CB05B6477EEE}
SL_BTN9_FUNC="%WINDIR%\System32\taskmgr.exe"
SL_BTN10_FUNC=shell:::{36eef7db-88ad-4e81-ad49-0e313f0c35f8}

;AppLauncher-----------------------------------------------------------------------------------------------------------------
AL1_BTN1_Txt=
AL1_BTN2_Txt=
AL1_BTN3_Txt=
AL1_BTN4_Txt=
AL1_BTN5_Txt=
AL1_BTN6_Txt=
AL1_BTN7_Txt=
AL1_BTN8_Txt=
AL1_BTN9_Txt=
AL1_BTN10_Txt=
AL1_BTN11_Txt=
AL1_BTN12_Txt=

AL1_BTN1_FUNC=
AL1_BTN2_FUNC=
AL1_BTN3_FUNC=
AL1_BTN4_FUNC=
AL1_BTN5_FUNC=
AL1_BTN6_FUNC=
AL1_BTN7_FUNC=
AL1_BTN8_FUNC=
AL1_BTN9_FUNC=
AL1_BTN10_FUNC=
AL1_BTN11_FUNC=
AL1_BTN12_FUNC=

AL2_BTN1_Txt=
AL2_BTN2_Txt=
AL2_BTN3_Txt=
AL2_BTN4_Txt=
AL2_BTN5_Txt=
AL2_BTN6_Txt=
AL2_BTN7_Txt=
AL2_BTN8_Txt=
AL2_BTN9_Txt=
AL2_BTN10_Txt=

AL2_BTN1_FUNC=
AL2_BTN2_FUNC=
AL2_BTN3_FUNC=
AL2_BTN4_FUNC=
AL2_BTN5_FUNC=
AL2_BTN6_FUNC=
AL2_BTN7_FUNC=
AL2_BTN8_FUNC=
AL2_BTN9_FUNC=
AL2_BTN10_FUNC=

AL3_BTN1_Txt=
AL3_BTN2_Txt=
AL3_BTN3_Txt=
AL3_BTN4_Txt=
AL3_BTN5_Txt=
AL3_BTN6_Txt=
AL3_BTN7_Txt=
AL3_BTN8_Txt=

AL3_BTN1_FUNC=
AL3_BTN2_FUNC=
AL3_BTN3_FUNC=
AL3_BTN4_FUNC=
AL3_BTN5_FUNC=
AL3_BTN6_FUNC=
AL3_BTN7_FUNC=
AL3_BTN8_FUNC=

;LinkLauncher----------------------------------------------------------------------------------------------------------------
LL1_BTN1_Txt=
LL1_BTN2_Txt=
LL1_BTN3_Txt=
LL1_BTN4_Txt=
LL1_BTN5_Txt=
LL1_BTN6_Txt=
LL1_BTN7_Txt=
LL1_BTN8_Txt=
LL1_BTN9_Txt=
LL1_BTN10_Txt=
LL1_BTN11_Txt=
LL1_BTN12_Txt=
LL1_BTN13_Txt=
LL1_BTN14_Txt=
LL1_BTN15_Txt=

LL1_BTN1_FUNC=
LL1_BTN2_FUNC=
LL1_BTN3_FUNC=
LL1_BTN4_FUNC=
LL1_BTN5_FUNC=
LL1_BTN6_FUNC=
LL1_BTN7_FUNC=
LL1_BTN8_FUNC=
LL1_BTN9_FUNC=
LL1_BTN10_FUNC=
LL1_BTN11_FUNC=
LL1_BTN12_FUNC=
LL1_BTN13_FUNC=
LL1_BTN14_FUNC=
LL1_BTN15_FUNC=

LL2_BTN1_Txt=
LL2_BTN2_Txt=
LL2_BTN3_Txt=
LL2_BTN4_Txt=
LL2_BTN5_Txt=
LL2_BTN6_Txt=
LL2_BTN7_Txt=
LL2_BTN8_Txt=

LL2_BTN1_FUNC=
LL2_BTN2_FUNC=
LL2_BTN3_FUNC=
LL2_BTN4_FUNC=
LL2_BTN5_FUNC=
LL2_BTN6_FUNC=
LL2_BTN7_FUNC=
LL2_BTN8_FUNC=
