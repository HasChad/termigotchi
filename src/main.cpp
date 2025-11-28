#include "ansi_escape_codes.h"
#include <clocale>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

enum class PetSpecies {
    Cat,
    Dog,
};

struct Pet {
    string name;
    PetSpecies specie = PetSpecies::Cat;
    int health = 100;
    int energy = 100;
    int moral = 100;
    int hunger = 100;
};

enum class State {
    Naming,
    MainMenu,
    Gameplay,
    Pause,
    Quit,
};

enum class MainMenuItems {
    NewGame,
    Load,
    Quit,
};

struct App {
    bool run = true;
    Pet pet;
    State appState = State::MainMenu;
};
inline App app;

void mainmenu() {
    cout << YELLOW;
    cout << "***===============================***\n";
    cout << BOLD_ON;
    cout << " | ==>       TERMIGOTCHI       <== |\n";
    cout << BOLD_OFF;
    cout << "***===============================***\n\n";
    cout << RESET;

    cout << "   " << GREEN << "1. " << RESET << "Yeni Oyun" << endl;
    cout << "   " << GREEN << "2. " << RESET << "Kayıt Yükle" << endl;
    cout << "   " << GREEN << "3. " << RESET << "Çıkış" << endl << endl;
    cout << "Seçenek: ";

    int choice = -1;
    cin >> choice;
    cin.clear();
    cin.ignore();

    if (choice == 1) {
        app.appState = State::Naming;
    } else if (choice == 3) {
        app.appState = State::Quit;
    }
}

void naming() {
    cout << "Evcil hayvanına bir isim ver: ";
    getline(cin, app.pet.name);
    app.appState = State::Gameplay;
}

void quit_screen() {
    cout << "Oyundan çıkmak istediğine emin misin? (E/H): ";
    char sel;
    cin >> sel;

    if (sel == 'e' || sel == 'E') {
        app.run = false;
    } else {
        app.appState = State::Gameplay;
    }
}

int main() {
    setlocale(LC_ALL, "Turkish");

    int choice = -1;

    while (app.run) {
        system("clear");

        switch (app.appState) {
        case State::MainMenu:
            mainmenu();
            break;
        case State::Naming:
            naming();
            break;
        case State::Gameplay:
            cout << setw(10) << "Isim" << "  " << BLUE << app.pet.name << RESET << endl;
            cout << setw(10) << app.pet.health << "  " << "[||||||||||]" << endl;
            cout << setw(10) << app.pet.energy << "  " << "[||||||||||]" << endl;
            cout << setw(10) << app.pet.moral << "  " << "[||||||||||]" << endl;
            cout << setw(10) << app.pet.hunger << "  " << "[||||||||||]" << endl;
            cout << endl;

            cout << "   " << "Ne yapmak istersin?" << endl;
            cout << "   " << GREEN << "1. " << RESET << "Yemek yedir" << endl;
            cout << "   " << GREEN << "2. " << RESET << "Oyun oyna" << endl;
            cout << "   " << GREEN << "3. " << RESET << "Uyut" << endl;
            cout << "   " << RED << "0. " << RESET << "Çıkış" << endl;
            cout << endl;

            cout << setw(10) << "Choice: ";
            cin >> choice;
            cin.clear();
            cin.ignore();

            if (choice == 0) {
                app.appState = State::Quit;
            }

            choice = -1;
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
