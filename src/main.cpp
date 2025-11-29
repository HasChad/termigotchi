#include "ansi_escape_codes.h"
#include "globals.h"
#include "menus.h"
#include <clocale>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    while (app.run) {
        system("clear");

        switch (app.appState) {
        case State::MainMenu:
            mainmenu_screen();
            break;
        case State::Naming:
            naming_screen();
            break;
        case State::LoadGame:
            load_game_screen();
            break;
        case State::Gameplay:
            gameplay_screen();
            break;
        case State::Pause:
            break;
        case State::Quit:
            quit_screen();
            break;
        }
    }

    system("clear");
    cout << MAGENTA << BOLD_ON;
    cout << " > Sonra görüşürüz!!! Tekrar gelmeyi unutma!!! :3" << endl;

    return 0;
}
