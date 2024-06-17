#include<iostream>
using namespace std;

class Hero{

    // properties

    public:   // can be accessed both inside the class and outside the class
          int health;  // data members
          char level;   // data members
          int result;   // data members

          // Member function 
           void print(){
            cout << "result is " << result << endl;
           }


    private:   // can only be accessed inside the class
           int age;     // data members

 

};

int main(){

// creation of object
Hero ramesh; // ramesh is an object of class Hero

ramesh.health = 60;
ramesh.level = 'A';
ramesh.result = 100;

cout<<"Size is : " << sizeof(ramesh)<<endl;
cout<<"Health of Ramesh is: " << ramesh.health <<endl;  // Accessing data member using dot opeartor
cout<< "Level of Ramesh is: " << ramesh.level << endl;  // Accessing data member using dot operator

ramesh.print();  // Accesing member function using dot operator


return 0;
}