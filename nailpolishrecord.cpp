#include "nailpolishrecord.h"

nailpolishrecord::nailpolishrecord()
{
	RecordSize = 0;
}

bool nailpolishrecord::matchsecond(nailpolish brand)
{
	for (int i = 0; i < RecordSize; i++)
	{
		if (second.getNailpolish() == Record[i].getNailpolish())
		{
			cout << "you already entered this nail polish, " << Record[i].getName() << ", is already in the list." << endl;
			return false;
		}
	}
	return true;
}
//shows multiple attempts
int nailpolishrecord::morenailpolish()									
{
	nailpolish newnailpolish;
	newnailpolish.getmorenailpolish();
	if (matchsecond(RecordSize))
	{
		Record[RecordSize] = RecordSize;
		RecordSize++;
		return 0;
	}
	else
	{
		return MostE;
	}
}
// gets size of list
int nailpolishrecord::getRecordSize()								
{
	return RecordSize;
}
//shows list
void nailpolishrecord::displayrecord()								
{
	int i;
	for (i = 0; i < RecordSize; i++)
	{
		cout << Record[i];
		cout << endl << endl;
	}
}