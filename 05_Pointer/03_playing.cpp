#include<iostream>
using namespace std;
int main(){
  
   int num = 5;
   int a = num;
   cout << "a before: " << num <<endl;
   a++;
   cout << "a after: " <<num << endl;

   int *p = &num;
   cout << "before: " << num <<endl;
   (*p)++;
   cout << "After: " << num <<endl;

   //copying a pointer
   int *q =p;
   cout<< p << "-" << q << endl;
   cout << *p << "-" << *q << endl;
   

   // Important concept pointer Airthmetic addition
   int i=3;
   int *t = &i;
   *t = *t + 1;
   cout<< *t <<endl;
   cout<< "before t : " << t <<  endl;
   t = t +1 ;// t is now pointing to the next memory location of i.
   cout<< "after t : " << t <<endl;

    return 0;
}