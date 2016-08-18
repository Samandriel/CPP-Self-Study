/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harris
 *
 * Created on August 17, 2016, 4:52 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // 'break' will break out of the loop completely
    for(int i=0; i<=100; i += 3) {
        cout << "Number: " << i << endl;
        if(i >= 20) {
            break;
        }
        cout << "Keep looping..." << endl;
    }
    
    // 'continue' will stop executing following code and continue the loop
    for(int i=0; i<=20; i++) {
        cout << "Loop: " << i << endl;
        int n = i%13;
        cout << "Remainder is " << n << endl;
        if(n > 10) {
            cout << "Remainder is more than 10" << endl;
            continue;
        }
        cout << "Remainder lower than 10" << endl;
        
    }
    return 0;
}

