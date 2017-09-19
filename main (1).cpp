#include <iostream>

using namespace std;

int main()
{
    // initialize variables for value and result
    int value, result;

    // prompt user to enter a value to be stored
    cout << " please enter your initial value " << endl;
    cin >> value;

    // the result should display the user value multiplied by 10
    result = value * 10;

    // display the output of value times 10 and display the result
    cout << " The end result of users initial value of " << value << " * " << 10 << " is = " << result << endl;

    cout << " \n ";

    cout << "The users new result is " << result << endl;
    return 0;
}
