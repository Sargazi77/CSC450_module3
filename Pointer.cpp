//============================================================================
// Name        : Pointer.cpp
// Author      : MS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>  // Include library for input and output

using namespace std;

int main() {
    // Variable declarations to store user input
    int value1, value2, value3;

    // Ask the user to enter three integer values
    cout << "Enter the first integer: ";
    cin >> value1;

    cout << "Enter the second integer: ";
    cin >> value2;

    cout << "Enter the third integer: ";
    cin >> value3;

    // Creating integer pointers and allocating dynamic memory for each variable
    int* ptr1 = new int;  // Pointer for the first value
    int* ptr2 = new int;  // Pointer for the second value
    int* ptr3 = new int;  // Pointer for the third value

    // Storing the values in the dynamically allocated memory
    *ptr1 = value1;
    *ptr2 = value2;
    *ptr3 = value3;

    // Display the contents of the variables
    cout << "\nValues entered:" << endl;
    cout << "Value1: " << value1 << ", Pointer1: " << *ptr1 << endl;
    cout << "Value2: " << value2 << ", Pointer2: " << *ptr2 << endl;
    cout << "Value3: " << value3 << ", Pointer3: " << *ptr3 << endl;

    // Free the dynamically allocated memory using the delete operator
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Set pointers to null after deletion (good practice)
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;  // End of the program
}
