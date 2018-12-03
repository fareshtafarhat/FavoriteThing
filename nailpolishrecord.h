#pragma once
#include "nailpolish.h"

class nailpolishrecord
{
private:
	nailpolish Record[100];
	int RecordSize;

public:
	nailpolishrecord();
	int morenailpolish();
	bool matchsecond(nailpolish brand);
	int getRecordSize();
	void displayrecord();
};


