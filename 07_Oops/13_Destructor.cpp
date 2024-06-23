// destructor is the last function that is going to be called before an object is destroyed.

#include<iostream>
#include<cstring>
using namespace std;

class Hero {
private:
   int health;

public:
    char *name; // you can also write like this name[100] but it is bad practise,/   star(*) laga kar dyanmicllay heap allocate kara diye bcz heap me jada space rahta hai
    char level;   // *name, char type ka pointer hai

    //Defalut constructor
    Hero(){
        cout<<"Simple constructor is called"<<endl;
        name = new char[100];   // dynamically create kiye hai array isliye new keyword likhe hai
    }

// parameterized constructor
Hero(int health){
    cout<<"this -> "<<this<< endl;
 this -> health = health;
}  

// parameterized constructor
   Hero(int health, char level){
    this -> health = health;
    this -> level = level;
   }

 //userdefined copy constructor
     Hero(Hero &temp){    // temp is object

     char *ch = new char[strlen(temp.name) + 1];  // dynamically ek new array create kiye hai
     strcpy(ch, temp.name);  // copy kiye hai
     this -> name = ch;  // this -> name ko assign kiye hai

   cout<<"copy constructor is called" << endl;
    this->health = temp.health;
    this->level = temp.level;

}

    void print(){
        cout<<endl;
        cout<<"Name: "<< this->name << " , ";
        cout<< "health: " << this->health << endl;
        cout<< "level: " << this->level<< endl;
        cout<< endl;
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

   void setName(char name[]){
    strcpy(this->name, name);  // strcpy is used to copy string in current name

   }

   //Destructor
   ~Hero(){
    cout << "Destructor bhai is called" << endl;
   }
    
};

int main(){
    // static
    Hero a;

    // Dynamically
    Hero *b = new Hero();

   // manually destructor is  called
    delete b;

}

// constructor har object ke liye ek hi baar call hota hai jb uske creation ke time hota hai
// destructor har object ke liye ek hi baar call hota hai jb uske destruction ke time hota hai