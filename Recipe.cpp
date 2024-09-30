#include "Recipe.h"

//Constructors
Recipe::Recipe()
{
    numIngredients = 0;
    ingredients = nullptr;
    glassware = " ";
    instructions = " ";
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
    delete[] ingredients;
    //cout << "\nRecipe deleted succesfully\n";
}

string* Recipe::getIngredients() {
    return ingredients;
}

int Recipe::getnumIngredients() {
    return numIngredients;
}
string Recipe::getGlassware() {
    return glassware;
}
string Recipe::getInstructions() {
    return instructions;
}

void Recipe::setIngredients(string* ingredients) {
    this->ingredients = ingredients;
}

void Recipe::setNumIngredients(int numIngredients) {
    this->numIngredients = numIngredients;
}

void Recipe::setGlassware(string glassware) {
    this->glassware = glassware;
}

void Recipe::setInstructions(string instructions) {
    this->instructions = instructions;
}
