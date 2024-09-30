/*
    Title: DrinkLibrary.h
    Project 1 - CSC1310
    Authors: Levi, Brody, Ryan, Justin
    Date: 9/18/2024
 */

#ifndef DrinkLibrary_h
#define DrinkLibrary_h

#include "Drink.h"
#include "Recipe.h"

using namespace std;

class DrinkLibrary {
    private:
        Drink** drinks; // pointer to array of pointers to Drink
        int numDrinks;

    public:
        //constructor
        DrinkLibrary();
        DrinkLibrary(Drink**, int);

        //destructor
        ~DrinkLibrary();

        //function prototypes
        void readIn();
        void printDrinks();
        void makeNew();
        int DisplayMenuGetChoice();
        void addDrink();
        void editDrinks();
        void remove(int);
};



#endif