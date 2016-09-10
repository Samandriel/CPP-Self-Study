/* File:   main.cpp
 * Author: harris
 * Created on September 7, 2016, 11:25 AM
 */


/** Getter and Setter
 * Note: People recommended to avoid using getter and setter in C++
 * - "A trivial getter or setter adds no semantic value; the data item could just as well be public."
 * - "The correct approach is to have a public API that reflects behavior,
 * rather than representation, and that maintains invariants."
 * - Getter and Setter don't have to come in pair; we can have Getter without Setter
 */

/** String Stream (Example in toString())
 * 1. 'Include <sstream>' in header file
 * 2. declare stringstream type
 *         stringstream ss1;
 * 3. Now we can use variable name as the
 *         ss1 << "Fist Name: " << fname << endl;
 *         ss1 << "Last name: " << lname << endl;
 * 4. To concatenate everything together, we need to call method str() from the library
 *    We can put them in a single variable and reuse it latter
 *         string info = ss1.str(); 
 */

/** 'This'
 * This will set memory location for each object we created
 *   this->fname = firstName;
 *   this->lname = lastName;
 */

#include <cstdlib>
#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char** argv) {
    
    Person person1;
    Person person2("Sam", "Harris");
    Person person3("Rich", "Cobey");
    
    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;
    
    person1.setName("Georgina");
    cout << person1.getName() << endl; 
    
    
    return 0;
}

