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
	char response;
	char EMPTY = '*';
	char TAKEN = '#';
	
	

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

void purchaseTicket () {
	//Function to purchase seats.
	cout << "Please enter the row 1-15 you would like to purchase a ticket for: ";
	cin >> SelectedRow;
	cout << "\nNow please enter the seat 1-30 you would like in that row: ";
	cin >> SelectedSeat;

	if(SelectedRow <= 5)
	{
		price = 150;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		secondPurchase();
		if(response == '2')
		{
			cout << "That is unfortunate." << endl;
		}
	}
	else if(SelectedRow > 5 && SelectedRow <= 10)
	{
		price = 100;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		//To loop the purchaseTicket function if users want to buy another seat.
		secondPurchase();
		if (response == '2')
		{
			//this repeated
			cout << "That is unfortunate." << endl;
		}
	}
	else if (SelectedRow > 10 && SelectedRow <= 15)
	{
		price = 50;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		secondPurchase();
		if(response == '2')
		{
			cout << "That is unfortunate." << endl;
		}
	}
}

void secondPurchase() {
		while (response == '1')
		{
			cout << "You have successfully purchased a ticket. Would you like to purchase another? ENTER 1 = Yes, 2 = No " << endl;
			cin >> response;
			if (response == '1')
			{
				purchaseTicket();
			}
			else if (response == '2')
			{
				cout << "Thank you for doing business with us. Enjoy the show!" << endl;
			}
		}
	}

int main() {
    //Constant for your rows and constant for your seats with a 2d array pre-defined.
    const int ROWS = 15;
    const int SEATS = 30;
    int seatIndex [ROWS][SEATS];
    int usrInput; 
	usrInput = '0123';

	cout << "How can we help you today? ENTER 0 = Purchase ticket, 1 = Check available seats, 2 = Check unavailable seats, 3 = Check total amount of seats sold: ";
	cin >> usrInput;

    switch (usrInput) {
        case 0:
			purchaseTicket();
            break;
        case 1:
			unsoldCount();
            break;
        case 2:
			soldCount();
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
