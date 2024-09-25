/*
    Title: DrinkLibrary.h
    Project 1 - CSC1310
    Authors: Levi, Brody, Ryan, Justin
    Date: 9/18/2024
 */

#ifndef DrinkLibrary_h
#define DrinkLibrary_h

#include "DrinkFunctions.h"

using namespace std;

class DrinkLibrary {
    private:
        Drink** drinks; // pointer to array of pointers to Drink
        int numDrinks;

        void readIn();
    public:
        //constructor
        DrinkLibrary();

        //destructor
        ~DrinkLibrary();

        //function prototypes
        int DisplayMenuGetChoice();
        void addDrink();
        void printDrinks();
        void editDrinks();
};



#endif