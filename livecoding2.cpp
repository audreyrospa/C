#include <iostream>
using namespace std;

int main(){
	
	int result, iteration, even = 0, odd = 0, i=1;

	cout << "input Iteration = ";
	cin >> iteration;
    cout << "\n";

	do {
		result = 1 * i;
		if (i%2 == 0){
			cout << "two squared even " << "(" << i << ")" << " : " << result;
			even += result;
		} else {
			cout << "two squared odd " << "(" << i << ")" << " : " << result;
			odd += result;
		}
		i++;
		cout << endl;

	}while (i <= iteration);


	cout << "\n";
	cout << "sum the result two squared even\t: " << even << endl;
	cout << "sum the result two squared one\t: " << odd << endl;
	cout << "\n";

	return 0;
}
