#include <iostream>
using namespace std;


int main()
{
	float x, y, z;
	cout << "Unesite 3 broja: ";
	cin >> x >> y >> z;



	
	if (x >= y && x >= z)
	{
		cout << "Najveci broj je: " << x << ". ";
	}
	else if (y >= z)
	{
		cout << "Najveci broj je: " << y << ". ";
	}
	else
	{
		cout << "Najveci broj je: " << z << ". ";
	}
	

	
	if (x <= y && x <= z)
	{
		cout << "Najmanji broj je " << x << ". ";
	}

	else if (y <= z)
	{
		cout << "Najmanji broj je " << y << ". ";
	}
	else
	{
		cout << "Najmanji broj je " << z << ". ";
	}
	

	return 0;
}