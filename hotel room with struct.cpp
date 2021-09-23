#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Room {
    char number[4];
    char name[50];
    // price idr per hour
    int price;
    int capacity;
    int available;
};

struct Facility{
    char id[4];
    char name[50];
    // price idr per set
    int price;
};

struct Transaction{
    char id[3];
    char name[100];
    char schedule[50];
    Room room;
    Facility facilities[10];
    int totalPayment;
    int discountRepetition;
    int totalDiscount;
    int totalPaymentAfterDiscount;
};

// global variable  to store rooms data
Room rooms[] = {
        {"101", "Puntadewa", 2500000, 40, 1 },
        {"102", "Srikandi", 3000000, 30, 1 },
        {"103", "Nakula", 7500000, 75, 1 },
        {"201", "Ir. Sukarno", 4500000, 40, 1 },
        {"202", "Laksamana Maeda", 1000000, 20, 1 },
        {"203", "Moch. Hatta", 2500000, 15, 1 },
        {"301", "Prof. Habibie", 1500000, 15, 1 },
        {"302", "R. A. Kartini", 2500000, 30, 1 },
        {"303", "Ki Hadjar Dewantara", 3500000, 20, 1 },
        {"401", "Nelson Mandela", 12500000, 100, 1 },
        {"402", "Bill Clinton", 20000000, 100, 1 },
        {"403", "Immanuel Kant", 25000000, 40, 1 },
        {"501", "Leonardo Da Vinci", 6000000, 30, 1 },
        {"502", "Ludwig Bethouven", 3000000, 25, 1 },
        {"503", "Freed Astaire", 4500000, 35, 1 },
};

// global variable to store facility data
Facility facilities[] = {
        {"1", "Food & Beverage", 2500000},
        {"2", "MC", 3000000},
        {"3", "Band", 15000000},
        {"4", "Operator", 2500000},
        {"5", "Decoration", 10000000},
        {"6", "Security", 20000000},
        {"7", "Documentation", 2500000},
        {"8", "Staff Personel", 2000000},
        {"9", "Souvenir", 25000000},
        {"10", "Full Services", 75000000},

};

// global variable to store transactions data
Transaction transactions[1000];
int transactionCount =0;



void headerText(){
    cout << "=================================================="<<endl;
    cout << "             GRAHA PRAMUDYA BANDUNG               "<<endl;
    cout << "     4 Asia Afrika Street, Bandung, West Java     "<<endl;
    cout << "=================================================="<<endl;
}

void printWelcomePage(){
    system("CLS");
    headerText();
    cout << "                     WELCOME                      "<<endl;
    cout << "  Trusted Partner to Held Your Important Meeting  "<<endl;
    cout << "=================================================="<<endl;
    cout << "Press any key to continue . . . "; getch();
    // membersihkan layar console
    system("CLS");
}

void menuText(){
    headerText();
    cout << "ADMINISTRATION MENU"<<endl;
    cout << "1. Display Building"<<endl;
    cout << "2. Display Rooms"<<endl;
    cout << "3. Display Facilities"<<endl;
    cout << "4. Input Transaction"<<endl;
    cout << "5. Discharge Room"<<endl;
    cout << "6. Close Program"<<endl;
    cout << "Selection : ";
}

void menu1(){
    system("CLS");
    headerText();
    cout<< "Menu 1 : Display Building Status"<<endl;
    cout<< "--------------------------------------------------"<<endl;
    cout<< "Keterangan : "<<endl;
    cout<< "O : Available"<<endl;
    cout<< "X : Booked"<<endl<<endl;


    cout << "       - 1 -  - 2 -  - 3 -";

    for(int i=0; i< (sizeof(rooms)/sizeof(Room)); i++){
        if(i%3 == 0){
            cout <<"\n| "<<((i/3)+1)<<" | ";
        }

        if(rooms[i].available == 1){
            cout << "   O   ";
        }else{
            cout << "   X   ";
        }
    }

    char input[10];
    cout << "\nDisplay Building Based on the transaction data? (y/n) : ";
    cin >> input;

    if(strcmp(input, "y") == 0 || strcmp(input, "Y") == 0){
        system("CLS");
        headerText();
        cout<< "Menu 1 : Display Building Status"<<endl;
        cout << "Based on ID Transaction"<<endl;
        cout<< "--------------------------------------------------"<<endl;
        cout<< "Keterangan : "<<endl;
        cout<< "- : There is no Transaction"<<endl;


        cout << "       - 1 -  - 2 -  - 3 -";

        for(int i=0; i< (sizeof(rooms)/sizeof(Room)); i++){
            if(i%3 == 0){
                cout <<"\n| "<<((i/3)+1)<<" | ";
            }

            if(rooms[i].available == 1){
                cout << "   -   ";
            }else{
                for(int j=0; j < transactionCount; j++){
                    if(strcmp(transactions[j].room.number, rooms[i].number) == 0){
                        cout << "   "<<transactions[j].id<<"   ";
                    }
                }

            }
        }
    }

    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");



}

