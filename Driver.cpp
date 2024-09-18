

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