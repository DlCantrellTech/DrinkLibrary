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
        string* getIngredients();
        int getnumIngredients();
        string getGlassware();
        string getInstructions();
        void setIngredients(string*);
        void setNumIngredients(int);
        void setGlassware(string);
        void setInstructions(string);
};

#endif