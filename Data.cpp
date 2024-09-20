#include "Data.h"   // header file
#include <fstream>  // allow input from input text file
#include <iostream>

using namespace std;

Data::getData()
{
    ifstream input; // cin file

    input.open("input.txt");

    if (input.fail())   // fail case
    {
        cout << "\n\t\tFailed to open input file. Check for input.txt." << endl;
    }
    else
    {

    }

    input.close();
}

