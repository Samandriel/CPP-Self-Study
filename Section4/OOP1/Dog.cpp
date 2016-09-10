/*File:   Dog.cpp
 * Author: harris
 * Created on September 7, 2016, 11:44 AM
 */
#include "Dog.h"

Dog::Dog() {
    happy = true;
}

Dog::Dog(string newName, int newAge): name(newName), age(newAge) {
}

Dog::Dog(const Dog& orig) {
}

Dog::~Dog() {
}

string Dog::getProfile() {
    stringstream ss;
    ss << "Name: " << name << endl;
    ss << "Age: " << age << endl;
    
    string profile = ss.str();
    return profile;
}

void Dog::speak() {
    if(happy) {
        cout << "Ruff Ruff..." << endl;
    } else {
        cout << "grrrr...." << endl;
    }
}

void Dog::makeHappy() {
    happy = true;
}

void Dog::makeSad() {
    happy = false;
}
