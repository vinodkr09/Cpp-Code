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

    // static allocation
    Hero a;
    a.setHealth(80); 
    a.setLevel('A'); 
    cout<<"level is: "<< a.level << endl;
    cout<< "Health is: "<< a.getHealth() << endl;

    //Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('A');
    cout<<"Level is: " << (*b).level<< endl;    // accessing by dot operator
    cout<<"Health is: " << (*b).getHealth() << endl;  // accessing by dot operator

                 //OR
    cout<<"Level is: " << b->level<< endl;    // accessing by arrow operator
    cout<<"Health is: "<< b->getHealth() << endl;  // accessing by arrow operator

}






