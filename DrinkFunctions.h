//class specification file
#ifndef DRINKFUNCTIONS_H
#define DRINKFUNCTIONS_H

#include <iostream>

using namespace std;

class Drink {
    private:
        string drinkName, pairing;
        int servings;
        Recipe drinkRecipe;

    public:

        //constructor
        Drink();
        Drink(string, int, string, Recipe);
        
        //destructor
        ~Drink();

        //accessor functions
        string getName() const;
        int getServings() const;
        string getPairing() const;
        Recipe getRecipe() const;

        //setter functions
        void setName(string);
        void setServings(int);
        void setPairing(string);
        void setRecipe(Recipe);

        //function prototypes
        int DisplayMenuGetChoice();
        void createDrink(string, int, string, Recipe);
        void printDrink();
        void editDrink();

};

#endif
