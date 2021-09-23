#include <iostream>
using namespace std;

int main()
{
	int color;
	char color2;

	cout << "---------------------------------------------------------------------------\n";
	cout << "                           NAMA : Audrey Rosa\n";
	cout << "                           NIM  : 123200172\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "Program to determine notation, color properties, and harmonies color blend\n";
	cout << "colors : \n";
	cout << "1. Orange         2. Red-Orange   3. Red\n";
	cout << "4. Red-Violet     5. Violet       6. Blue-Violet\n";
	cout << "7. Blue           8. Blue-Green   9. Green\n";
	cout << "10. yellow-green  11. Yellow      12. Yellow-Orange\n";
	cout << "\n";
	cout << "Select Color Option : "; cin >> color;
	cout << "\n";

	switch (color){
		case 1:
		cout << "color notation   : secondary\n";
		cout << "color properties : warm\n";
		break;

		case 2:
		cout << "color notation   : tertiary\n";
		cout << "color properties : warm\n";
		break;

		case 3:
		cout << "color notation   : primer\n";
		cout << "color properties : warm\n";
		break;

		case 4:
		cout << "color notation   : tertiary\n";
		cout << "color properties : warm\n";
		break;

		case 5:
		cout << "color notation   : secondary\n";
		cout << "color properties : warm\n";
		break;

		case 6:
		cout << "color notation   : tertiary\n";
		cout << "color properties : warm\n";
		break;

		case 7:
		cout << "color notation   : primer\n";
		cout << "color properties : cool\n";
		break;

		case 8:
		cout << "color notation   : tertiary\n";
		cout << "color properties : cool\n";
		break;

		case 9:
		cout << "color notation   : secondary\n";
		cout << "color properties : cool\n";
		break;

		case 10:
		cout << "color notation   : tertiary\n";
		cout << "color properties : cool\n";
		break;

		case 11:
		cout << "color notation   : primer\n";
		cout << "color properties : cool\n";
		break;

		case 12:
		cout << "color notation   : tertiary\n";
		cout << "color properties : cool\n";
		break;

		default:
		cout << "number unidentified\n";}

		cout << "Harmonies Color Blend\n";
		cout << "a. Analogous Color Blend\n";
		cout << "b. Complementary Color Blend\n";
		cout << "c. Split Complementary Color Blend\n";
		cout << "d. Triadic Complementary Color Blend\n";
		cout << "e. Tetrad Complementary Color Blend\n";
		cout << "input option : "; cin >> color2;
		cout << "\n";

		if (color == 1){
			switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "2,3 or 11,12 or 12,2\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 7\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 8 and 6\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 9 and 5\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :9,4,7\n";
				break;}
			}
		else if (color == 2){
			switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "1,3 or 3,4 or 12,1\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 8\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 9 and 7\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 10 and 6\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :11,5,8\n";
				break;}
			}
		else if (color == 3){
		    switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "2,4 or 1,2 or 4,5\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 9\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 10 and 8\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 11 and 7\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :12,6,9\n";
				break;}
			}
		else if (color == 4){
		    switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "5,3 or 2,3 or 5,6\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 10\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 11 and 9\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 12 and 8\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :1,7,10\n";
				break;}
			}
		else if (color == 5){
		    switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "6,4 or 3,4 or 6,7\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 11\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 12 and 10\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 1 and 9\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :2,8,11\n";
				break;}
			}
		else if (color == 6){
		    switch(color2){
				case 'a':
				cout << "Analogous Color Blend With Color Numeber : \n";
				cout << "7,5 or 5,4 or 7,8\n";
				break;

				case 'b':
				cout << "Complementary Color Blend With Color Number : 12\n";
				break;

				case 'c':
				cout << "split Complementary Color Blend with color number : 1 and 11\n";
				break;

				case 'd':
				cout << "triadic complementary color blend with color number : 10 and 2\n";
				break;

				case 'e':
				cout << "tetrad complementary color blend with color number :3,9,12\n";
				break;}
			}
		else if (color == 7){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "8,9 atau 6,8 atau 5,6\n"; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 1\n";
				break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 12 and 2\n" ;
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 11 and 3\n";
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 10,1,4\n";
				break;}
		}
		else if (color == 8){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "9,10 atau 7,9 atau 6,7 \n" ; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 2\n"; 
				break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 1 and 3\n";
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 4 and 12\n";
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 2,5,11\n";
				break;}
		}
		else if (color == 9){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "10,11 atau 8,10 atau 7,8\n"; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 3\n";
				break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 2 and 4\n";
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 1 and 5\n";
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 3,6,12\n";
				 break;}
		}
		else if (color == 10){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "8,9 atau 9,11 atau 11,12\n"; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 4\n" ;
			    break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 3 and 5\n";
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 2 and 6\n";
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 1,4,7\n";
				break;}
		}
		else if (color == 11){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "9,10 atau 10,12 atau 1,12\n"; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 5\n";
				break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 4 and 6\n";
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 3 and 7\n"; 
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 2,5,8\n";
				break;}
		}
		else if (color == 12){
			switch (color2){
				case 'a' :
				cout << "Analogous Color Combination with Color Number : \n";
				cout << "1,2 atau 1,11 atau 10,11 \n"; 
				break;
				case 'b' :
				cout << "Complementary Color Combination with Color Number : 6\n";
				break;
				case 'c' :
				cout << "Split Complementary Color Combination with Color Number : 5 and 7\n";
				break;
				case 'd' :
				cout << "Triadic Complementary Color Combination with Color Number : 4 and 8\n";
				break;
				case 'e' :
				cout << "Tetrad Complementary Color Combination with Color Number : 3,6,9\n";
				break;}
		}		
		else {
			cout << "Wrong Input" << endl;
		}
	return 0;
}
