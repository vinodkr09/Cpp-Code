// No need of object creation in static function.
// "this" keyword is not used in static function. bcz there is no pointer in static function and this keyword refers to pointer in current object. (object hi nahi hai to pointer kaha se banega)
// Static function can only access static data members of class.

#include<iostream>
#include<cstring>
using namespace std;

class Hero {
private:
   int health;

public:
    static int timeToComplete;  // static data member

    
   // static function
   static int random(){
    return timeToComplete;
   }

   //Destructor
   ~Hero(){
    cout << "Destructor bhai is called" << endl;
   }
    
};

// static data memeber intilization
int Hero::timeToComplete = 9;

int main(){

    cout<< Hero::timeToComplete<<endl;  // output is 9
     

}