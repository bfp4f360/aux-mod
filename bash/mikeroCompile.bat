
@ECHO OFF
REM https://stackoverflow.com/questions/18462169/how-to-loop-through-array-in-batch

set outputFolder=C:\Users\Namenai\Desktop\aux_test_local\addons
set sourceFolder=C:\Users\Namenai\Documents\GitHub\aux-mod\src\addons

REM set Arr[0]=RD501_AARF
REM set Arr[1]=RD501_Droids
REM set Arr[2]=RD501_End
REM set Arr[3]=RD501_Helmets
REM set Arr[4]=RD501_Jumppack
REM set Arr[5]=RD501_Laat
REM set Arr[6]=RD501_Leagacy_Classnames
REM set Arr[7]=RD501_Main
REM set Arr[8]=RD501_Particle_Effects
REM set Arr[9]=RD501_Prototype
REM set Arr[10]=RD501_RDS
REM set Arr[11]=RD501_Stretcher
REM set Arr[12]=RD501_Units
REM set Arr[13]=RD501_Vehicles
REM set Arr[14]=RD501_Vehicle_Weapons
REM set Arr[15]=RD501_Weapons
REM set Arr[16]=RD501_Zeus

set "x=0"

:SymLoop
if defined Arr[%x%] (
   
    call Makepbo -N -U -A -Z=Compression %sourceFolder%\%%Arr[%x%]%% C:\Users\Namenai\Desktop\aux_test_local\addons

    set /a "x+=1"
    GOTO :SymLoop
)

REM set z=RD501_End
REM set x=C:\Users\Namenai\Documents\GitHub\aux-mod\src\addons\%z%
REM set y=C:\Users\Namenai\Desktop\aux_test_local\addons
REM Makepbo %x% %y%

