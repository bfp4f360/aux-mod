
@ECHO OFF
REM https://stackoverflow.com/questions/18462169/how-to-loop-through-array-in-batch

set outputFolder=C:\Users\Namenai\Desktop\aux_test_local\addons
set sourceFolder=C:\Users\Namenai\Documents\GitHub\aux-mod\src\addons
set AddonBuilderPath=C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder
set tempFolder=C:\Users\Namenai\AppData\Local\Temp
set includeFile=C:\Users\Namenai\Documents\GitHub\aux-mod\bash\include.txt

REM Sadly for the file below, the filepath can not have any spaces
set keyFile=C:\Users\Namenai\Documents\GitHub\aux-mod\keys\RD501_Aux_Mod.biprivatekey

set Arr[0]=RD501_AARF
set Arr[1]=RD501_Droids
set Arr[2]=RD501_End
set Arr[3]=RD501_Helmets
set Arr[4]=RD501_Jumppack
set Arr[5]=RD501_Laat
set Arr[6]=RD501_Leagacy_Classnames
set Arr[7]=RD501_Main
set Arr[8]=RD501_Particle_Effects
set Arr[9]=RD501_Prototype
set Arr[10]=RD501_RDS
set Arr[11]=RD501_Stretcher
set Arr[12]=RD501_Units
set Arr[13]=RD501_Vehicles
set Arr[14]=RD501_Vehicle_Weapons
set Arr[15]=RD501_Weapons
set Arr[16]=RD501_Zeus


CD /D %AddonBuilderPath%

set "x=0"

:SymLoop
if defined Arr[%x%] (
   
    call ECHO %sourceFolder%\%%Arr[%x%]%%
    call AddonBuilder.exe %sourceFolder%\%%Arr[%x%]%% %outputFolder% -temp=%tempFolder% -include=%includeFile% -sign=%keyFile%
    set /a "x+=1"
    GOTO :SymLoop
)


