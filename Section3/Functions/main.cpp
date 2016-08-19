/* File:   main.cpp
 * Author: harris
 * Created on August 18, 2016, 5:00 PM
 */


#include <cstdlib>
#include <iostream> // Include header file with <> (usually use to include standard library). Actual file name also have .h extension
#include "utils.h" // Include header file with "" (usually use to include your own library in your project)
// Note: # sign indicated it is a pre-processor command

/* To create header file:
 * 1. Right click on project > new > c++ header file
 * 2. Name the file with .h extension
 * 3. Include the header file in source file
 */

using namespace std;
// Always define function before using them (**best practice**)
// If function is defined after it call or somewhere else, we need to use prototype. We will put prototype in header file

void showMenu(int& input) { // Referencing 'input' variable in main
    cout << "Select a Fruit" << endl;
    cout << "==============" << endl;
    cout << "1. Apple" << endl;
    cout << "2. Orange" << endl;
    cout << "3. Cherry" << endl;
    cout << "==============" << endl;
    cout << "Enter Number: " << flush;
    cin >> input; // Get user input and sent to the 'input' variable in main
}

void result(int& input) {
    switch(input) {
        case 1:
            cout << "You selected Apple" << endl;
            break;
        case 2:
            cout << "You selected Orange" << endl;
            break;
        case 3:
            cout << "You selected Cherry" << endl;
            break;
        default:
            cout << "Incorrect Answer!!" << endl;
    }
}

int caculatePrice(int& input) {
    int price; //
    price = input*10;
    return price;
}

// Function will be executed in the main function
int main(int argc, char** argv) {
    int input; // User input will store here
    
    showMenu(input);
    result(input);
    int price = caculatePrice(input); // Return value from this method need to store in a price variable in main
    printPrice(price);
    
    return 0;
}

void printPrice(int& price) {
    cout << "Price is " << price << endl;
}