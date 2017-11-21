#include <iostream>
using namespace std;
/*
 * TODO- Functions!
 */
//Variables to hold ticket prices, user input for rows/seats, and user input for purchasing tickets when prompted
    double price;
    int SelectedRow;
	int SelectedSeat;
	int totalseats = 450;
	int soldSeats;
	int freeSeats;
	int allSales;
	char response = 2;
	char EMPTY = '0';
	char TAKEN = '1';
	
	const int ROWS = 15;
    const int SEATS = 30;
	int seatIndex [ROWS][SEATS];

	void printSeats() {
	for (int i=0;i<ROWS; i++) {
		for (int j=0; j<SEATS; j++) {			 
		 cout<< seatIndex[i][j];
		 seatIndex[i][j] = EMPTY;
		}
		cout<< endl;
		}		 
}

void seatMap ();

void purchaseSeat() {
	bool usrChoice;
	while (usrChoice = true) {
		//Function to purchase seats.
		cout << "Please enter the row 1-15 you would like to purchase a ticket for: ";
	cin >> SelectedRow;
	cout << "\nNow please enter the seat 1-30 you would like in that row: ";
	cin >> SelectedSeat;
	/*if else where they purchase one seat
    *nested if statement checking if they want to buy another seat
	*ternary statements?
	*create a boolean to check if we should keep looking
	*check against that boolean throughout each loop
	*offer a way out during every process
	*/
	//Checks to see if seat and row entered is available.
	if (seatIndex[SelectedRow][SelectedSeat] = 1)
		{
			cout << "That seat is not available. Buy another seat? ENTER 1 = Yes, 2 = No" << endl;
			cin >> response;
			if (response = 1)
			{
				purchaseSeat();
			}
			else{
				cout << "Goodbye.";
				exit;
			}
		}
	if(SelectedRow <= 5)
	{
		price = 150;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		if (response = 1)
		{
			seatIndex[SelectedRow][SelectedSeat] = 1;
			printSeats();
		}
		else if(response = 2)
		{
			cout << "Goodbye." << endl;
			exit;
		}
	}
	else if(SelectedRow > 5 && SelectedRow <= 10)
	{
		price = 100;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		if (response = 1)
		{
			seatIndex[SelectedRow][SelectedSeat] = 1;
			printSeats();
		}
		else if (response = 2)
		{
			cout << "Goodbye." << endl;
			exit;
		}
	}
	else if (SelectedRow > 10 && SelectedRow <= 15)
	{
		price = 50;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		if (response = 1)
		{
			seatIndex[SelectedRow][SelectedSeat] = 1;
			printSeats();
		}
		else if(response = 2)
		{
			cout << "Goodbye." << endl;
			exit;
		}
	}
	if (response = 1){
		usrChoice = true;
	}
	else{
		usrChoice = false;
	}
	}
}

int totalSales() {
    int allSales;
	cout << allSales << endl;
	if (response == '1')
	{
		allSales++;
		cout << allSales;
	}
    //function to keep a tally of total seats sold.
    return allSales;
}

int soldCount () {
	int soldSeats = totalseats - freeSeats;
	cout << soldSeats << " seats have been sold." << endl;
    //function to return the amount of seats sold total.
    return soldSeats;
}

int unsoldCount () {
	int freeSeats = totalseats - soldSeats;
	cout << "There are " << freeSeats << " free seats available." << endl;
    // function to return the amount of unsold/free seats total.
    return freeSeats;
}

int main() {
    //Constant for your rows and constant for your seats with a 2d array pre-defined.
    const int ROWS = 15;
    const int SEATS = 30;
	int seatIndex [ROWS][SEATS];
	 int usrInput; 
	usrInput = '0123';

	cout << "\nHow can we help you today? ENTER 0 = Purchase ticket, 1 = Check available seats, 2 = Check unavailable seats, 3 = Check total amount of seats sold: ";
	cin >> usrInput;

    switch (usrInput) {
        case 0:
			purchaseSeat();
            break;
        case 1:
			printSeats();
			unsoldCount();
			purchaseSeat();
            break;
        case 2:
			printSeats();
			soldCount();
			purchaseSeat();
            break;
        case 3:
			totalSales();
			break;
        default:
            break;
    }
        /*
         * TODO- a switch statement to call the functions depending on user input.
         */
    return 0;
}

void seatMap () {
         //Create Seat map with available -0s and taken 1s
	for (int i = 0; i <ROWS; i++) {
		for (int j = 0; j <SEATS; j++) {
		seatIndex[i][j] = 0;
		}
	 }
 }

/*
while (response == '1')
		{
			cout << "You have successfully purchased a ticket. Would you like to purchase another? ENTER 1 = Yes, 2 = No " << endl;
			cin >> response;
			if (response == '1')
			{
				purchaseSeat();
			}
			else if (response == '2')
			{
				cout << "Thank you for doing business with us. Enjoy the show!" << endl;
			}
		}
*/
