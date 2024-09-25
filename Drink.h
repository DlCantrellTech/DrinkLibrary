//class specification file
#ifndef DRINK_H
#define DRINK_H

#include <iostream>

using namespace std;

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
        string getName();
        void printDrink();
        void editDrink();

};

#endif
