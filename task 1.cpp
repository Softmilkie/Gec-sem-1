#include <iostream>
using namespace std;


enum Weapons
{
    Sword = 1,
    Dagger,
    Mace,
    Twin_Swords,
    Samurai,
    Wizard_Staff,
    Fire_Potion,
    Ice_Blade,
    Small_Knife
};

int main()
{
    int myHealth = 13000;

    cout << "My current health is " << myHealth << endl;

    cout << "The ID of my Weapon of choice is " << Samurai << endl;

    system("PAUSE");
}
