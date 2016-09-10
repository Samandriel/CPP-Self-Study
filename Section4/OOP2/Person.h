/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: harris
 *
 * Created on September 7, 2016, 2:01 PM
 */

#ifndef PERSON_H
#define PERSON_H

#include <sstream>
#include <iostream>
using namespace std;

class Person {
private:
    string fname;
    string lname;

public:
    Person();
    Person(string firstName, string lastName);
    Person(const Person& orig);
    virtual ~Person();
    
    string toString();
    void setName(string newName);
    string getName();

};

#endif /* PERSON_H */