void menu2() {
    system("CLS");
    headerText();
    cout << "Menu 2 : Display Rooms Data" << endl;
    cout << "--------------------------------------------------" << endl;

    for(int i=0; i< (sizeof(rooms)/sizeof(Room)); i++){

        if(i%3 == 0){
            cout <<"Floor-"<<((i/3)+1)<<endl;
        }

        cout << "Room Number\t\t: "<<rooms[i].number<<endl;
        cout << "Name\t\t\t: "<<rooms[i].name<<endl;
        cout << "Price\t\t\t: "<<rooms[i].price<<" IDR (Rp) / hours"<<endl;
        cout << "Capacity\t\t: "<<rooms[i].capacity<<endl<<endl;

        if(i%3 == 2){
            cout << "--------------------------------------------------" << endl;
        }

    }

    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");

}

void menu3() {
    system("CLS");
    headerText();
    cout << "Menu 3 : Display Facilities Data" << endl;
    cout << "--------------------------------------------------" << endl;

    for(int i=0; i< (sizeof(facilities)/sizeof(Facility)); i++){
        cout << "Facilities ID\t\t: "<<(i+1)<<endl;
        cout << "Name\t\t\t: "<<facilities[i].name<<endl;
        cout << "Price\t\t\t: "<<facilities[i].price<<" IDR (Rp) / set"<<endl<<endl;
        cout << "--------------------------------------------------" << endl;
    }

    cout << "=================================================="<<endl;
    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");

}

int countDigit(int n){
    int count = 0;

    while(n !=0){
        n = n /10;
        ++count;
    }
    return count;
}

void menu4() {
    system("CLS");
    headerText();
    cout << "Menu 4 : Transaction" << endl;
    cout << "--------------------------------------------------" << endl<<endl;

    cout << "                                 ROOM                                 "<<endl;
    cout << "======================================================================"<<endl;
    cout << "No.\tName\t\t\tPrice (IDR/hour)\tCapacity"<<endl;
    cout << "======================================================================"<<endl;

    for(int i=0; i < ( sizeof (rooms)/sizeof (Room)); i++)
    {
        char tabs[10];
        if(strlen(rooms[i].name) < 7){
            strcpy(tabs, "\t\t\t");
        }
        else if(strlen(rooms[i].name) < 16 ){
            strcpy(tabs, "\t\t");
        }else{
            strcpy(tabs, "\t");
        }

        char tabs2[10];

        if(countDigit(rooms[i].price) > 7){
            strcpy(tabs2, "\t\t");
        }else{
            strcpy(tabs2, "\t\t\t");
        }

        cout << rooms[i].number <<"\t"<< rooms[i].name <<tabs<< rooms[i].price <<tabs2<< rooms[i].capacity <<endl;

        if(i%3 == 2){
            cout << "======================================================================"<<endl;
        }

    }

    cout << "                    FACILITIES                    "<<endl;
    cout << "--------------------------------------------------"<<endl;
    cout << "Id.\tName\t\t\tPrice (IDR/set)"<<endl;
    cout << "--------------------------------------------------"<<endl;

    for(int i=0; i < ( sizeof (facilities)/sizeof (Facility)); i++)
    {
        char tabs[10];
        if(strlen(facilities[i].name) < 7){
            strcpy(tabs, "\t\t\t");
        }
        else if(strlen(facilities[i].name) < 16 ){
            strcpy(tabs, "\t\t");
        }else{
            strcpy(tabs, "\t");
        }

        cout << facilities[i].id <<"\t"<< facilities[i].name <<tabs<< facilities[i].price <<endl;

        if(i%3 == 2){
            cout << "--------------------------------------------------"<<endl;
        }

    }




    getch();


}

int main() {
    printWelcomePage();

    char inputMenu[10];
    do{
        menuText();
        cin >> inputMenu;

        if(strcmp(inputMenu, "1") == 0){
            menu1();
        }
        else if(strcmp(inputMenu, "2") == 0){
            menu2();
        }
        else if(strcmp(inputMenu, "3") == 0){
            menu3();
        }
        else if(strcmp(inputMenu, "4") == 0){
            menu4();
        }
        else if(strcmp(inputMenu, "5") == 0){

        }
        else if(strcmp(inputMenu, "6") == 0){
            cout << "You close the Program... Thank You :)";getch();
        }
        else{
            cout << "Input invalid, please do it right!";getch();
            system("CLS");
        }

    }while(strcmp(inputMenu, "6") != 0);


    return 0;
}
