/* 
 * File:   Dog.h
 * Author: harris
 *
 * Created on September 7, 2016, 11:44 AM
 */
#include <iostream>
#include <sstream>
using namespace std;

#ifndef DOG_H
#define DOG_H

class Dog {
private:
    string name;
    int age;
    bool happy;

public:
    Dog();
    Dog(string newName, int newAge);
    Dog(const Dog& orig);
    virtual ~Dog();
    
    string getProfile();
    void speak();
    void makeHappy();
    void makeSad();
    
};

#endif /* DOG_H */

