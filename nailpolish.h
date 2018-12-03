#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MostE = 5;

class nailpolish
{
private:
	string nailpolishbrand;
	string nailpolishcolor;
	string nailpolishtype;
	double nailpolishprice;
	int numbernailpolish;

public:
	nailpolish();
	int getnailpolishrecomm();
	string getpolishbrand();
	string getnailpolisgcolor();

	friend ostream & operator << (ostream &os, const nailpolish&nailpolish);


};

