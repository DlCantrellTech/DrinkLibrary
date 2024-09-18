//includes header file
#include "DrinkFunctions.h"

//constructors
Drink::Drink() {
    drinkName = "";
    servings = 0;
    pairing = "";
    drinkRecipe = nullptr;
}

Drink::Drink(string name, int servings, string pairing, Recipe drinkRecipe) {
    this->drinkName = name;
    this->servings = servings;
    this->pairing = pairing;
    this->drinkRecipe = drinkRecipe;
}

//destructor
Drink::~Drink() {
    cout << "\nDrink deleted successfully\n";
}

//getter functions
string Drink::getName() const {
    return this->drinkName;
}

int Drink::getServings() const {
    return this->servings;
}

//creates a new drink
void Drink::createDrink(string name, int servings, string pairing, Recipe drinkRecipe) {
    Drink* drink = new Drink(name, servings, pairing, drinkRecipe);
}

//prints main menu
int DisplayMenuGetChoice() {
    int choice;

    cout << "WELCOME MESSAGE"
		 << "1 - Display\n"
		 << "2 - Add\n"
		 << "3 - Remove\n"
         << "4 - End the Program\n"
		 << "\nCHOICE: ";

    cin >> choice;
    
    return choice;
}