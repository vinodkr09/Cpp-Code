// when object is created constructor is called.

#include<iostream>
using namespace std;

class Hero {
private:
   int health;

public:
    char level;

Hero(){
    cout << "Constructor is called: "<< endl;
}   

    void print(){
        cout<< level << endl;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

   void setLevel(char ch){
    level = ch;
   }
    
};

int main(){
    cout<<"hi"<< endl;
    Hero Ramesh;    // object created statically
    cout<<"HEllo"<< endl;


    // object created dynamically
      Hero *h = new Hero;
}

// output in Sequence: hi
 //                    Constructor is called:
  //                   HEllo
  //                   Constructor is called:
