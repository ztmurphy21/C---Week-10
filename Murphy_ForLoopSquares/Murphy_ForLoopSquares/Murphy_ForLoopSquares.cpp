// This program displays a list of numbers and
// their squares.
//Programmer: Zach Murphy on 3-22-2017
//CPT-180: C++ Programming
#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

//variable declaration GLOBAL
//made global so they can be used within method
int clearScreen;//counter for clearing screen and eop
int minNumber, // Starting number to square
maxNumber; // Maximum number to square
int num = minNumber; // Counter



//clears screen based off pressing anykey
//will also end program at the end
void  check()
{
	//if set is completed
	if (num >= maxNumber) {
		cout << "All numbers have been calculated.\n";
		cout << "Press any key to exit...\n";
		_getch();
	}
	//if set is not competed keep going
	else {
		char chk; int j;
		cout << "\n\nPress any key to see the another set of twnety...\n";
		chk = _getch();
		j = chk;
		system("CLS");
		cout << "Time for another set of up to twenty...\n\n";
		clearScreen = 0;

		for (int i = 1; i <= 256; i++)
			if (i == j) break;
	}
}

int main()
{
	//output instructions to user
	cout << "***************************************************************************\n";
	cout << "I square numbers based off a certain range of your choice.\n";
	cout << "However I only output numebers from 1 to 100.\n";
	cout << "I will only show twenty numbers at a time.\n";
	cout << "You will be asked to press any key to continue once you reach twenty.\n";
	cout << "Once you press any key another list of twnety will output.\n";
	cout << "***************************************************************************\n";
	cout << endl;

	//get input
	cout << "Please enter the starting number for the squares: ";
	cin >> minNumber;
	cout << "How many lines of squared numbers would you like? ";
	cin >> maxNumber;
	cout << endl;

	//validate user input
	while (minNumber < 1 || maxNumber > 100) {
		cout << "ERROR: Range must be between 1 and 100.\n";
		cout << "Please enter the starting number for the squares: ";
		cin >> minNumber;
		cout << "How many lines of squared numbers would you like? ";
		cin >> maxNumber;
		cout << endl;

	}

	num = minNumber;
	//squaring values
		do {
			if (num <= maxNumber) {
				cout << num << "\t\t" << (num * num) << endl;
				num++; //Increment the counter.
			}
			clearScreen++;
			if (clearScreen >= 20) {
				check();//call method to clear screen and/or end program 
			}
		} while (clearScreen <= 20);
	
	return 0;
}