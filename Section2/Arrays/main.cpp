/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 17, 2016, 6:42 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "===============" << endl;
    cout << "Array of integer" << endl;
    int value1[3]; // We need to specify the number of element in array, otherwise it might clash.
    value1[0] = 80;
    value1[1] = 90;
    value1[2] = 70;
    value1[3] = 60;
    cout << "Value1: "<< value1[0] << endl;
    cout << "Value1: "<< value1[1] << endl;
    cout << "Value1: "<< value1[2] << endl;
    cout << "Value1: "<< value1[3] << endl;
    // To out put all elements in array, we can use For Loop
    /* C++ won't stop use from access array that doesn't exist; for example value1-index4. It will access the random space in memory instead.
     * But if you try to use that space it might cause the fetal error or clash the whole computer */ 
    cout << "===============" << endl;
    
    cout << "Array of double" << endl;
    double value2[3] = {2.5, 3.2, 5.8};
    cout << "Value2: "<< value2[2] << endl;
    cout << "===============" << endl;
    
    cout << "Array of short" << endl;
    short value3[3] = {};  // Blank value
    
    cout << "Array of string" << endl;
    string value4[3] = {"apple","orange","grape"};
    
    cout << "Looping through Array of integer" << endl;
    for(int i=0; i < 3; i++) {
        cout << "number of index " << i << " : " << value1[i] <<endl;
    }
    cout << "===============" << endl;
    
    for(int i=0; i<3; i++) {
        cout << "Array of short, index "<< i << " : " << value3[i]<< endl;
    }
    cout << "===============" << endl;
    
    for(int i=0; i<3; i++) {
        cout << "Array of string, index " << i <<" : " << value4[i] << endl;
    }
    cout << "===============" << endl;
    
    cout << "Size of value1 = "<< sizeof(value1) << " bytes" << endl;
    cout << "Size of value2 = "<< sizeof(value2) << " bytes" << endl;
    cout << "Size of value3 = "<< sizeof(value3) << " bytes" << endl;
    cout << "Size of value4 = "<< sizeof(value4) << " bytes" << endl;
    return 0;
}

