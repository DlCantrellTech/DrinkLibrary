#ifndef RECIPE_H
#define RECIPE_H

#include <iostream>

using namespace std;

class Recipe
{
    private:
        int numIngredients = 0;
        string* ingredients = nullptr;
        string glassware = " ";
        string instructions = " ";
    public:
        //Constructor
        Recipe();
        Recipe(int, string*, string, string);

        //Deconstructor
        ~Recipe();

        //Function Prototypes
        string getRecipe();
        string getIngredients();
        int getnumIngredients();
        string getGlassware();
        string getInstructions();
};

#endif 