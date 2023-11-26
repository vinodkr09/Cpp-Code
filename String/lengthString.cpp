#include<iostream>
using namespace std;
int  getLength(char name[]){
    int length=0;
    for(int i=0; name[i] !='\0'; i++){
        length++;
    }
    return length;
}
int main(){
    char name[20];
    cout<<" Enter your Name"<< endl;
    cin>>name;
     cout<<" Your Name is ";
     cout<< name<<endl;
     cout<<" Length of Name is: " << getLength(name)<<endl;
     return 0;

}