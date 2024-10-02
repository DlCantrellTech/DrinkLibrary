#include "DrinkLibrary.h"

#include <iostream>
using namespace std;

int main ()
{
    DrinkLibrary library;

    library.readIn();

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
                library.makeNew();
                library.readIn();
                break;
            case 5:
                library.readIn();
                break;
            case 6:
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid choice Please try again.\n";
        }
    } while(choice != 5);

    return 0;
}