/*
    KP LIBERATION MODULE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2018-08-02
    Last Update: 2018-10-18
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Defines for all functions, which are brought by this module.
*/

class adm {
    file = "modules\99_adm\fnc";

    // Deletes exported data in the players profile
    class adm_deleteExport {};

    // Exports current save data to the players profile
    class adm_exportSave {};

    // Imports save data from the players profile
    class adm_importSave {};

    // Applies provided save data for import to the server profile
    class adm_importSaveServer {};

    // Opens the admin menu dialog
    class adm_openDialog {};

    // Module post initialization
    class adm_postInitModule {
        postInit = 1;
    };

    // Module pre initialization
    class adm_preInitModule {
        preInit = 1;
    };
};
