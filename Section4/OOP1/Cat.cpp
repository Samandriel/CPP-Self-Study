#include "Cat.h"

/* Constructor */
// Constructor can't return value, we don't need to define return type 
Cat::Cat() { 
    cout << "Cat object created" << endl;
    happy = true;
}

Cat::Cat(string newName, int newAge) {
    cout << "Cat object created" << endl;
    name = newName;
    age = newAge;
}

/* Destructor */
Cat::~Cat() {
    cout << "Cat object destroyed" << endl;
}

string Cat::getProfile() {
    stringstream ss;
    ss <<"Cat name: " << name << endl;
    ss <<"Age: " << age << endl;
    
    string profile = ss.str();
    return profile;
}

void Cat::speak() {
    cout << "Meaowwww!!!"  << endl;
}

void Cat::jump() {
    cout << "Jump on the bed" << endl;
}
