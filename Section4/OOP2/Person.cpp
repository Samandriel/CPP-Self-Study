/*File:   Person.cpp
 * Author: harris
 * Created on September 7, 2016, 2:01 PM
 */

#include "Person.h"

Person::Person() {
    fname = "George";
    lname = "Smith";
}

Person::Person(string firstName, string lastName) {
    this->fname = firstName;
    this->lname = lastName;
    
    cout << "Memory location " << this << endl;
}

Person::~Person() {
}

string Person::toString() {
    stringstream ss1, ss2;
    
    // Ex01
    ss1 << "Fist Name: " << fname << endl;
    ss1 << "Last name: " << lname << endl;
    
    // Ex02
    ss2 << "Fist Name: " << fname << " Last name: " << lname;
    
    string info = ss2.str();
    
    return info;
}

void Person::setName(string newName) {
    fname = newName;
}

string Person::getName() {
    return "Person name setName: " + fname; 
}

