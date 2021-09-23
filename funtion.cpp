#include <iostream>
using namespace std;

float x,y;
char loop1;
void menu();
void input();
void age();
void immune();


int main()
{
	char choose;
	int choose2;

do{
	menu();
	cin >> choose;
	switch(choose){
			case '1':
			cout << "you are batch 1\n";
			immune();
			break;
			case '2':
			cout << "you are batch 2\n";
			immune();
			break;
			case '3':
			cout << "you are batch 3\n";
			immune();
			break;
			case '4':
			cout << "you are batch 4\n";
			immune();
			break;
			case '5':
			cout << "you are batch 5\n";
			immune();
			break;
			case '6':
			age();
			cout << "choose :"; cin >> choose2;
			if (choose2 >= 1){
				cout << "you are batch 6\n";
				immune();
			}
			else if (choose2 <= 2){
				cout << "you are batch 7\n";
				immune();
			}
			break;}
}while(loop1='y');
	


	return 0;
}

void menu(){
	cout << "VACCINE GENERATOR\n";
	cout << "welcome to your vaccine generator\nwe will provide information regarding to which batch you will get vaccinated\nplease follow our instructions\n";
	cout << "\n";
	cout << "1. nursing home workers\n2.health care workers\n3.social care workers\n4.suffer from a desease\n5.have relation to 1,2,3,4\n6.none above listed\nchoose : ";
}

void loop(){
	cout << "\nreturn to menu (y/n):"; cin >> loop1;
}

void age(){
	cout << "how old are you\n";
	cout << "1.above 50\n2.above 16\n";
}

void input(){
	cout << "body temperature :"; cin >> x;
	cout << "weight           :"; cin >> y;
}

float imm(float x, float y){
	float a;
	a = x+y;
	return a;
}

void immune(){
	input();
	cout << "your immune : " << imm(x,y);
	loop();
}










