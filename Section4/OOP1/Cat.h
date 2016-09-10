/*  File:   Cat.h
 * Author: harris
 * Created on September 7, 2016, 10:45 AM
 */
#include <iostream>
#include <sstream>
using namespace std;

#ifndef CAT_H
#define CAT_H

class Cat {
private:
    string name;
    int age;
    bool happy;
public:
    Cat();
    Cat(string newName, int newAge);
    ~Cat();
    string getProfile();
    void speak();
    void jump();
};

#endif /* CAT_H */

