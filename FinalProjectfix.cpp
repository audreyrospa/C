#include <iostream> 
#include <iomanip>
using namespace std;

char parloop, loop;
int a, i, x, y = 0, z = 1, menup, menu1, paid, change, choice;
string name[9], birthdate[9], address[9], phone[9];
int price = 50000;	
string user, pass;
string id[] = {"010","020","030","040","050"};
string competition[] = {"Writing  ","Sing     ", "Dance    ", "Monologue", "Poster   "};
string date[] = {"Tuesday  , May 11th 2021","Monday   , May 10th 2021","Monday   , May 10th 2021"
				,"Wednesday, May 12th 2021","Tuesday  , May 11th 2021"};
void header(), personal(), list(), participant(), table(), complete();

int main (){
	system("cls");
	header();	
	cout << "             Welcome To Our Websites              " << endl;
	cout << "       Art is full of mystery and miracle         " << endl;
	cout << "--------------------------------------------------" << endl;
	cout << " 1. Competition Table List\n 2. Registration Form\n 3. Registered Participant\n 4. Exit program\n " << endl;
	cout << " Input Number : "; cin >> menu1;
	system("cls");
	header();
	
switch(menu1){
	case 1 : table();
			 system("pause");
			 break;
	case 2 : personal();
			 list();
			 participant();
			 break;
	case 3 : cout << "| No | Competition   | Name                       " << endl;
			 cout << "--------------------------------------------------" << endl;
			 for(int y=1;y < z;y++){
				cout << "|  " << y << " | " << competition[y] << "     | " 
				<< name[y] << endl; 
				}	 
			 system("pause");
			 break;		
	case 4 :exit(0);
	default:cout << " Please try again and input the available option " << endl;
		}
	main();		
	}
 
void header(){
	cout << "==================================================" << endl;
	cout << "             ArtFlaw Competition 2021             " << endl;
	cout << "           Special Region of Yogyakarta           " << endl;
	cout << "==================================================" << endl;
	}
	
void personal(){
		z++;
		y++;
		cout << " Input your identity " << endl;
		cout << " Name         : "; cin.ignore(); getline(cin,name[y]);
		cout << " Birthdate    : "; getline(cin,birthdate[y]);
		cout << " Address      : "; getline(cin,address[y]);
		cout << " Phone Number : "; cin >> phone[y];
		cout << "--------------------------------------------------" << endl;
		system("pause");
	}	
void table(){
	system("cls");
	cout << "==================================================" << endl;
	cout << "|           Competition Table List               |" << endl;
	cout << "==================================================" << endl;
	cout << "| No | Competition   | Date                      |" << endl;
	cout << "--------------------------------------------------" << endl;
	for(int i=0 ; i < 5;i++){
		cout << "|  " << i+1 << " | " << competition[i] << "     | " 
			 << date[i] << "  |" << endl;
		}
	cout << "--------------------------------------------------" << endl;	
	}

void list(){
	system("cls");
	header();
	cout << "                Competition List                  " << endl; 
	cout << "--------------------------------------------------" << endl;
	cout << " You can only register 1 competition each person " << endl;
	cout << " Registration Fee : Rp. 50.000,00 " << endl; 
	cout << endl;
	cout << " 1. Writing\n 2. Sing\n 3. Dance\n 4. Monologue\n 5. Poster\n " << endl;
	cout << "--------------------------------------------------" << endl;
	cout << " Input Number : "; cin >> menup;
	}
	
void participant(){	
	system("cls");
	header();  
	for(int a=0; a <= menup;a++){
		if(a+1 == menup){
		cout << " Id Registraton : " << id[a] << endl;
	
		competition[y] = competition[a];
		cout << " Competition    : " << competition[y] << endl;
		cout << " Name           : " << name[y] << endl;
		cout << " Birthdate      : " << birthdate[y] << endl;
		cout << " Address        : " << address[y] << endl;
		cout << " Phone Number   : " << phone[y] << endl;
		cout << "--------------------------------------------------" << endl;
		cout << " Price          : " << price << endl;
		break;}
		}
	do{
	cout << " Money Paid     : "; cin >> paid;
	cout << "--------------------------------------------------" << endl;
	if(paid >= price){
		change = paid - price;	
		cout << " Change         : " << change << endl;
		complete();
		}
	else{
		cout << "              Your paid is minus                  " << endl;	
		cout << "       Your money is not enough to pay            " << endl;
		cout << "               Please pay more                    " << endl;	
		cout << "--------------------------------------------------" << endl;	
		}
	}while (price > paid);	
	}

void complete(){
	cout << "--------------------------------------------------" << endl;
	cout << "      Your registration process is completed      " << endl;
	cout << "         Dont forget to come punctually           " << endl;
	cout << "==================================================" << endl;
	system("pause");
	}
	


