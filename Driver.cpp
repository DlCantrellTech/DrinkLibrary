

#include <iostream>
using namespace std;

//function prototypes
int DisplayMenuGetChoice();

int main ()
{
    int choice;

    do {
        choice = DisplayMenuGetChoice();

        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    } while(choice != 4);


    return 0;
}

int DisplayMenuGetChoice() {
    int choice;

    cout << "WELCOME MESSAGE"
		 << "1 - Display\n"
		 << "2 - Add\n"
		 << "3 - Remove\n"
         << "4 - End the Program\n"
		 << "\nCHOICE: ";
}