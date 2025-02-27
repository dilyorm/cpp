#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void restaurantOrdering() {
    int choice, quantity;
    double totalBill = 0;

    do {
        cout << "Menu:\n1. Pizza ($10)\n2. Burger ($8)\n3. Salad ($5)\n4. Exit\n";
        cout << "Enter the item number: ";
        cin >> choice;

        if (choice == 4) break;

        cout << "Enter quantity: ";
        cin >> quantity;

        switch(choice) {
            case 1: totalBill += 10 * quantity; break;
            case 2: totalBill += 8 * quantity; break;
            case 3: totalBill += 5 * quantity; break;
            default: cout << "Invalid choice!\n"; continue;
        }

        cout << "Total Bill: $" << totalBill << endl;

    } while (true);
}

double calculateParkingFee(int hours) {
    double fee = 0;

    if (hours <= 2) {
        fee = 0;
    } else if (hours <= 5) {
        fee = 2 * (hours - 2);
    } else {
        fee = 2 * 3 + 5 * (hours - 5);
    }

    return fee;
}

void parkingFeeCalculator() {
    int hours;

    while (true) {
        cout << "Enter number of hours parked (negative value to exit): ";
        cin >> hours;

        if (hours < 0) break;

        cout << "Parking Fee: $" << calculateParkingFee(hours) << endl;
    }
}

double balance = 500;

void deposit() {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;
    balance += amount;
}

void withdraw() {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Insufficient Funds\n";
    }
}

void checkBalance() {
    cout << "Current Balance: $" << balance << endl;
}

void bankingSystem() {
    int option;
    do {
        cout << "Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch(option) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: break;
            default: cout << "Invalid option!\n"; break;
        }
    } while (option != 4);
}

double calculateMovieTicketCost(int movieChoice, int tickets) {
    double cost = 0;
    switch(movieChoice) {
        case 1: cost = 8 * tickets; break;
        case 2: cost = 10 * tickets; break;
        case 3: cost = 12 * tickets; break;
        default: cout << "Invalid movie selection!\n"; break;
    }
    return cost;
}

void movieTicketBooking() {
    int movieChoice, tickets;

    do {
        cout << "Select a Movie:\n1. Movie A ($8)\n2. Movie B ($10)\n3. Movie C ($12)\n4. Exit\n";
        cout << "Enter movie choice: ";
        cin >> movieChoice;

        if (movieChoice == 4) break;

        cout << "Enter number of tickets: ";
        cin >> tickets;

        cout << "Total Cost: $" << calculateMovieTicketCost(movieChoice, tickets) << endl;

    } while (movieChoice != 4);
}

double calculateTrainTicketFare(int trainChoice, int tickets) {
    double fare = 0;
    switch(trainChoice) {
        case 1: fare = 15 * tickets; break;
        case 2: fare = 20 * tickets; break;
        case 3: fare = 25 * tickets; break;
        default: cout << "Invalid train selection!\n"; break;
    }
    return fare;
}

void trainTicketReservation() {
    int trainChoice, tickets;

    do {
        cout << "Select a Train:\n1. Train X ($15)\n2. Train Y ($20)\n3. Train Z ($25)\n4. Exit\n";
        cout << "Enter train choice: ";
        cin >> trainChoice;

        if (trainChoice == 4) break;

        cout << "Enter number of tickets: ";
        cin >> tickets;

        cout << "Total Fare: $" << calculateTrainTicketFare(trainChoice, tickets) << endl;

    } while (trainChoice != 4);
}

bool checkPasswordStrength(string password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        if (islower(c)) hasLower = true;
        if (isdigit(c)) hasDigit = true;
        if (ispunct(c)) hasSpecial = true;
    }

    return (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial);
}

void passwordStrengthChecker() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (checkPasswordStrength(password)) {
        cout << "Strong Password\n";
    } else {
        cout << "Weak Password\n";
    }
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) return false;

    int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (day >= 1 && day <= daysInMonth[month - 1]);
}

void nextDate(int &day, int &month, int &year) {
    int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    day++;

    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void calendarValidator() {
    int day, month, year;

    do {
        cout << "Enter date (day month year): ";
        cin >> day >> month >> year;

        if (isValidDate(day, month, year)) {
            nextDate(day, month, year);
            cout << "Next Date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid Date!\n";
        }
    } while (true);
}

int main() {
restaurantOrdering();
}
