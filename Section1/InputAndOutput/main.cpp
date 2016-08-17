#include<iostream>
using namespace std;

//flush == flush stream buffer
//endl == insert new line and flush 
//<< == insertion operator
//>> == extraction operator (Extract data from cin object)
int main() {
    string name;
    int age; //If we input string instead of int, it will return 0
    
    cout<<"Enter your name: "<<flush; cin>>name;
    cout<<"Your name is "<<name<<endl;
    
    cout<<"Enter your age: "<<flush; cin>>age;
    cout<<"You are "<<age<<" years old"<<endl;
    
    return 0;
}

