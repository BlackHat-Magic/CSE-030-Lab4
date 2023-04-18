# include <iostream>

using namespace std;

string combineStr (string input, int number) {
    string output = "";
    for (int i = 0; i < number; i++) {
        output += input;
    }
    return(output);
}

int main () {
    // initialize variables
    string input;
    int number = 1;

    while (number != 0) {
        // get input from user
        cout << "Enter a string: ";
        cin >> input;
        cout << "Enter a number of times: ";
        cin >> number;

        // check that number is valid
        if (number < 0) {
            cerr << "You entered an incorrect value for the array size!" << endl;
        } else if (number == 0) {
            return(0);
        } else {
            cout << "The resulting string is: " << combineStr(input, number) << endl;
        }
    }
}