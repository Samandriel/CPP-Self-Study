/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 18, 2016, 3:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Select a pet: " << endl;
    cout << "==============" << endl;
    cout << "1. Dog " << endl;
    cout << "2. Cat" << endl;
    cout << "3. Bird" << endl;
    cout << "4. Hamster" << endl;
    cout << "5. Gold Fish" << endl;
    cout << "==============" << endl;
    int input;
    cout << "Enter a number: " << flush; cin >> input;
    
    switch(input) {
        case 1: 
            cout << "You selected Dog" << endl;
            break;
        case 2: 
            cout << "You selected Cat" << endl;
            break;
        case 3: 
            cout << "You selected Bird" << endl;
            break;
        case 4: 
            cout << "You selected Hamster" << endl;
            break;
        case 5: 
            cout << "You selected Gold Fish" << endl;
            break;
        default: 
            cout << "Incorrect choice!!" << endl;
    }
    return 0;
}

