#include <iostream>
using namespace std;

int main()
{
	double idr,usd,jpy;
	double rupiah$,rupiahj,dolarr,dolarj,yenr,yen$;
	int currency;

	cout << "======== MONEY CHANGER ========\n";
	cout << "\n";
	cout << "type 1 for indonesian currency\n";
	cout << "type 2 for United State currency\n";
	cout << "type 3 for Japanese currency\n";
	cout << "\n";
	cout << "input Currency = ";
	cin >> currency;

	rupiah$ = idr*0.0000672254;
	rupiahj = idr*0.007151;
	dolarr = usd*14.663;
	dolarj = usd*0.009538;
	yenr = jpy*139.86;
	yen$ = jpy*104.84;

	if (currency == 1){
		cout << "enter money : Rp.";
		cin >> idr;
		cout << "USD =$"<<rupiah$<<endl;
		cout << "JPY ="<<rupiahj<<endl;
	}
	else if (currency == 2){
		cout << "enter money : ";
		cin >> idr;
		cout << "IDR =Rp."<<dolarr<<endl;
		cout << "JPY ="<<dolarj<<endl;
	}
	else if (currency == 3){
		cout << "enter money : ";
		cin >> idr;
		cout << "IDR =Rp."<<yenr<<endl;
		cout << "USD =$"<<yen$<<endl;
	}
	return 0;
}
