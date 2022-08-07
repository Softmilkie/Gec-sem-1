#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{

	int hariboPacks = 40;
	int students = 14;

	int each = hariboPacks / students;
	int givenAway = each * students;
	int remainder = hariboPacks - givenAway;


	cout << "I have " << hariboPacks << " haribo packs for " << students << " students." << endl;

	cout << "Each student will get " << each << " packets each." << endl;

	cout << "That means I have given away " << givenAway << " packets of haribos." << endl;

	cout << "That leaves me with only " << remainder << " packets of haribos :(" << endl;

	system("PAUSE");
	return 0;
}
