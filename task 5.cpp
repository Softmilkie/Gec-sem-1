#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	//Storing user input
	float Num1;
	float Num2;
	float Num3;

	int MeanRunningCount = 2;

	//asks for users numbers and allows input
	cout << "Please enter two numbers. " << endl;
	cout << "Enter number 1: ";
	cin >> Num1;
	cout << "Enter number 2: ";
	cin >> Num2;

	//clears screen
	system("CLS");

	//displays users numbers after input
	cout << "These are your Numbers: " << Num1 << ", " << Num2 << endl;

	//calculates total and average of the users numbers
	float total = Num1 + Num2;
	float average = total / MeanRunningCount;

	//displays total and average of the users numbers
	cout << "The total of these numbers are: " << total << endl;
	cout << "The average of these numbers are: " << average << endl;
	cout << endl;

	float newTotal = 0;
	float newAverage = 0.0000;

	do
	{
		//changes the value of the mean to increase after each loop as the amount of numbers increases
		MeanRunningCount++;

		cout << "Enter 0 to quit game!" << endl;
		cout << "Enter a new number: " << endl;
		cin >> Num3;
		cout << endl;

		//if the users input after the first ones is 0, exit the program.
		if (Num3 == 0)
		{
			cout << "Thanks for playing" << endl;
			Sleep(2000);
			exit;
			break;
		}

		newTotal = total + Num3;
		newAverage = newTotal / MeanRunningCount;

		cout << "There are now " << MeanRunningCount << " numbers!" << endl;

cout << "These are your new numbers: " << total << ", " << Num3 << endl;
cout << "The total of these numbers are: " << newTotal << endl;
cout << "The average of these numbers are: " << newAverage << endl;
cout << endl;

total = newTotal;

	} while (Num3 != 0);

	return 0;


}
