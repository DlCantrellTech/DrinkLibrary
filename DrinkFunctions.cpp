#include <DrinkFunctions.h>

int BadInputProtection(int choice)
{
    cout << "That choice was not an option. Please, try again.";
    cin >> choice;
    
    return choice;
}

int DisplayMenuGetChoice() {
    int choice = 0;

    cout << "WELCOME MESSAGE"
        << "1 - Display\n"
        << "2 - Add\n"
        << "3 - Remove\n"
        << "4 - End the Program\n"
        << "\nCHOICE: ";

    cin >> choice;
    while(choice != 1||2||3||4)
        BadInputProtection();

    return choice;
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
