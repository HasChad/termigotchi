#include "globals.h"
#include "menus.h"
#include <clocale>

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

    return 0;
}
