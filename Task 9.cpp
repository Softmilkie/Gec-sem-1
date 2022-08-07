#include <iostream>
using namespace std;


int main()
{
	for (int i = 0; i <= 3; i++)
	{
		if (i % 2 == 0)
			cout << i << " is even\n";
		else
			cout << i << " is odd\n";

	}
	return 0;
}