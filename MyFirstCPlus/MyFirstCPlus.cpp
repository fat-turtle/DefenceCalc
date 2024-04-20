// MyFirstCPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void defenceCalc(int* reducer){
	*reducer -= *reducer * 70 / 100; // reduces damage by 70%
}

int main() {
	int weaponDamage = 560;
	int *pWeaponDamage = &weaponDamage;
	defenceCalc(pWeaponDamage);
	cout << weaponDamage << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



// int * pX = &x
// integer pointer pX is set to the adress of x
// int y = *pX;
// integer y is set to the thing pointed to by pX

/*
int x = 4;	set x to 4
int *pX = &x;	make pX set to adress of x
int y = *pX;	set y equal to x


*/