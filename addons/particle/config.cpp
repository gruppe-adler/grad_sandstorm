class CfgPatches
{
    class grad_sandstorm
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Data_F",
            "A3_Data_F_ParticleEffects",
            "A3_Weapons_F"
        };
    };
};
class CfgCloudlets
{
    class sandparticle
    {
        animationSpeedCoef=1;
        colorCoef[]={0.69999999,0.69999999,0.69999999,0.69999999};
        sizeCoef=1;
        position[]={0,0,0};
        interval=0.029999999;
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleShape="grad_sandstorm\addons\particle\p3d\sandparticle.p3d";
        particleFSNtieth=13;
        particleFSIndex=0;
        particleFSFrameCount=12;
        particleFSLoop=1;
        angle=0;
        angleVar=0;
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=5;
        moveVelocity[]={0,0,0};
        rotationVelocity=0;
        weight=1.278;
        volume=1;
        rubbing=0.5;
        size[]={1};
        color[]=
        {
            {0.22,0.22,0.22,0.34999999},
            {0.25,0.25,0.25,0.22},
            {0.25,0.25,0.25,0.1},
            {0.25,0.25,0.25,0.039999999},
            {0.25,0.25,0.25,0.0099999998}
        };
        animationSpeed[]={1};
        randomDirectionPeriod=0.1;
        randomDirectionIntensity=0.2;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=0.5;
        positionVar[]={0,0,0};
        positionVarConst[]={0,0,0};
        MoveVelocityVar[]={0,0,0};
        MoveVelocityVarConst[]={0,0,0};
        rotationVelocityVar=0;
        sizeVar=0.30000001;
        colorVar[]={0,0,0,0};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;

        smokeGenMinDist = 300;              // for more info see "Changes dependent on distance"
        smokeGenMaxDist = 5000;              // for more info see "Changes dependent on distance"
        smokeSizeCoef = 2.0;                // for more info see "Changes dependent on distance"
        smokeIntervalCoef = 4.0;            // for more info see "Changes dependent on distance"
    };
};