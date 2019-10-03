// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


//initialize

//limits
int alimit = 5;
int blimit = 3;
//initial values
int a = 0;//live
int b = 0;//live

bool cheacks(int x)
{
	if (x == 4) return true;
	else return false;
}
void disp()
{
	cout << "a=" << a <<" b=" << b << endl;
}
void emptyA()
{
	a = 0;
	cout << "Jug A is empty now: ";
	disp();
}
void emptyB()
{
	b = 0;
	cout << "Jug B is empty now: ";
	disp();
}
void transferAB()
{
	cout << "Transfering A to B : ";
	int spaceB = blimit - b;
	if (spaceB > 0)
	{		
		if (a >= blimit)
		{
			a = a - spaceB;
			b = 3;
		}
		else //if (a < blimit)
		{
			b = b + a;
			a = 0;
		}
	}
	disp();
}
void transferBA()
{
	cout << "Transfering B to A : ";
	int spaceA = alimit - a;
	if (spaceA > 0)
	{		
		if (b >= spaceA)
		{
			b = b - spaceA;
			a = 5;
		}
		else
		{
			a = a + b;
			b = 0;
		}
	}
	disp();
}
void fillA()
{
	a = alimit;
	cout << "Jug A is full now: ";
	disp();
}
void fillB()
{
	b = blimit;
	cout << "Jug B is full now: ";
	disp();
}

int main()
{
	cout << "Initial Value in jug A and B: "; disp();
	bool play = true;
	
	while (play == true)
	{
	cout << "1.Empty jug A" << endl << "2.Empty jug B" << endl
			<< "3.Transfer A to B" << endl << "4.Transfer B to A" << endl <<"5.Fill A" <<endl<<"6.Fill B"<<endl;

	int choice;
	cin >> choice;

	if (choice == 1) emptyA();
	else if (choice == 2) emptyB();
	else if (choice == 3) transferAB();
	else if (choice == 4) transferBA();
	else if (choice == 5) fillA();
	else if (choice == 6) fillB();
	else cout << "invalid choice" << endl;
	
	/*int wanaplay;
	cout << "press 1 to play again and 0 to exit";
	cin >> wanaplay;
	if (wanaplay == 1) play = true;
	else play = false;
	*/
	}
		
	
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
