#include "ansi_escape_codes.h"
#include "globals.h"
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

void mainmenu_screen() {
    cout << YELLOW << BOLD_ON;
    cout << "***===============================***\n";
    cout << "|||==>       TERMIGOTCHI       <==|||\n";
    cout << "***===============================***\n\n";
    cout << RESET;

    cout << "   " << GREEN << "1. " << RESET << "Yeni Oyun" << endl;
    cout << "   " << GREEN << "2. " << RESET << "Kayıt Yükle" << endl;
    cout << "   " << RED << "0. " << RESET << "Çıkış" << endl << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << " > Seçenek: ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 0:
        app.run = false;
        break;
    case 1:
        app.appState = State::Naming;
        break;
    case 2:
        app.appState = State::LoadGame;
        break;
    default:
        break;
    }

    cin.clear();
    cin.ignore();
}

void naming_screen() {
    cout << "\n > Evcil hayvanına bir isim ver: " << BLUE;
    getline(cin, app.pet.name);
    cout << RESET;
    app.appState = State::Gameplay;
}

void load_game_screen() {
    cout << "\n > Bu kaydı yüklemek istiyor musun? (";
    cout << "   " << GREEN << "1. " << RESET << "Evet" << endl;
    cout << "   " << GREEN << "2. " << RESET << "Hayır" << endl << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << " > Seçenek: ";

    int sel;
    cin >> sel;

    if (sel == 1) {
        app.appState = State::Gameplay;
    } else {
        app.appState = State::MainMenu;
    }

    cin.clear();
    cin.ignore();
}

void quit_screen() {
    cout << "\n > Oyundan çıkmak istediğine emin misin?" << endl;
    cout << "   " << GREEN << "1. " << RESET << "Evet" << endl;
    cout << "   " << GREEN << "2. " << RESET << "Hayır" << endl << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << " > Seçenek: ";

    int sel;
    cin >> sel;

    if (sel == 1) {
        app.run = false;
    } else {
        app.appState = State::Gameplay;
    }
}

void gameplay_screen() {
    cout << setw(10) << "Isim: " << BLUE << app.pet.name << RESET << endl;
    cout << setw(10) << "Can: " << app.pet.health << "% " << "[||||||||||]" << endl;
    cout << setw(10) << "Enerji: " << app.pet.energy << "% " << "[||||||||||]" << endl;
    cout << setw(10) << "Moral: " << app.pet.moral << "% " << "[||||||||||]" << endl;
    cout << setw(10) << "Aclik: " << app.pet.hunger << "% " << "[||||||||||]" << endl;
    cout << endl;

    cout << " > Ne yapmak istersin?" << endl;
    cout << "   " << GREEN << "1. " << RESET << "Yemek yedir" << endl;
    cout << "   " << GREEN << "2. " << RESET << "Oyun oyna" << endl;
    cout << "   " << GREEN << "3. " << RESET << "Uyut" << endl;
    cout << "   " << RED << "0. " << RESET << "Çıkış" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    cout << " > Seçenek: ";
    int choice;
    cin >> choice;

    switch (choice) {
    case 0:
        app.appState = State::Quit;
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        break;
    }

    cin.clear();
    cin.ignore();
}
