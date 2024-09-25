#include "DrinkLibrary.h"

#include <iostream>
using namespace std;

int main ()
{
    DrinkLibrary library;
    int choice;

    do {
        choice = library.DisplayMenuGetChoice();

        switch(choice) {
            case 1:
                library.printDrinks();
                break;
            case 2:
                library.addDrink();
                break;
            case 3:
                library.editDrinks();
                break;
            case 4:
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid choice Please try again.\n";
        }
    } while(choice != 4);


    return 0;
}