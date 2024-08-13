#include<iostream>
using namespace std;
class student {
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
 

int main(){
    student saket;
    cout<<"Everything is runing good"<<endl;
    return 0;

}