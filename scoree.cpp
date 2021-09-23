#include <iostream>
using namespace std;

int main()
{	
	int ulang, x;
	float average, sum = 0.0;
	cout << "Score Comparison Program\n";
	cout << "How many score that will be compared? : ";
	cin >> ulang;

	char name[ulang][30];
	int nim[ulang], score[ulang];

	for(int x = 0; x < ulang; x++){
		int data = x+1;
		cout << "\nInput Data-" << data << endl;
		cin.ignore();
		cout << "Name       : "; cin.getline(name[x], 30);
		cout << "Student No : "; cin >> nim[x];
		cout << "Score      : "; cin >> score[x];
		sum += score[x];
	} x = 1;

	int max, min;
	int max_array = 0, min_array = 0;
	max = score[0];
	min = score[0];

	for(int x = 0; x < ulang; x++){
		if(score[x] > max){
			max = score[x];
			max_array = x;
		} else if(score[x] < min){
			min = score[x];
			min_array = x;
		}
	}
	cout << "\nHighest Score :\n";
	cout << "Name          : " << name[max_array] << endl;
	cout << "Student No    : " << nim[max_array] << endl;
	cout << "Score         : " << max << endl;

	cout << "\nLowest Score  :\n";
	cout << "Name          : " << name[min_array] << endl;
	cout << "Student No    : " << nim[min_array] << endl;
	cout << "Score         : " << min << endl;

	average = sum/ulang;
	cout << "\nAverage Score : " << average << endl;

	return 0;
}