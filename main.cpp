
#include <iostream>

using namespace std;
/*
 * TODO- Functions!
 */
int totalSales() {
    int allSales;
    //function to keep a tally of total seats sold.
    return allSales;
}

int unsoldCount () {
    int freeSeats;
    // function to return the amount of unsold/free seats total.
    return freeSeats;
}

int soldCount () {
    int soldSeats;
    //function to return the amount of seats sold total.
    return soldSeats;
}

int main() {
    //Constant for your rows and constant for your seats with a 2d array pre-defined.
    const ROWS = 15;
    const SEATS = 30;
    int seatIndex [ROWS][SEATS];
    int usrInput; //TODO write code to recieve user input.
    //Variables to hold ticket prices, user input for rows/seats, and user input for purchasing tickets when prompted
    double price;
    int SelectedRow;
	int SelectedSeat;
    char response;
    
    //Get user input
    cout << "Please enter the row you would like to purchase a ticket for: ";
	cin >> SelectedRow;
	cout << "\nNow please enter the seat you would like in that row: ";
	cin >> SelectedSeat;
	
    switch (usrInput) {
        case 0:
		    cout << "There are " << freeseats << " free seats available, and " << soldseats " seats have been sold." << endl;
            //Checkout process
            price = 150;
		cout << "This seat will cost you: $" << price << endl;
		cout << "Would you like to purchase this seat? ENTER 1 = Yes, 2 = No ";
		cin >> response;
		if(response == '1')
		{
			cout << "You have successfully purchased a ticket. Enjoy the show!" << endl;
			soldseats++;
		}
		else if(response == '2')
		{
			cout << "That is unfortunate." << endl;
		}
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
        /*
         * TODO- a switch statement to call the functions depending on user input.
         */
    return 0;
}
