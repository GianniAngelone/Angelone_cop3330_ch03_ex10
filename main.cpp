/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gianni Angelone
 */

/*
Write a program, which will take an operation followed by two operands and output the result.
*/
#include "std_lib_facilities.h" //Include our given header file

int main()
{
    string op; //Determines our operation
    double val1, val2, result; //Declare our 3 variables, our 2 integers received by user, and our result
    bool x;
    x = false;

    cout << "Please insert an operation followed by two operands (Example: * 4 5): ";
    cin >> op >> val1 >> val2;
    if (op == "+") { //Sign operations
        result = val1 + val2;
        x = true;
    }
    if (op == "-") {
        result = val1 - val2;
        x = true;
    }
    if (op == "*") {
        result = val1 * val2;
        x = true;
    }
    if (op == "/") {
        result = val1 / val2;
        x = true;
    }
    if (op == "plus") { //Sign operations in letter form
        result = val1 + val2;
        x = true;
    }
    if (op == "minus") {
        result = val1 - val2;
        x = true;
    }
    if (op == "mul") {
        result = val1 * val2;
        x = true;
    }
    if (op == "div") {
        result = val1 / val2;
        x = true;
    }
    if (x == true) { //Here we display our results
        cout << "Your result is: " << result << '\n';
    }
    else { //When a user inputs incorrect operator information
        cout << "Invalid operation.\n";
    }
    return 0;
}