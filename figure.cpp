#include <iostream>
using namespace std;

int main()
{
	int menu, base,lenght, width, side;
	char back;

	do {
	cout << "\nDraw 2D Figure\n";
	cout << "1. Square\n";
	cout << "2. Rectangle\n";
	cout << "3. Right Angle Triangle\n";
	cout << "Input Menu : "; cin >> menu;


	if (menu == 1){
		cout << "\nSQUARE\n";
		cout << "Input Side = "; cin >> side;
		for (int p = 1; p <= side; p++){
			for (int j =  1; j <= side; j++){
				cout << " *";}
			cout << endl;}

	}else if (menu == 2){
		//rectangle
		cout << "\nRECTANGLE\n";
		cout << "Input Lenght = "; cin >> lenght;
		cout << "Input Widht = "; cin >> width;
		for (int p = 1; p <= width; p++){
			for (int j =  1; j <= lenght; j++){
				cout << " *";}
			cout << endl;}

	}else if (menu == 3){
		//right angle triangle
		cout << "\nRIGHT ANGLE TRIANGLE\n";
		cout << "Input Base Side = "; cin >> base;
		for (int p = 1; p <= base ; p++){
			for (int j = 1; j <= p; j++){
				cout << " *" ;}
			cout << endl;}

	}else {
		cout << "Wrong input" << endl;}

		//
		cout << "Back To menu? (Y?N) : "; cin >> back;
	}while (back == 'Y');

	cout << "end of program";
	cin.get();
	return 0;
}
