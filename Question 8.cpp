#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;


int main()
{
	const int MAX_ITEMS = 4;
	string i;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "health potion";
	inventory[numItems++] = "dagger";

	cout << "You have found a Wizard staff would you like to swap it for your dagger \n Press Y for yes or N for no:";
	cin >> i;

	if (i == "y" or i == "Y")
	{
		inventory[3] = "Wizard staff";
		cout << "You picked up the wizard staff and dropped the dagger\nHere is what you now have in your inventory:" << endl;
		for (int n = 0; n < 4; n++)
			cout << inventory[n] << endl;
		return 0;
	}
	if (i == "n" or i == "N")
	{
		cout << "You left behind that crusty old stick trusting your dagger would help you more on your quests \n Here is your inventory: " << endl;
		for (int n = 0; n < 4; n++)
			cout << inventory[n] << endl;
		return 0;
	}
	else
	{
		cout << "That was not an option";
		return 0;
	}
}









//int main()
//{
//	int myNumber[10];

	//initialising elements of the array
//	for (int i = 0; i < 10; i++)
//		myNumber[i] = i;

	//output titles
//	cout << "Array Element" << setw(17) << "stored value" << endl;

	//output each array elemts value
//	for (int i = 0; i < 10; i++)
//		cout << setw(7) << i << setw(17) << myNumber[i] << endl;
//	return 0;
//}



//int main()
//
	// An array with 5 rows and 2 columns
//	int myNumbers[5][2] = {
//		{0, 0},
//		{1, 2},
//		{2, 4},
//		{3, 6},
//		{4, 6}
//	};

	//output each arrays elements
//	for (int row = 0; row < 5; row++)
//	{
//		for (int column = 0; column < 2; column++)
//		{
//			cout << "myNumbers[" << row << "][" << column << "]: ";
//			cout << myNumbers[row][column] << endl;
//		}
//	}

//	return 0;
//}