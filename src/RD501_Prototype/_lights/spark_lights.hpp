class macro_new_light(plasma_light)
{
    diffuse[]={1,0.60000002,0.40000001};
    color[]={1,0.60000002,0.40000001};
    ambient[]={0,0,0,0};
    brightness=10;
    size=1;
    intensity=10000;
    drawLight=0;
    blinking=1;
    class Attenuation
    {
        start=0;
        constant=0;
        linear=0;
        quadratic=2.2;
        hardLimitStart=500;
        hardLimitEnd=1000;
    };
    position[]={0,3.5,0};
};
class macro_new_light(sparks_light)
{
    diffuse[]={1,0.80000001,0.80000001};
    color[]={1,0.80000001,0.80000001};
    ambient[]={0,0,0,0};
    brightness=50;
    size=1;
    intensity=1000;
    drawLight=0;
    blinking=0;
    class Attenuation
    {
        start=0;
        constant=0;
        linear=0;
        quadratic=1;
        hardLimitStart=40;
        hardLimitEnd=80;
    };
    position[]={0,0,0};
};