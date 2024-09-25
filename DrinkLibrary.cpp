/*
    Title: DrinkLibrary.cpp
    Project 1 - CSC1310
    Authors: Levi, Brody, Ryan, Justin
    Date: 9/18/2024
 */
#include "DrinkLibrary.h"   // header file
#include <fstream>          // allow input from input text file
#include <iostream>
#include "Drink.h"
#include "Recipe.h"

using namespace std;

void DrinkLibrary::readIn()
{
    ifstream input;                 // cin file

    // choose which file to read from
    int choice, numDrinks = 0;
    string fileName, inputCounter;

    do {
        cout << "\n\nWhich file would you like to read from?\n";
        cout << "\t1. Working Library\n";
        cout << "\t2. Other\n";
        cout << "\t3. Back\n";
        cin >> choice;
        while(choice < 1 || choice > 3)
        {
            cout << "\nInvalid selection!";
            cin >> choice;
        }
        switch(choice)
        {
            case 1:
                fileName = "WORKING_LIBRARY.txt";
                break;

            case 2:
                cout << "\n\t\tEnter name of file: " << endl;
                getline(cin, fileName);
                break;
        }

    }while (choice != 3);

    input.open(fileName);

    if (input.fail())               // fail case
    {
        cout << "\n\t\tFailed to open input file. Check for " << fileName << "and try again." << endl;
        return;
    }

    // count numDrinks
    while (getline(input, inputCounter, '\n'))
    {
        numDrinks++;
    }
    drinks = new Drink*[numDrinks]; // dynamically allocate array of pointers to Drink
    this->numDrinks = numDrinks;    // set numDrinks to the equivalent class variable
    
    for (int i = 0; i < numDrinks; i++)
    {
      string name, pairing, glassware, instructions;
      string* ingredients;
      int alchololPercentage, numIngredients;   // need to incorperate numIngredients into Recipe class

      // obtain values for parameters from input file
      getline(input, name, '*');

      input >> alchololPercentage;
      input.ignore();               // ignore *

      getline(input, pairing, '*');

      input >> numIngredients;                  // need to incorperate numIngredients into Recipe class !!!!!!!!!!!!!!!!!!
      input.ignore();               // ingore *
      ingredients = new string[numIngredients];
      for(int j = 0; j < numIngredients; j++)
      {
        getline(input, ingredients[j], '*');
      }

      getline(input, glassware, '*');

      getline(input, instructions, '*');

      // create a Recipe object
      Recipe drinkRecipe(ingredients, glassware, instructions);

      // create a Drink object
      drinks[i] = new Drink(name, alchololPercentage, pairing, drinkRecipe);
    }

    input.close();
}

void DrinkLibrary::makeNew() {
    ofstream output;  // output file stream
    string fileName;
    int numDrinks;

    cout << "\n\t\tEnter the name of the new library file (ex. My Drinks): ";
    cin >> fileName;

    cout << "How many drinks would you like to add? ";
    cin >> numDrinks;

    drinks = new Drink*[numDrinks];  // dynamically allocate array of pointers to Drink

    for (int i = 0; i < numDrinks; i++) {
        string name, pairing, glassware, instructions;
        int alcoholPercentage, numIngredients;

        cout << "\n\t\tEntering details for drink #" << (i + 1) << endl;
        
        cout << "\n\t\tName: ";
        cin.ignore();
        getline(cin, name);
        
        cout << "\n\t\tAlcohol Percentage: ";
        cin >> alcoholPercentage;

        cout << "\n\t\tPairing: ";
        cin.ignore();
        getline(cin, pairing);

        cout << "\n\t\tNumber of Ingredients: ";
        cin >> numIngredients;
        string* ingredients = new string[numIngredients];
        for (int j = 0; j < numIngredients; j++) {
            cout << "\n\t\tIngredient #: " << (j + 1) << ": ";
            cin.ignore();
            getline(cin, ingredients[j]);
        }

        cout << "\n\t\tGlassware: ";
        getline(cin, glassware);

        cout << "\n\t\tInstructions (type full instructions before hitting enter): ";
        getline(cin, instructions);

        // Create a Recipe object
        Recipe drinkRecipe(ingredients, glassware, instructions);

        // Create a Drink object
        drinks[i] = new Drink(name, alcoholPercentage, pairing, drinkRecipe);
    }

    output.open(fileName);
    if (output.fail()) {
        cout << "\n\t\tFailed to open output file." << endl;
        return;
    }

    // Write drinks to the file
    for (int i = 0; i < numDrinks; i++) {
        output << drinks[i]->getName() << "*"
               << drinks[i]->getAlcoholPercentage() << "*"
               << drinks[i]->getPairing() << "*"
               << drinks[i]->getRecipe().getnumIngredients() << "*";

        string* ingredients = drinks[i]->getRecipe().getIngredients();
        for (int j = 0; j < drinks[i]->getRecipe().getnumIngredients(); j++) {
            output << ingredients[j] << (j < drinks[i]->getRecipe().getnumIngredients() - 1 ? "*" : "");
        }

        output << "*" 
               << drinks[i]->getRecipe().getGlassware() << "*" 
               << drinks[i]->getRecipe().getInstructions() << "*" << endl;
    }

    output.close();
    cout << "New drink library saved to " << fileName << endl;

    // Clean up dynamically allocated ingredients
    for (int i = 0; i < numDrinks; i++) {
        delete[] drinks[i]->getRecipe().getIngredients(); 
    }
    delete[] drinks;                                      // clean up the drinks array
}

