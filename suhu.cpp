#include <iostream>
using namespace std;

int main(){
	float c, f, r, k;
	
	cout << "insert temperature celcius: ";
	cin >> c;
	
	f = (1.8*c) + 32;
	k = 273 + c;
	r = 0.8*c;
	
	cout << "\nhasil:\n";
	cout << "Farenheit\t: " << f << " F" << endl;
	cout << "Kelvin\t\t: " << k << " K" << endl;
	cout << "Reamur\t\t: " << r << " R" << endl;
	
	cin.get();
	return 0;
	}
