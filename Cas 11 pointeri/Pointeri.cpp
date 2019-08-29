#include <iostream>
#include <string>
#include "Pointer.h"
using namespace std;

// String nisam radio zato sto mislim da on ima vise pointera jer je niz char-ova.
// A kad sam radio za char u cout-u mi se pojavio cudan ispis koji ne moze da bude memorijska adresa.

void Kopija(int a)
{
	a = 333;
}

void Adresa(float* pokazivac)
{
	*pokazivac = 50.12345;
}

int main()
{

	int x = 3;
	float y = 1.5;
	double z = 1.22222222;

	int* xPointer;
	float* yPointer;
	double* zPointer;

	xPointer = &x;
	yPointer = &y;
	zPointer = &z;
	
	cout << "Vrednost pointera xPointer je: " << xPointer << endl;
	cout << "Adresa promenljive x je: " << &x << endl;
	cout << "Adresa pointera xPointer je: " << &xPointer << endl;
	cout << "Vrednost promenljive x je: " << x << endl << endl;
	
	cout << "Vrednost pointera yPointer je: " << yPointer << endl;
	cout << "Adresa promenljive y je: " << &y << endl;
	cout << "Adresa pointera yPointer je: " << &yPointer << endl;
	cout << "Vrednost promenljive y je: " << y << endl << endl;

	cout << "Vrednost pointera zPointer je: " << zPointer << endl;
	cout << "Adresa promenljive z je: " << &z<< endl;
	cout << "Adresa pointera zPointer je: " << &zPointer << endl;
	cout << "Vrednost promenljive z je: " << z << endl << endl;

	// prevezivanje xPointera

	int w;
	xPointer = &w;
	cout << "Nova vrednost xPointera je: " << xPointer << endl << endl;

	// prosledjivanje po vrednosti i po pokazivacu

	cout << "Trenutna vrednost promenljive x je: " << x << endl;
	cout << "Trenutna vrednost promenljive y je: " << y << endl << endl;

	Kopija(x);
	Adresa(&y);

	cout << "Promenljiva x je sada: " << x << endl;   // po izlasku iz scope-a ove funkcije kopija je nestala a x je ostao isti
	cout << "Promenljiva y je sada: " << y << endl;   // y se promenio jer se menjao na svojoj adresi uz pomoc pointera

	return 0;
}