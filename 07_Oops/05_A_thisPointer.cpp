// The "this" pointer is a special pointer that points to the object for which the member function is called.
// The "this" pointer is only accessible within non-static member functions of a class.
// Trying to use "this" pointer in the main function or any other function outside the class context is incorrect.
// The this pointer can be used to:
                               // Access the member variables and functions of the object.
                                //To resolve ambiguity when a local variable has the same name as a member variable.
                                //To return a reference to the calling object.
                               // To access the object's address.



#include<iostream>
using namespace std;

class Person {
public:
  Person(string name) {
    this->name = name;
  }

  string getName() {
    return this->name;
  }

private:
  string name;
};

int main() {
  Person person("John Doe");

  // Access the member variable using the getName function.
  string personName = person.getName();
  cout << personName << endl; // Prints "John Doe".

  // Resolve ambiguity.
  string anotherName = "Jane Doe";
  cout << anotherName << endl; // Prints "Jane Doe".

  // Demonstrate returning a reference to the calling object.
  Person& ref = person;

  // Access the object's address.
  void* address = &person;
  cout << address << endl; // Prints the address of the person object.

  return 0;
}
