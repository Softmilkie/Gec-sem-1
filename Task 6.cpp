#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int i;
    int j;
    int num1;
    char repeat;
    char y = 'z';
    char n = 'z';

    do
    {
        do
        {
            //gets user input
            cout << "Pick a number betweeen 1 and 10" << endl;
            cin >> num1;

            //checks if number is less than 1 or more than 10
            if (num1 > 10)
            {
                cout << "number is bigger than 10" << endl;
                cout << "please try again" << endl;
                cout << endl;
            }
            else if (num1 < 1)
            {
                cout << "number is less than 1" << endl;
                cout << "please try again" << endl;
                cout << endl;
            }
            //loops if player chooses invalid number, so user must play once.
        } while (num1 < 1 || num1 > 10);

        system("CLS");

        cout << "You chose the number: " << num1 << endl;
        cout << endl;

        for (int i = 1; i <= num1; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";

            cout << endl;
        }

        //asks if player wants to go again
        cout << endl;
        cout << "Do you want to play again, y or n? " << endl;
        cin >> repeat;

        if (repeat == 'y')
        {
            system("CLS");
        }
        else if (repeat == 'n')
        {
            system("CLS");
            cout << "Thanks for playing, Goodbye!" << endl;
            Sleep(2000);
            exit;
            break;
        };

    } while (repeat == 'y');

    system("PAUSE");
    return 0;
}
