// CHECKING TWO NUMBER WHETHER IT IS EQUAL, GREATER OR SMALLER, which will show in boolean
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS a and b"<<endl;
    cin>> a >> b;
    bool isEqual=(a==b);
    bool isGreater=(a>b);
    bool isSmaller=(a<b);
    cout<<"Are they Equal"<<endl<<isEqual<<endl;
    cout<<"is A greater"<<endl<<isGreater<<endl;
    cout<<"iS A smaller"<<endl<<isSmaller<<endl;
    bool third = isEqual && isGreater; // this output always give FALSE
    bool fourth=isEqual || isGreater;
    cout<<"Not equal"<<endl<<!isEqual<<endl;



}

