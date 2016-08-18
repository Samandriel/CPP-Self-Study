/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 18, 2016, 11:26 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Multidimensional Arrays AKA tables
    // Specify 2 row, 3 columns
    string animals[2][3] = {
        {"cat", "kitten", "feline"},
        {"dog", "puppy","canine"}
    };
    
    for(int i=0; i<2; i++) { // loop through row
        for(int j=0; j<3; j++) { // loop through array elements in each row
            cout << animals[i][j] << "  " << flush;
        }
        cout << endl;
    }
    
    cout << "Size of string "<< sizeof(string) << " bytes" << endl;
    cout << "Size of animals array "<< sizeof(animals) << " bytes" << endl;
    
    cout << "Size of each element: " << endl;
    for(int i=0; i<2; i++ ) {
        for(int j=0; j<3; j++) {
            cout << sizeof(animals[i][j]) << "  " << flush;
        }
        cout << endl;
    }
   
    return 0;
}

