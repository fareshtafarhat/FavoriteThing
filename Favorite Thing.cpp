#include "nailpolish.h"
#include <iostream>

using namespace std;

void Instructions();


void Instructions()

cout << "Let's get started with Nail Polish" << endl;

int main()
{
	Instructions();
	nailpolishrecord FareshtaRecord;
	bool matchsecond = true;

	do
	{
		char answer;
		FareshtaRecord.matchsecond();
		if (FareshtaRecord.getRecordSize() >= 100)
		{
			matchsecond = false;
			break;
		}
		cout << "  Do you have more nail polish? Click y for yes" << endl;
		cout << "if not, click any key to leave the program ";
		cin >> answer;
		cout << endl;
		if (answer == 'Y' || answer == 'y')
		{
			cout << endl;
			cout << "more polish !!";
			matchsecond = true;
		}
		else
		{
			matchsecond = false;

			cout << "The nail polish info has been stored" << endl;
		}
	} while (matchsecond == true);

	FareshtaRecord.displayrecord();
	return 0;

}