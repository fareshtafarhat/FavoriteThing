#include "nailpolish.h"

nailpolish::nailpolish()
{
	nailpolishbrand = "";
	nailpolishcolor = "";
	nailpolishtype = "";
	numbernailpolish = 0;
	nailpolishprice = 0;
}

string nailpolish::nailpolishbrand()
{
	return nailpolishbrand;
}

string nailpolish::getnailpolishcolor()
{
	return nailpolishcolor;
}

int nailpolish::nailpolish

cin.clear();
cin.ignore();
cout << "What nail polish do you like?";
getline(cin, nailpolishbrand);

cout << "What is the color ";
getline(cin, nailpolishcolor);

cout << "What is the nail polish type? ";
getline(cin, nailpolishtype);

cout << "How many nail polishes are in the package?";
cin >> numbernailpolish;

cout << "What is the total price of the nail polish(es)? ";
cin >> nailpolishprice;
return 0;

ostream & operator<<(ostream &os, const nailpolish&nailpolish)
{
	os << "Best Nail Polish !!" << endl;
	os << "Nail Polish Brand: " << nailpolish.nailpolishbrand << endl;
	os << "Nail Polish Color: " << nailpolish.nailpolishcolor << endl;
	os << "Nail Polish Type: " << nailpolish.nailpolishtype << endl;
	os << "Number of Nail Polishes: " << nailpolish.numbernailpolish << endl;
	os << "Nail Polish Price: " << nailpolish.nailpolishprice << endl;
	os << "------------------------------------------------------------" << endl;
	return os;

}