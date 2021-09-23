#include <iostream>
using namespace std;

int main()
{
	int pos1,pos2,d1,d2,odp1,odp2;

	cout << "COVID-19 REVIEW (SUBDISTRICT)\n";
	cout << "this program will check what your subdistrict color zone\n";
	cout << "\n";

	cout << "=======Week one=======\n";
	cout << "insert positive number = ";
	cin >> pos1;
	cout << "insert death number = ";
	cin >> d1;
	cout << "insert ODP number =";
	cin >> odp1;
	cout << "\n";

	cout << "=======Week Three=======\n";
	cout << "insert positive number = ";
	cin >> pos2;
	cout << "insert death number = ";
	cin >> d2;
	cout << "insert ODP number =";
	cin >> odp2;
	cout << "\n";

	if (pos1>0 and pos2>0 and d1>0 and d2>0 and odp1>=0 and odp2>=0){
		cout << "your subdistrict is in the 'BLACK ZONE'";}
	else if (pos1>0 and pos2>0 and d1<0 and d2<0 and odp1>=0 and odp2>=0){
		cout << "your subdistrict is in the 'RED ZONE'";}
	else if (pos1>=0 and pos2>=0 and d1<0 and d2<0 and odp1>=0 and odp2>=0){
		cout << "your subdistrict is in the 'ORANGE ZONE'";}
	else {
		cout << "your subdistrict is in the 'GREEN ZONE'";}


	return 0;
}
