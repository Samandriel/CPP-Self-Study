/* File:   main.cpp
 * Author: harris
 * Created on September 7, 2016, 10:43 AM
 */


/** Organizing Code in C++
 * 
 * Method 1: Create class
 * 1. Right click on the project > new > C++ class
 * 2. NetBeans will automatically create Header file and Source file for us (Dog.h, Dog.cpp)
 * 3. In Header file will contain Class name, Modifier, Constructor and Destructor function prototype
 * 4. In source file will contain 'include' of its header file, Constructor and Destructor function
 * 5. In main, 'include <headername>.h' will be insert automatically 
 * 
 * Method 2: Manual
 * 1. Create C++ source file name Cat.cpp
 * 2. Create header file Cat.h
 * 3. Include all function prototypes in header file
 * 4. In main function file and source file 'Include "Cat.h"'
 * 5. We can call function in main function now
 */

/** Creating Object
 * 1. Wrap function prototype with a class (Cat.h)
 * 2. Define modifier as public
 * 3. Reference class name in function name (Cat.cpp) ex. 
 *        void Cat::speak() {
 *          ....
 *        }
 * 4. Creating object by define Class and object name
 *        Cat cat1;
 * 5. Call function through object
 *        cat1.speak()
 */

/** Variable Encapsulation (EX. Dog)
 * 1. Declare variable(initialize value in constructor) in header file (under private section)
 * 2. We can't access variable directly from main(or other classes.
 *    We have to create function in Dog class to access variable under private.
 * 3. Now we can call the function to set the variable 
 */

/** Constructor and Destructor (Ex. Cat)
 * 1. Constructor will run automatically when the object is created.
 *    Destructor will run automatically when object is destroyed. 
 *    At that point memory will return to OS for other software to use.
 * 2. Constructor and Destructor can't return any value.
 * 3. Constructor and Destructor have to be the same name as class ex. Cat(). 
 *    But Destructor have tilde '~' as a prefix ex. ~Cat().
 * 4. We should initialize value under Constructor, instead of directly in header file.
 * 5. Without the scope, object will be destroyed when the program finished running. 
 * 6. We can define the scope when object should be created or destroy by wrapping code (in main)
 *    with { }
 */

/** Overloading Construct (Ex. Cat.h)
 * Overloading Construct - multiple construct with different arguments.
 * 1. Include overloading constructor prototype in Cat.h
 * 2. Create overloading constructor method in Cat.cpp
 * 3. To use the overloading constructor, we need to specify argument correctly in defined order
 */

/** Constructor Initialization (Ex. Dog)
 * instead using regular assignment operator in implementation code block, we can initialize value like this instead;
 *    Dog::Dog(string newName, int newAge): name(newName), age(newAge) {
 *    }
 */
#include <cstdlib>
#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

int main(int argc, char** argv) {
    cout << "Start Program..." << endl;
    
    // Scoping Object
    {
        Cat cat1;
        cout << "Cat: " << endl;
        cat1.speak();
        cat1.jump();
        
    }
    cout << "\n" << endl;
    
    {
        Cat cat2("Tom", 2);
        cout << cat2.getProfile() << endl;
    }
    cout << "\n" << endl;
    
   
    Dog dog1;
    cout << "Dog: " << endl;
    dog1.makeHappy();
    dog1.speak();
    
    cout << "\n" << endl;
    
    Dog dog2("Bob",2);
    cout << dog2.getProfile() << endl;

    cout << "Ending Program..." << endl;
    return 0;
}

