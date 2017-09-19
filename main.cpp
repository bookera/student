/*
Author: Andrew Booker
Date: 09/19/2017
Description: Class exercise for C++ to determine the users account balance and run calculations to determine if the users account is in good standing
*/

#include <iostream>

using namespace std;

int main()
{
    // initialize your variables
    double accountBalance, depositAmt, withdrawAmt, totalBalance;

    // prompt user to enter their initial account balance
    cout << " Enter your initial account balance " << endl;
    cin >> accountBalance;

    // prompt user to enter their deposit amount
    cout << " Enter your deposit amount " << endl;
    cin >> depositAmt;

    // prompt user to enter withdraw amount
    cout << " Enter the withdraw amount " << endl;
    cin >> withdrawAmt;

    // calculate total balance
    totalBalance = accountBalance + depositAmt - withdrawAmt;

    // display the users total balance
    cout << " Your new balance is " << totalBalance << endl;

    // make an if statement to determine if the balance is in good standing
    if( totalBalance >= 0)
    {
        cout << " Your total balance is in good standing " << totalBalance << endl;
    }
    else {
        cout << " Your total balance is negative " << endl;
        cout << "\n";
        cout << " Pay up " << endl;
    }
    return 0;
}
