#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char loop, loop1, loop2;
	int menu, one, two, side, base, height, d1, d2, lenght, width;
	float result, radius;
	
do{
	cout << "---------------------------------------------------------------------------\n";
	cout << "                           NAMA : Audrey Rosa\n";
	cout << "                           NIM  : 123200172\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "Program to Calculate The Area of Flat Figure or Volume of Space Figure\n";
	cout << "Two-Dimetional [1] / Three-Dimentional [2] : "; cin >> menu;
	cout << "\n";

	if (menu == 1){
		do{
		cout << "Calculate The Area of Flat Figure : \n";
		cout << "1. Square\n";
		cout << "2. Triangle\n";
		cout << "3. Circle\n";
		cout << "4. Kite\n";
		cout << "option : "; cin >> one;
		cout << endl;

		switch (one){
			case 1:
				cout << "Calculate The Area of SQUARE\n";
				cout << "input value of side lenght : "; cin >> side;
				result = side*side;
				cout << "Area of The Square : " << result << endl;
			break;

			case 2:
				cout << "Calculate The Area of TRIANGLE\n";
				cout << "input value of base lenght : "; cin >> base;
				cout << "input value of height : "; cin >> height;
				result = (1/2)*base*height;
				cout << "Area of The Triangle : " << result << endl;
			break;

			case 3:
				cout << "Calculate The Area of CIRCLE\n";
				cout << "input value of radius : "; cin >> radius;
				result = (3.14)*radius*radius;
				cout << "Area of Circle : " << result << endl;
			break;

			case 4:
				cout << "Calculate The Area of KITE\n";
				cout << "input value of diagonal 1 : "; cin >> d1;
				cout << "input value of diagonal 2 : "; cin >> d2;
				result = (1/2)*d1*d2;
				cout << "Area of Kite : " << result << endl;
			break;

			default :
				cout << "\n";
				cout << "oopsie! let's try again";}

		cout << "want to calculate another flat figure? (y/n) : "; cin >> loop1;
		cout << "\n";
		}while (loop1 == 'y' || loop1 == 'Y');
	}

	else if (menu == 2){
		do{
		cout << "Calculate The Volume of Space Figure : \n";
		cout << "1. Block\n";
		cout << "2. Cone\n";
		cout << "3. Five squares\n";
		cout << "option : "; cin >> two;

		switch (two){
			case 1:
				cout << "Calculate The Volume of a BLOCK\n";
				cout << "input value of lenght : "; cin >> lenght;
				cout << "input value of width : "; cin >> width;
				cout << "input value of height : "; cin >> height;
				result = lenght*width*height;
				cout << "Volume of The Block : " << result << endl;
			break;

			case 2:
				cout << "Calculate The Volume of a CONE\n";
				cout << "input value of radius : "; cin >> radius;
				cout << "input value of height : "; cin >> height;
				result = (1/3)*(3.14)*radius*radius*height;
				cout << "Area of The cone : " << result << endl;
			break;

			case 3:
				cout << "Calculate The Volume of a FIVE SQUARES\n";
				cout << "input value of lenght : "; cin >> lenght;
				cout << "input value of width : "; cin >> width;
				cout << "input value of height : "; cin >> height;
				result = (1/3)*lenght*width*height;
				cout << "Volume of The Five Squares: " << result << endl;
			break;

			default :
				cout << "\n";
				cout << "oopsie! let's try again";}

		cout << "want to calculate another space figure? (y/n) : "; cin >> loop2;
		}while (loop2 == 'y'|| loop2 == 'Y');
	}

cout << "back to menu? (y/n) : "; cin >> loop;
system("cls");
}while(loop == 'Y' || loop == 'y');
		
	return 0;
}
