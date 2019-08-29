#pragma once
#include <iostream>
using namespace std;

float Max(float x, float y, float z)
{
	if (x >= y && x >= z)
	{
		cout << "Najveci broj je: " << x << ". ";
	}
	else if (y >= x && y >= z)
	{
		cout << "Najveci broj je: " << y << ". ";
	}
	else
	{
		cout << "Najveci broj je: " << z << ". ";
	}
}

float Min(float x, float y, float z)
{
	if (x <= y && x <= z)
	{
		cout << "Najmanji broj je " << x << ". ";
	}

	else if (y <= x && y <= z)
	{
		cout << "Najmanji broj je " << y << ". ";
	}
	else
	{
		cout << "Najmanji broj je " << z << ". ";
	}
}
