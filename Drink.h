//class specification file
#ifndef DRINK_H
#define DRINK_H

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
        string getName();
        Recipe* getRecipe();
        int getAlcoholPercentage();
        string getPairing();
        void setName(string);
        void setPairing(string);
        void setAlc(int);
        void printDrink();

};

#endif
