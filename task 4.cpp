#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5;
	int playerInput;

	cout << "----------DOOM!----------" << endl;
	cout << endl;
	cout << "Choose your difficulty:" << endl;
	cout << "1. I'm too young to die!" << endl;
	cout << "2. Hey, not to rough!" << endl;
	cout << "3. Hurt me plenty." << endl;
	cout << "4. Hurt me plenty." << endl;
	cout << "5. Nightmare..." << endl;
	cout << endl;
	cout << "Press anything else to turn back" << endl;
	cin >> playerInput;

	system("CLS");
	switch (playerInput)
	{
	case 1:
		cout << "I'm too young too die!" << endl;
		cout << "Will there even be enemies?" << endl;
		cout << endl;
		break;

case 2:
			cout << "Hey, not to rough!" << endl;
			cout << "This should be a breeze" << endl;
			cout << endl;
			break;

		case 3:
			cout << "Hurt me plenty." << endl;
			cout << "The is only just beginning" << endl;
			cout << endl;
			break;

		case 4:
			cout << "Hurt me plenty." << endl;
			cout << "Finally a real man" << endl;
			cout << endl;
			break;

		case 5:
			cout << " Nightmare..." << endl;
			cout << "REST IN PIECE" << endl;
			cout << endl;
			break;

		default:
			cout << "I see you changed you mind" << endl;
			cout << "Good choice!" << endl;
			cout << endl;
			break;

	}
	system("PAUSE");
	return 0;
}