void DrinkLibrary::printDrinks(Drink** drinks, int numDrinks)
{
    if (numDrinks <=0 )
    {
        cout << "\n\t\tNo drinks available." << endl;
        return;
    }

    for (int i = 0; i < numDrinks; i++)
    {
        // print Drink variables
        cout << "\t\t--------------------------" << endl;
        cout << "\n\t\tDrink #: "<< i + 1 << endl;
        cout << "\t\tName: " << drinks[i]->getName() << endl;
        cout << "\t\tAlcohol Percentage: " << drinks[i]->getAlcoholPercentage() << "%" << endl;
        cout << "\t\tPairing: " << drinks[i]->getPairing() << endl;

        // print ingredients
        string* ingredients = drinkRecipe.getIngredients();
        int numIngredients = drinkRecipe.getnumIngredients();
        cout << "\t\tIngredients: " << endl;
        for (int j = 0; j < numIngredients; j++)
        {
            cout << " * " << ingredients[j] << endl;
        }

        // print rest of Recipe
        cout << "\t\tGlassware: " << drinkRecipe.getGlassware() << endl;
        cout << "\t\tInstructions: " << drinkRecipe.getInstructions() << endl;

    }
}

//constructors
DrinkLibrary::DrinkLibrary()
{
    drinks = nullptr;
    numDrinks = 0;
}

DrinkLibrary::DrinkLibrary(Drink** drinks, int numDrinks)
{
    this->drinks = drinks;
    this->numDrinks = numDrinks;
}

//destructor
DrinkLibrary::~DrinkLibrary()
{
    cout << "\nDrinkLibrary deleted successfully" << endl;
}


//prints main menu
int DrinkLibrary::DisplayMenuGetChoice() {
    int choice;

    cout << "WELCOME MESSAGE\n"
		 << "1 - Display all Drinks\n"
		 << "2 - Add a Drink\n"
		 << "3 - Edit a Drink\n"
         << "4 - End the Program\n"
		 << "\nCHOICE: ";

    cin >> choice;
    
    return choice;
}

void DrinkLibrary::printDrinks() {
    cout << "Displaying All Drinks:\n";

    for(int i = 0; i < numDrinks; i++)
        drinks[i]->printDrink();
}

//adds a drink to the library
void DrinkLibrary::addDrink() {
    string drinkName, pairing;
    double alcoholPercentage;
    Recipe* drinkRecipe;
    
    cout << "Adding Drink:\n";

    cin.ignore();
    cout << "\nEnter Drink Name: ";
    getline(cin, drinkName);
    cout << "Enter the alcohol Percentage: ";
    cin >> alcoholPercentage;
    cin.ignore();
    cout << "Enter a Pairing: ";
    getline(cin, pairing);

    //drinkRecipe.createRecipe();

    Drink* newDrink = new Drink(drinkName, alcoholPercentage, pairing, drinkRecipe);

    Drink** newDrinksArray = new Drink*[numDrinks+1];
    for(int i =0; i < numDrinks; i++)
        newDrinksArray[i] = drinks[i];
    newDrinksArray[numDrinks] = newDrink;

    delete[] drinks;
    drinks = newDrinksArray;
    numDrinks++;

}

void DrinkLibrary::editDrinks() {
    int drinkIndex, choice;
    
    cout << "Displaying All Drinks:\n";
    for(int i = 0; i < numDrinks; i++)
        cout << "(" << i+1 << ") Drink Name: " << drinks[i]->getName() << endl;
    
    cout << "\nWhich Drink do you want to Edit: ";
    cin >> drinkIndex;
    drinkIndex--;

    cout << "1 - Edit Name\n"
        << "2 - Edit Alcohol Percentage\n"
        << "3 - Edit Pairing\n"
        << "4 - Remove Drink\n"
        << "5 - Back to Main\n"
        << "\nCHOICE: ";

    cin >> choice;

    switch(choice) {
        case 1:
            cout << "New Drink Name: ";
            getline(cin, drinks[drinkIndex]->)
            break;
        case 2:
            cout << "New Alcohol Percentage: ";

            break;
        case 3:
            cout << "New Drink Pairing: ";

            break;
        case 4:
            cout << "Drink " << drinkIndex << " Removed\n"

            break;
        case 5:
            cout << "Returning to Main Menu.\n";
            break;
        default:
            cout << "Invalid choice Please try again.\n";
    }
}