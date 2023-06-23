#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main()
{
    cout << "---Welcome to my Wizards' Companion App!---/n";
    cout << "------Type 'Exit' to end the program.------/n";
    
    string choice{"Wiz"};
    while((choice !="Exit") || (choice != "exit"))
    {
        cout << "/n Type Your choice from the following:/n";
        cout<< "'Encounter' for Encounter Options or'Space' for random space, /n";
        cin >> choice;
        if((choice == "Encounter")||(choice == "encounter"))
        {

        }

        if((choice == "Space")||(choice == "space"))
        {

        }

    }

}