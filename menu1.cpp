#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string uname, pass, name, menuname;
	int transcode, menu, menucode, serving, price, discrep, total2, paid, change;
	float disc;
	char loop1, loop2, check;

	do{
  	cout << "------------------------------------\n";
  	cout << "     Welcome to Family Catering     \n";
  	cout << "------------------------------------\n";
  	cout << "Username : "; cin >> uname;
  	cout << "Password : "; cin >> pass;

  	 if(uname == "admin" && pass == "admin"){
  	 	cout << "-----------------------\n";
  		cout << "Login Successfully     \n";
  		cout << "-----------------------\n";
  		system("pause");

    	do {
   		system("cls");
    	int sum = 0;
    	cout << "----------------------------------------\n";
    	cout << "          Catering Order Cashier        \n";
    	cout << "----------------------------------------\n";
    	cout << "Input Transaction Code  : "; cin >> transcode;
    	cout << "Input Customer Name     : "; cin.ignore(); getline(cin, name);
    	cout << "How many menu?          : "; cin >> menu;
    	cout << "check menu? (y/n)       : "; cin >> check;
    	cout << "----------------------------------------\n";

    	if(check == 'y' || check == 'Y'){
    		cout << "========================================================\n";
    		cout << "|    ID     |      MENU NAME          |    PRICE/Pcs   |\n";
    		cout << "========================================================\n";
    		cout << "|    001    | Regular Menu Set        |  Rp.65.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    002    | Premium Menu Set        |  Rp.100.000,00 |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    003    | Chicken Cutlet Set      |  Rp.45.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    004    | Beef Cutlet Set         |  Rp.60.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    005    | Happy Kids Meal         |  Rp.40.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    006    | Vegetarian Set          |  Rp.80.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    007    | Chocolicious Drink Set  |  Rp.15.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    008    | Fresh Fruit Drink Set   |  Rp.15.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    009    | Salad                   |  Rp.20.000,00  |\n";
    		cout << "--------------------------------------------------------\n";
    		cout << "|    010    | Mini Dessert Set        |  Rp.25.000,00  |\n";
    		cout << "========================================================\n";}
    		system ("pause");

    		
    		int total1;
    		for(int x = 1 ; x <= menu; x++){
     		cout << "\nItem- " << x << endl;
     		cout << "Menu Code                    : "; cin >> menucode;
     		cout << "Menu Name                    : "; cin.ignore(); getline(cin, menuname);
     		cout << "How many servings? : "; cin >> serving;
     		cout << "Price per serving  : "; cin >> price;
     		total1 = serving * price;
     		cout << "Total Menu Price   : " << total1 << endl;
     		sum = sum + total1;
     		cout << "------------------------------------\n";}
     		system ("pause");

     		cout << "====================================\n";
    		cout << "Total Payment                : " << sum << endl;
    		discrep = sum/500000;
    		cout << "Discount Repetition          : " << discrep << endl;
    		disc = 0.02 * discrep * sum;
    		cout << "Discount 2% (/500k)          : " << disc << endl;
    		total2 = sum - disc;
    		cout << "Total payment after discount : " << total2 << endl;


    		do{
    			cout << "------------------------------------\n";
   				cout << "Money Paid   : "; cin >> paid;
   				if(paid >= total2){
    			change = paid - total2;
   				cout << "Change       : " << change << endl;}
   				else{
   				cout << "Your Paid is minus\n";}
   				system ("pause");
    		}while(paid < total2);

    		cout << "\nInput new order (y/n)? "; cin >> loop2;
   		}while(loop2 == 'Y' || loop2 == 'y');
	 } 
	
	 else {
	 cout << "-----------------------------------------\n";
   	 cout << "Login Failed!\n";
   	 cout << "Please input correct username & password \n";
   	 cout << "-----------------------------------------\n";}

 	 cout << "Back to home  (y/n)? "; cin >> loop1;
 	 system("cls");

 	}while(loop1 == 'Y' || loop1 == 'y');
	return 0;
}
