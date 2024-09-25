//class specification file
#ifndef DRINKFUNCTIONS_H
#define DRINKFUNCTIONS_H

#include <iostream>

using namespace std;

class Recipe;

class Drink {
    private:
        string drinkName, pairing;
        int alcoholPercentage;
        Recipe* drinkRecipe;

    public:

        //constructor
        Drink();
        Drink(string, int, string, Recipe*);
        
        //destructor
        ~Drink();

        //function prototypes
        void printDrink();
        void editDrink();

};

#endif
