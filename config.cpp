// You may not re-upload this mod ("ZsInGas") without modification.
// You may otherwise use the content of this file however you wish.
// You may repack this mod ("ZsInGas") into a Server Pack.
// You should comment a link to your mod on this mods page when repacking.

// If you required assistance I offer support: See my website for more detail;
// Website- https://macmodding.info/
// My Mods- https://steamcommunity.com/id/macrobberts/myworkshopfiles/
// GitHub - https://github.com/MacRobberts?tab=repositories
// Discord- https://discord.com/channels/@me/892288642775650345
class CfgPatches {
    class ZsInGas {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class CfgMods {
    class ZsInGas {
        hideName=1;
        hidePicture=1;
        name="ZsInGas";
        credits="Mac Robberts";
        author="Mac Robberts";
        version="0.1";
        type="mod";
        dependencies[] = {"Game"};
        class defs {
            class gameScriptModule {
                files[] = {"ZsInGas/scripts/3_game"};
            };
        };
    };
};