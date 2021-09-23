#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// global variable, 2 dimension array of int to store rooms data
// index 0 for number, index 1 for name, index 2 for status, index 3 for transaction_id that book the room
string rooms[15][4] = {
        {"101", "Puntadewa", "available" },
        {"102", "Srikandi", "available" },
        {"103", "Nakula", "available" },
        {"201", "Ir. Sukarno", "available" },
        {"202", "Laksamana Maeda", "available" },
        {"203", "Moch. Hatta", "available" },
        {"301", "Prof. Habibie",  "available" },
        {"302", "R. A. Kartini",  "available" },
        {"303", "Ki Hadjar Dewantara",  "available" },
        {"401", "Nelson Mandela", "available" },
        {"402", "Bill Clinton",  "available" },
        {"403", "Immanuel Kant", "available" },
        {"501", "Leonardo Da Vinci", "available" },
        {"502", "Ludwig Bethouven",  "available" },
        {"503", "Freed Astaire",  "available" },
};

//global 2 dimensions array of int to store room price and capacity
// relation between this array with array of string room is the first dimensions
// for the second dimensionn. index 0 for price, index 1 for capacity
int roomsPrice[15][2] = {
        {2500000, 40},
        {3000000, 30 },
        {7500000, 75 },
        {4500000, 40 },
        {1000000, 20 },
        {2500000, 15 },
        {1500000, 15 },
        {2500000, 30 },
        {3500000, 20 },
        {12500000, 100 },
        {20000000, 100 },
        {25000000, 40 },
        {6000000, 30 },
        {3000000, 25 },
        {4500000, 35 },
};


// global variable to store facility data
// index 0 for facility number, index 1 for name and index 2 for
string facilities[10][2] = {
        {"1", "Food & Beverage"},
        {"2", "MC"},
        {"3", "Band"},
        {"4", "Operator"},
        {"5", "Decoration"},
        {"6", "Security"},
        {"7", "Documentation"},
        {"8", "Staff Personel"},
        {"9", "Souvenir"},
        {"10", "Full Services"},
};

// Global array of int to store facilities price
// relation between this array with array of string facilities is the first dimensions index, with first dimension array of string facilities[]
int facilitiesPrices[10] = {
        2500000,
        3000000,
        15000000,
        2500000,
        10000000,
        20000000,
        2500000,
        2000000,
        25000000,
        75000000
};

// global variable to know how many transaction that has been made since the program being execute
int transactionCount = 0;



// function to print headerText of program
void headerText(){
    cout << "=================================================="<<endl;
    cout << "             GRAHA PRAMUDYA BANDUNG               "<<endl;
    cout << "     4 Asia Afrika Street, Bandung, West Java     "<<endl;
    cout << "=================================================="<<endl;
}

// Function to print welcome page, the first program running
void printWelcomePage(){
    // function system('cls') to clear console screen
    system("CLS");
    headerText();
    cout << "                     WELCOME                      "<<endl;
    cout << "  Trusted Partner to Held Your Important Meeting  "<<endl;
    cout << "=================================================="<<endl;
    cout << "Press any key to continue . . . "; getch();
    // to clear console screen
    system("CLS");
}


// Menu text for print menu choices of the program
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

// function menu1 responsible to displaying Building availability
void menu1(){
    system("CLS");
    headerText();
    cout<< "Menu 1 : Display Building Status"<<endl;
    cout<< "--------------------------------------------------"<<endl;
    cout<< "Keterangan : "<<endl;
    cout<< "O : Available"<<endl;
    cout<< "X : Booked"<<endl<<endl;


    cout << "       - 1 -  - 2 -  - 3 -";

    for(int i=0; i< 15 ; i++){
        if(i%3 == 0){
            cout <<"\n| "<<((i/3)+1)<<" | ";
        }

        //check room available or not, use function compare() to compare two string
        if( rooms[i][2].compare("available") == 0 ){
            cout << "   O   ";
        }else{
            cout << "   X   ";
        }
    }

    char input[10];
    cout << "\nDisplay Building Based on the transaction data? (y/n) : ";
    cin >> input;

    // use strcmp() function to compare array of char(string) with string
    if(strcmp(input, "y") == 0 || strcmp(input, "Y") == 0){
        system("CLS");
        headerText();
        cout<< "Menu 1 : Display Building Status"<<endl;
        cout << "Based on ID Transaction"<<endl;
        cout<< "--------------------------------------------------"<<endl;
        cout<< "Keterangan : "<<endl;
        cout<< "- : There is no Transaction"<<endl<<endl;


        cout << "       - 1 -  - 2 -  - 3 -";

        for(int i=0; i< 15 ; i++){
            if(i%3 == 0){
                cout <<"\n| "<<((i/3)+1)<<" | ";
            }

            //cek room available, compare() function to compare two string
            if( rooms[i][2].compare("available") == 0 ){
                cout << "   -   ";
            }else{
                cout << "   "<<rooms[i][3]<<"   ";

            }
        }
    }

    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");



}


