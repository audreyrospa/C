#include <iostream>
using namespace std;

int main()
{
	float weight;

	cout << "BMI CALCULATOR\n";
	cout << "insert weight = ";
	cin >> weight;

	if (weight < 18.5){
		cout << "Underweight";
	}
	else if (weight >= 18.5 and weight <= 24.9){
		cout << "Normal Range";
	}
	else if (weight >= 25){
		cout << "Overweight";
	}
	else if (weight >= 25 and weight <=29.9){
		cout << "Pre-Obese";
	}
	else if (weight >= 30 and weight <=34.9){
		cout << "Obese I (one)";
	}
	else if (weight >= 35 and weight <= 39.9){
		cout << "Obese II (two)";
	}
	else if (weight >= 40);{
		cout << "Obese III (three)\n";
	}

	cout << "done";
	return 0;
}
