#include <iostream>
#include <string>
using namespace std;

string one= "1. Display BUilding", two= "2. Display Rooms", three= "3. Display Facilities", four= "4. Input Transaction", five= "5. Discharge Room";
void admin(){
	cout << "ADMINISTRATION MENU\n";
	cout << one << endl;
	cout << two << endl;
	cout << three << endl;
	cout << four << endl;
	cout << five << endl;
}

int main(){
	int selection;
	admin();
	cout << "Selection : ";
	cin >> selection;
	if(selection == '2') {
		cout << "---------------------------------------------------\n";
		cout << two.substr(3,13) << endl;
		system("cls");
	}

	return 0;
}