// Menu2 function is responsible for displaying all Rooms Data
void menu2() {
    system("CLS");
    headerText();
    cout << "Menu 2 : Display Rooms Data" << endl;
    cout << "--------------------------------------------------" << endl;

    for(int i=0; i< 15 ; i++){

        if(i%3 == 0){
            cout <<"Floor-"<<((i/3)+1)<<endl;
        }

        cout << "Room Number\t\t: "<<rooms[i][0]<<endl;
        cout << "Name\t\t\t: "<<rooms[i][1]<<endl;
        cout << "Price\t\t\t: "<<roomsPrice[i][0]<<" IDR (Rp) / hours"<<endl;
        cout << "Capacity\t\t: "<<roomsPrice[i][1]<<endl<<endl;

        if(i%3 == 2){
            cout << "--------------------------------------------------" << endl;
        }

    }

    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");

}


// Menu2 function is responsible for displaying all Facilities Data
void menu3() {
    system("CLS");
    headerText();
    cout << "Menu 3 : Display Facilities Data" << endl;
    cout << "--------------------------------------------------" << endl;

    for(int i=0; i< 10 ; i++){
        cout << "Facilities ID\t\t: "<< facilities[i][0] <<endl;
        cout << "Name\t\t\t: "<<facilities[i][1]<<endl;
        cout << "Price\t\t\t: "<<facilitiesPrices[i]<<" IDR (Rp) / set"<<endl<<endl;
        cout << "--------------------------------------------------" << endl;
    }

    cout << "=================================================="<<endl;
    cout << "\nBack to menu, press any key . . .";
    getch();
    system("CLS");

}


// Function to count digit from given number, this function only use is for helper to making pretty console table
int countDigit(int n){
    int count = 0;

    while(n !=0){
        n = n /10;
        ++count;
    }
    return count;
}


// function to get how many room available in the momment
int countRoomAvailable(){
    int count = 0;
    for(int i=0; i <15 ;i++)
    {
        if(rooms[i][2].compare("available") == 0){
            count++;
        }
    }

    return count;
}

// function to check if a given room number in parameter is valid or not
bool isRoomValid(string roomNumber){
    bool isValid = false;

    for(int i=0;i < 15; i++)
    {
        if(rooms[i][0].compare(roomNumber) == 0){
            isValid = true;
        }
    }
    return isValid;
}


// function to check if a given room number in parameter is available or already book
bool isRoomAvailable(string roomNumber){
    bool isAvailable = false;

    for(int i=0;i < 15; i++)
    {
        if(rooms[i][0].compare(roomNumber) == 0){
            if(rooms[i][2].compare("available") == 0){
                isAvailable = true;
            }
        }
    }
    return isAvailable;
}


// function to get room price  of room Number
int getRoomPrice(string roomNumber){
    int price = 0;

    for(int i=0;i < 15; i++)
    {
        if(rooms[i][0].compare(roomNumber) == 0){
            price = roomsPrice[i][0];
        }
    }
    return price;
}

// function to check if a given facility ID in parameter is valid or not
bool isFacilityIDValid(string facilityId){
    bool isValid = false;

    for(int i=0;i < 10; i++)
    {
        if(facilities[i][0].compare(facilityId) == 0){
            isValid = true;
        }
    }
    return isValid;
}

