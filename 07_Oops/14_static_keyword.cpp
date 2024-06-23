// when we create a data member in static keyword then we dont need to create object.      
//Intilize the static data members outside the class with scope resolution.

#include<iostream>
#include<cstring>
using namespace std;

class Hero {
private:
   int health;

public:
    
    static int timeToComplete;

    
   //Destructor
   ~Hero(){
    cout << "Destructor bhai is called" << endl;
   }
    
};

// static data memeber intilization
int Hero::timeToComplete = 10;

int main(){

    cout<< Hero::timeToComplete<<endl;  // output is 10
     

}