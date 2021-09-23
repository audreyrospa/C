#include <iostream>
using namespace std;

int main()
{
	char A (2);
	int B;
	int total, Q = 6000;
	
	cout << "FREE QUOTA CALCULATOR" << endl;
	cout << "teacher = t\n";
	cout << "student = s\n";
	cout << "t or s = " ;
	cin >> A;

	//institutions picker:
	if (A == 't'){
		cout << "Which Institutions \n";
		cout << "a = from kindergarden to senior high school\n";
		cout << "b = University\n";
		cout << "insert a/b = ";
		cin >> A;

	}else if (A == 's'){
		cout << "Which Institutions \n";
		cout << "a = from kindergarden to senior high school\n";
		cout << "b = University\n";
		cout << "insert a/b = ";
		cin >> A;

		students:
		if (A =='a'){
		cout << "k = Kindergarden\n";
		cout << "e = Elementary School\n";
		cout << "j = Junior High School\n";
		cout << "s = Senior High School\n";
		cout << "insert institution : ";
		cin >> A;

			}else if (A=='k'){
			cout << "kindergarden Student\n";
			cout << "Quantity = ";
			cin >> B;
			total = 20 * (B * Q);
			cout << "Total = \n";
			cout << total << endl;

			}else if (A=='e'){
			cout << "Elementary School\n";
			cout << "Quantity = ";
			cin >> B;
			total = 35 * (B * Q);
			cout << "Total = \n";
			cout << total << endl;

			}else if (A=='j'){
			cout << "Junior High School\n";
			cout << "Quantity = ";
			cin >> B;
			total = 35 * (B * Q);
			cout << "Total = \n";
			cout << total << endl;

			}else if (A=='s'){
			cout << "Senior High School\n";
			cout << "Quantity = ";
			cin >> B;
			total = 35 * (B * Q);
			cout << "Total = \n";
			cout << total << endl;
}
	}else (A=='b');{
		cout << "University\n";
		cout << "Quantity = ";
		cin >> B;
		total = 50 * (B * Q);
		cout << "Total = \n";
		cout << total << endl;

		}		
else if (A =='a'){
		cout << "kindergarden to High School teachers\n";
		cout << "Quantity = ";
		cin >> B;
		total = 42 * (B*Q);
		cout << "Total = ";
		cout << total << endl;
	}	
return 0;}
