/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 10, 2016, 3:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {    
    string password = "hello";
    string input;    
    cout<<"Enter password: "<<flush;
    cin>> input;
    
    // If
    // If..Else
    // If..Else if..Else
    if(input == password) {
        cout<<"Password accepted"<<endl;
    } else {
        cout<<"Access Denied"<<endl;
    }

    
    return 0;
}

