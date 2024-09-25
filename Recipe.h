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
        Recipe::Recipe();
        Recipe::Recipe(int, string*, string, string);

        //Deconstructor
        Recipe::~Recipe();

        //Function Prototypes
        void getRecipe();
        void getINgredients();
        void getGlassware();
        void getInstructions();
};

#endif 