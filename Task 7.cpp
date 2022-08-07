#include <iostream>
#include <Windows.h>
using namespace std;

void outputResults(int num1, int num2, int num3, int num4);
bool isOdd(int num);

int main()
{
	int input;
	int numOfOdds = 0;
	int oddsTotal = 0;
	int numOfEvens = 0;
	int evensTotal = 0;

	//loops input 10 times so it checks each number individually
	for (int i = 0; i < 10; i++)
	{
		cout << "Input a number: " << endl;
		cin >> input;

		//takes user input and puts it through 'bool isOdd' to decide wether is odd or even
		if (isOdd(input))
		{
			numOfOdds++;
			oddsTotal += input;
		}
		else
		{
			numOfEvens++;
			evensTotal += input;
		}
	}

	outputResults(numOfOdds, oddsTotal, numOfEvens, evensTotal);
	return 0;
}

//outputs the numbers to show amount and total of the odds and evens.
void outputResults(int num1, int num2, int num3, int num4)
{
	cout << endl;
	cout << "The amount of odd numbers is " << num1 << endl;
	cout << "The total of these odd numbers is " << num2 << endl;
	cout << endl;
	cout << "The amount of even numbers is " << num3 << endl;
	cout << "The total of these even numbers is " << num4 << endl;
	system("PAUSE");
}

//checks if number is odd by dividing by 2 and getting remainder.
bool isOdd(int num)
{
	//if remainder 0, isOdd returns false as it will be even.
	if (num % 2 == 0)
	{
		return false;
	}
	//if remainder is not 0, isOdd returns true
	else
	{
		return true;
	}
}
