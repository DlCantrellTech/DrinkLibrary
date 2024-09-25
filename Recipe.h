#ifndef RECIPE_H
#define RECIPE_H

#include <iostream>

using namespace std;

class Recipe
{
    private:
        int numIngredients = 0;
        string *ingredients = nullptr;
        string glassware = " ";
        string instructions = " ";
    public:
        //Constructor
        Recipe();

        //Deconstructor
        ~Recipe();

        //Function Prototypes
        void createRecipe();
};

#endif 