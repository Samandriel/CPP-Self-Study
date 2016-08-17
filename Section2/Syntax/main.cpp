// Variable is like a label of memory location
// C++ runs from top to bottom
/* Data types
 * #Primitive
 * - integer
 * 
 * #Class
 * - string
 */

#include<iostream>
#include<iomanip> //IO Manipulators
#include<climits> //Check the memory capacity for data type
using namespace std;

int main() {
    //Integer
    int number_cats = 5;
    int number_dogs = 7 + 3;
    long number_stars = 1549000154542024;
    short number_chairs = 1544;
    cout<<"Number of cats: "<<number_cats<<endl;
    cout<<"Number of dogs: "<<number_dogs<<endl;
    cout<<"Number of cats and Dogs: "<<number_cats + number_dogs<<endl;
    cout<<"Number of stars: "<<number_stars<<endl;
    cout<<"Number of chairs: "<<number_chairs<<endl;
    
    // Floating Point
    float fVal = 1.2345;
    double dVal = 1234.567;
    long double ldVal = 12345.6789;
    cout<<"Float Value in Fixed Floating-point Notation: "<< setprecision(2) << fixed << fVal <<endl; // 'fixed' is from 'iomanip'
    cout<<"Double Value in Fixed Floating-point Notation: "<< setprecision(10) << fixed << fVal <<endl;
    cout<<"Long Double Value in Scientific Notation: "<< setprecision(15) << scientific << ldVal <<endl; // 'scientific' is from 'iomanip'
    
    //String
    string greeting = "Hello ";
    string name = "Sam";
    string fulltext = greeting + name;
    cout<<greeting<<name<<endl;
    cout<<"Print: "<<fulltext<<endl;
    
    // Boolean
    bool bVal = true;
    cout<<"Boolean Value is: "<< bVal<<endl;
    
    // Char
    char cVal1 = '7'; 
    char cVal2 = 85;
    wchar_t wVal = 'g';
    cout<<"Char Value1 is: "<<cVal1<<endl; // return '7' as it's already a char
    cout<<"Char Value2 is: "<<cVal2<<endl; // return 'U' from ASCII table
    cout<<(char)wVal<<" is at number "<<wVal<<" in ASCII table"<<endl; // (char)wVal is casting wVal to char 
        
    //calling climits macro
    cout<<"Max Int: "<< INT_MAX <<endl; 
    cout<<"Min Int: "<< INT_MIN <<endl;
    cout<<"Size of Int: "<< sizeof(int) <<endl; //4 bytes
    cout<<"Size of Long: "<< sizeof(long) <<endl; //8 bytes
    cout<<"Size of Short: "<< sizeof(short) <<endl; //2 bytes
    cout<<"Size of Float: "<< sizeof(float) <<endl; //4 bytes
    cout<<"Size of Double: "<< sizeof(double) <<endl; //8 bytes
    cout<<"Size of Long Double: "<< sizeof(long double) <<endl; //16 bytes
    cout<<"Size of Bool: "<< sizeof(bool) <<endl; //1 bytes
    cout<<"Size of Char: "<< sizeof(char) <<endl; //1 bytes
    return 0;
}
