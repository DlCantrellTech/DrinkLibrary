#include <DrinkFunctions.h>

int DisplayMenuGetChoice() {
    int choice;

    cout << "WELCOME MESSAGE"
		 << "1 - Display\n"
		 << "2 - Add\n"
		 << "3 - Remove\n"
         << "4 - End the Program\n"
		 << "\nCHOICE: ";

    cin >> choice;
    
    return choice;
}