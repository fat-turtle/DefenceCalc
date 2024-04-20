// MyFirstCPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void defCalc(int* defence) {
	*defence -= *defence*70/100;
}

int main() {
	int weaponDamage;
	bool answer = false;
	while (answer == false) {
		int weaponType;
		cout << "What weapon would you like to choose? We have the Greatsword, the Rivers Of Blood, and the Blasphemous Blade\n";
		cout << "type 1,2 or 3\n";
		cin >> weaponType;
		switch (weaponType)
		{
		case(1):
			weaponDamage = 130;
			answer = true;
			break;
		case(2):
			weaponDamage = 90;
			answer = true;
			break;
		case(3):
			weaponDamage = 100;
			answer = true;
			break;
		default:
			cout << "you didnt type 1,2 or 3";
			break;
		}
	}
	int* pWeaponDamage = &weaponDamage;
	defCalc(pWeaponDamage);
	cout << weaponDamage << " damage was dealt";


	return 0;
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