// function to get facility price  of facility ID
int getFacilityPrice(string facilityId){
    int price = 0;

    for(int i=0;i < 10; i++)
    {
        if(facilities[i][0].compare(facilityId) == 0){
            price = facilitiesPrices[i];
        }
    }
    return price;
}


// function to book a room and save the transaction Id in that room
void bookRoom(string roomNumber, string trxId){
    for(int i=0;i < 15; i++)
    {
        if(rooms[i][0].compare(roomNumber) == 0){
            rooms[i][2] = "book";
            rooms[i][3] = trxId;
        }
    }
}

// function to discharge room
void dischargeRoom(string roomNumber){
    for(int i=0;i < 15; i++)
    {
        if(rooms[i][0].compare(roomNumber) == 0){
            rooms[i][2] = "available";
            rooms[i][3] = "";
        }
    }
}


// function menu4() responsible for inputing new transaction data
void menu4() {
    system("CLS");

    if(countRoomAvailable() == 0){
        cout<< "There is no Room Available";
        getch();
        system("CLS");
        return;
    }

    headerText();
    cout << "Menu 4 : Transaction" << endl;
    cout << "--------------------------------------------------" << endl<<endl;

    cout << "                                 ROOM                                 "<<endl;
    cout << "======================================================================"<<endl;
    cout << "No.\tName\t\t\tPrice (IDR/hour)\tCapacity"<<endl;
    cout << "======================================================================"<<endl;

    for(int i=0; i <15; i++)
    {
        char tabs[10];
        if(rooms[i][1].length() < 7){
            // strcpy to coppy string to array of char
            strcpy(tabs, "\t\t\t");
        }
        else if(rooms[i][1].length() < 16 ){
            strcpy(tabs, "\t\t");
        }else{
            strcpy(tabs, "\t");
        }

        char tabs2[10];

        if(countDigit(roomsPrice[i][0]) > 7){
            strcpy(tabs2, "\t\t");
        }else{
            strcpy(tabs2, "\t\t\t");
        }

        cout << rooms[i][0] <<"\t"<< rooms[i][1] <<tabs<< roomsPrice[i][0] <<tabs2<< roomsPrice[i][1] <<endl;

        if(i%3 == 2){
            cout << "======================================================================"<<endl;
        }

    }

    cout <<endl<<endl;
    cout << "                    FACILITIES                    "<<endl;
    cout << "--------------------------------------------------"<<endl;
    cout << "Id.\tName\t\t\tPrice (IDR/set)"<<endl;
    cout << "--------------------------------------------------"<<endl;

    for(int i=0; i < 10 ; i++)
    {
        char tabs[10];
        if(facilities[i][1].length() < 7){
            strcpy(tabs, "\t\t\t");
        }
        else if(facilities[i][1].length() < 16 ){
            strcpy(tabs, "\t\t");
        }else{
            strcpy(tabs, "\t");
        }

        cout << facilities[i][0] <<"\t"<< facilities[i][1] <<tabs<< facilitiesPrices[i] <<endl;


        cout << "--------------------------------------------------"<<endl;


    }
    cout << "--------------------------------------------------"<<endl;
    cout << "=================================================="<<endl;


    int manyTransaction;
    cout << "Each Transaction Only for 1 Room"<<endl;

    do{
        cout << "How many transaction? : ";
        cin >> manyTransaction;

        if(manyTransaction < 0 ) cout << "wrong input, minimum is 1!"<<endl;
        if(manyTransaction > countRoomAvailable()) cout << "there are only "<<countRoomAvailable<<" rooms availbale"<<endl;
    }while(manyTransaction < 0 || manyTransaction > countRoomAvailable());


    for(int i=0; i < manyTransaction; i++){

        system("CLS");
        headerText();

        string name;
        string roomId;
        int roomPrice;
        string schdule;
        int howManyFacilities;
        int countAllFacilitiesPrices = 0;

        cout << "Transaction-"<<i+1<<endl;
        cout << "Transaction ID\t\t: "<<transactionCount+1<<endl;
        cout << "Name\t\t\t: ";
        // flush buffer on keybord, so the input is work like it should
        string flushBuffer;
        getline(cin, flushBuffer, '\n');
        // getline() function to get full input data from keybord, space is include
        getline(cin, name, '\n' );
        cout << "Schdule\t\t\t: ";
        getline(cin, schdule, '\n' );
        cout << "--------------------------------------------------"<<endl;
        while(true){
            cout << "Select Room (No)\t: ";
            cin >> roomId;

            if(isRoomValid(roomId) && isRoomAvailable(roomId)){
                roomPrice = getRoomPrice(roomId);
                break;
            }
            else if(isRoomValid(roomId)){
                cout << "Room Already Booked"<<endl;
            }else{
                cout << "Room Number invalid!"<<endl;
            }

        }
        cout << "--------------------------------------------------"<<endl;

        while(true){
            cout << "How many facilities?\t: ";
            cin >> howManyFacilities;

            if(howManyFacilities>=0 && howManyFacilities <= 10){
                break;
            }
            else if(howManyFacilities<0)
            {
                cout << "Minimum is zero"<<endl;
            }
            else{
                cout << "Maximum use 10 facilities"<<endl;
            }

        }

        for(int f=0; f < howManyFacilities; f++){

            while(true){
                string fcsId;
                cout << "Select Facilities (ID)\t: ";
                cin >> fcsId;

                if(isFacilityIDValid(fcsId)){
                    countAllFacilitiesPrices = countAllFacilitiesPrices + getFacilityPrice(fcsId);
                    break;
                }else{
                    cout << "invalid facility ID!"<<endl;
                }

            }


        }

        cout << "--------------------------------------------------"<<endl;

        cout << "Total Rooms Price\t\t: "<<roomPrice<<endl;
        cout << "Total Facilities Price\t\t: "<<countAllFacilitiesPrices<<endl;
        cout << "Total Payment\t\t\t: "<<roomPrice+countAllFacilitiesPrices<<endl;
        cout << "Press any key to continue . . .";
        getch();
        cout << "\n=================================================="<<endl;
        cout << "Total Payment\t\t\t: "<<roomPrice+countAllFacilitiesPrices<<endl;
        cout << "Discount Repetition\t\t: "<<(roomPrice+countAllFacilitiesPrices)/1000000<<endl;
        int totalDiscount = 0.02 * ((roomPrice+countAllFacilitiesPrices)/1000000) * (roomPrice+countAllFacilitiesPrices);
        cout << "Total 2% (/1000000)\t\t: "<< totalDiscount <<endl;
        int totalPayment = (roomPrice+countAllFacilitiesPrices) - totalDiscount;
        cout << "Total Payment After Discount\t: "<< totalPayment<<endl;
        cout << "--------------------------------------------------"<<endl;
        int inputMoneyPaid = 0;

        while(true){
            cout << "Money Paid\t\t: ";
            cin >> inputMoneyPaid;
            if(inputMoneyPaid >= totalPayment){
                break;
            }else{
                cout << "number must equal or greater than total payment"<<endl;
            }
        }
        cout << "Change\t\t\t: "<<inputMoneyPaid - totalPayment<<endl;
        transactionCount++;

        string trxId = to_string(transactionCount);
        bookRoom(roomId, trxId);

        cout << "=================================================="<<endl;
        cout << "=================================================="<<endl;
        cout << "Press any key to continue . . . ";
        getch();
        cout <<endl;
    }



    cout << "\nPress any key to back to menu . . . ";
    getch();
    cout <<endl;
    system("CLS");


}


//Function menu5() responsible for Discharge A Room
void menu5() {
    system("CLS");
    headerText();
    cout << "Menu 5 : Discharge Room" << endl;
    cout << "--------------------------------------------------" << endl;

    string roomId;
    while(true){
        cout << "Input Room Number\t : ";
        cin >> roomId;

        if(isRoomValid(roomId)){
            dischargeRoom(roomId);
            cout << "Discharge Room Success"<<endl;
            cout << "Check-out Menu-1 : Displaye Building Status"<<endl;
            break;
        }else{
            cout << "Room Number invalid!"<<endl;
        }

    }
    cout << "=================================================="<<endl;

    cout << "Press any key to back to menu . . .";
    getch();
    cout<<endl;
    system("CLS");
}

int main() {

    //to change console Colourrrrr
    system("color 80");

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
            menu5();
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
