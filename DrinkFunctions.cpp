//includes header file
#include "DrinkFunctions.h"
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
    cout << "\nDrink deleted successfully\n";
}

//prints the drinks information
void Drink::printDrink() {
    cout << "\nDrink Name: " << drinkName << endl
         << "Alcohol Percentage: " << alcoholPercentage << endl
         << "Pairing: " << pairing << endl;

}