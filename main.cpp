#include <iostream>
using namespace std;

//Variables to hold ticket prices, user input for rows/seats, and user input for purchasing tickets when prompted
double price;
int SelectedRow = 0;
int SelectedSeat = 0;
int totalseats = 450;
int soldSeats = 0;
int freeSeats = 450;
int allSales = 0;
char EMPTY = '0';
char TAKEN = '1';

//constants and arrays
const int ROWS = 15;
const int SEATS = 30;
char seatIndex [ROWS][SEATS];

//declare functions
void printSeats();
void seatMap();
void purchaseCheck();
void updateArray();
void purchaseSeat();
void totalSalesCount();
int totalSales();
int soldCount ();
int unsoldCount ();

int main() {
    //Constant for your rows and constant for your seats with a 2d array pre-defined.
	seatMap();
    bool menu = true;
	cout << "How can we help you today?" << endl;
	while (menu)
	{
	 int usrInput; 
	 cout << "\nENTER: \n 0 = Purchase ticket\n 1 = Check available seats\n 2 = Check unavailable seats\n 3 = Check total amount of seats sold\n 4 = Exit  " << endl;
	 cin >> usrInput;

     switch (usrInput) {
        case 0:
			purchaseSeat();
            break;
        case 1:
			printSeats();
			unsoldCount();
            break;
        case 2:
			printSeats();
			soldCount();
            break;
        case 3:
			totalSales();
			break;
		case 4: 
			menu = false;
			break;
        default:
            break;
    }
	}
        /*
         * TODO- a switch statement to call the functions depending on user input.
         */
    return 0;
}

//Functions!! YAY!

int unsoldCount () {
	freeSeats = totalseats - soldSeats;
	cout << "There are " << freeSeats << " free seats available." << endl;
    // function to return the amount of unsold/free seats total.
    return freeSeats;
}

int soldCount () {
	soldSeats = totalseats - freeSeats;
	cout << soldSeats << " seats have been sold." << endl;
    //function to return the amount of seats sold total.
    return soldSeats;
}

int totalSales() {
    cout << allSales << endl;
    //function to keep a tally of total seats sold.
    return allSales;
}

void totalSalesCount() {
	allSales++;
	freeSeats--;
	soldSeats++;
}

void purchaseSeat() {
    cout << "Please enter the row 1-15 you would like to purchase a ticket for: ";
	cin >> SelectedRow;
	cout << "\nNow please enter the seat 1-30 you would like in that row: ";
	cin >> SelectedSeat;
	//Checks to see if seat and row entered is available.
	//bought seats
	if (seatIndex[SelectedRow][SelectedSeat] == '1')
		{
			cout << "That seat is not available." << endl;
		}
	//unbought seats
	else if(seatIndex[SelectedRow][SelectedSeat] != '1') {
		if (SelectedRow <= 5) {
			price = 150;
			purchaseCheck();
		}
		else if (SelectedRow <= 10 && SelectedRow > 5) {
			price = 100;
			purchaseCheck();
		}
		else if (SelectedRow <= 15 && SelectedRow > 10) {
			price = 50;
			purchaseCheck();
		}
	}
}

void updateArray() {
	seatIndex[SelectedRow][SelectedSeat] = TAKEN;
}

void purchaseCheck() {
	int usrAnswer;
	cout << "The price of this seat is: " << price << endl;
	cout << "Would you like to purchase this seat?\n Enter:\n 1 = YES\n 2 = NO" << endl;
	cin >> usrAnswer;
	if (usrAnswer == 1) {
		updateArray();
		totalSalesCount();
		cout << "Thank you for your purchase!";
	} else if (usrAnswer == 2) {
		
	} else {
		cout << "Please try again" << endl;
	}
}

void printSeats() {
	for (int i=0;i<ROWS; i++) {
		for (int j=0; j<SEATS; j++) {			 
		 cout<< seatIndex[i][j];
		 seatIndex[i][j] = EMPTY;
		}
		cout<< endl;
		}		 
}

void seatMap () {
         //Create Seat map with available -0s and taken 1s
	for (int i = 0; i <ROWS; i++) {
		for (int j = 0; j <SEATS; j++) {
		seatIndex[i][j] = '0';
		}
	 }
 }
