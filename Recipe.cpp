#include "Recipe.h"

//Constructors
Recipe::Recipe()
{
    int numIngredients = 0;
    string* ingredients = nullptr;
    string glassware = " ";
    string instructions = " ";
}

Recipe::Recipe(int numIngredients, string* ingredients, string glassware, string instructions)
{
    this->numIngredients = numIngredients;
    this->ingredients = ingredients;
    this->glassware = glassware;
    this->instructions = instructions;
}

//Deconstructors
Recipe::~Recipe()
{
    cout << "\nRecipe deleted succesfully\n";
}

