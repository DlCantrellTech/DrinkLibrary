int BadInputProtection(int choice);
{
    cout << "That choice was not an option. Please, try again."
    cin >> choice;
    
    return choice;
}

int DisplayMenuGetChoice() {
    int choice = 0;

    cout << "WELCOME MESSAGE"
        << "1 - Display\n"
        << "2 - Add\n"
        << "3 - Remove\n"
        << "4 - End the Program\n"
        << "\nCHOICE: ";

    cin >> choice;
    while(choice != 1||2||3||4)
        BadInputProtection();

    return choice;
}