/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 17, 2016, 3:20 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // While Loop
    cout << "Program 1" << endl;
    const string password = "mycat"; //"const" use to preserve the value and the value can't be changed
    string input;
    cout << "Enter password: " << flush;
    cin >> input;
    while(input != password) {
        cout << "Try again" << endl;
        cout << "Enter password: " << flush;
        cin >> input;
    }
    
    if (input == password) {
        cout << "Password correct" << endl;
    }
    
    
    
    // Do..while Loop
    // Will execute the program 1 time regardless the condition is true or false.
    // If the condition false, it will be executed once.
    // If the condition true, it will be executed again until condition is false.
    cout << "Program 2" << endl;
    string cat_name = "Roxy";
    string input_cat_name;
    do {
        cout << "What is your cat name?"<< flush; // this will ask once before checking condition
        cin>> input_cat_name;
    } while (input_cat_name != cat_name);
    
    if (input_cat_name == cat_name) {
        cout << "Good job, bye."<<endl;
    }
    
    return 0;
}

