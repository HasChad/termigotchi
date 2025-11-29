#pragma once

#include <string>

enum class PetSpecies {
    Cat,
    Dog,
};

struct Pet {
    std::string name;
    PetSpecies specie = PetSpecies::Cat;
    int health = 100;
    int energy = 100;
    int moral = 100;
    int hunger = 100;
};

enum class State {
    MainMenu,
    Naming,
    LoadGame,
    Gameplay,
    Pause,
    Quit,
};

enum class MainMenuItems {
    NewGame,
    LoadGame,
    Quit,
};

struct App {
    bool run = true;
    Pet pet;
    State appState = State::MainMenu;
};
inline App app;
