// To access private data memebers we can use get() and set() function
#include<iostream>
using namespace std;

class Hero {
private:
   int health;

public:
    char level;

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
    
   // creation of object 
    Hero ramesh;

    cout<<"Ramesh health is: "<< ramesh.getHealth()<<endl;

    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout<<"health is: " << ramesh.getHealth() << endl;
    cout << "Level is: " << ramesh.level << endl;

    return 0;

}