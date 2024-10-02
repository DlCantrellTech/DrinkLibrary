//includes header file
#include "Drink.h"
#include "Recipe.h"

//constructors
Drink::Drink() {
    drinkName = "";
    alcoholPercentage = 0;
    pairing = "";
    drinkRecipe = nullptr;
}

Drink::Drink(string name, int alcoholPercentage, string pairing, Recipe* drinkRecipe) {
    this->drinkName = name;
    this->alcoholPercentage = alcoholPercentage;
    this->pairing = pairing;
    this->drinkRecipe = drinkRecipe;
}

//destructor
Drink::~Drink() {
    delete drinkRecipe;
    //cout << "\nDrink deleted successfully\n";
}

string Drink::getName() {
    return drinkName;
}

Recipe* Drink::getRecipe() {
    return drinkRecipe;
}

int Drink::getAlcoholPercentage() {
    return alcoholPercentage;
}

string Drink::getPairing() {
    return pairing;
}

void Drink::setName(string drinkName) {
    this->drinkName = drinkName;
}

void Drink::setPairing(string pairing) {
    this->pairing = pairing;
}

void Drink::setAlc(int alcoholPercentage) {
    this->alcoholPercentage = alcoholPercentage;
}

//prints the drinks information
void Drink::printDrink() {
    cout << "\nDrink Name: " << drinkName << endl
         << "Alcohol Percentage: " << alcoholPercentage << endl
         << "Pairing: " << pairing << endl
         << "Glassware: " << drinkRecipe->getGlassware() << endl
         << "Instructions: " << drinkRecipe->getInstructions() << endl;

}