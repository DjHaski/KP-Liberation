/*
    KP LIBERATION MODULE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2018-09-11
    Last Update: 2018-09-20
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Defines for all functions, which are brought by this module.
*/

class respawn {
    file = "modules\02_respawn\fnc";

    // Do a camera fly by from-to position
    class respawn_camFlyBy {};

    // Handle respawn confirmation
    class respawn_displayConfirm {};

    // Handle respawn display load
    class respawn_displayLoad {};

    // Handle respawn list selection change
    class respawn_displaySpawnSelChanged {};

    // Handle resapwn display unload
    class respawn_displayUnload {};

    // Handle respawn list selection change
    class respawn_displayLoadoutSelChanged {};

    // Update list of available respawns
    class respawn_displayUpdateRespawns {};

    // Update list of available loadouts
    class respawn_displayUpdateLoadouts {};

    // Focus map control on currently selected respawn area
    class respawn_displayFocusMap {};

    // Get an array of available respawns
    class respawn_getRespawns {};

    // Module initialization
    class respawn_initModule {
        postInit = 1;
    };

    // Handle player killed
    class respawn_onKilled {};

    // Handle player respawn
    class respawn_onRespawn {};

    // Open respawn menu
    class respawn_open {};

    class respawn_spawnPlayer {};
};