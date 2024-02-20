#include<Iostream>
using namespace std;

inline int getMax(int a, int b){
    return  (a > b) ? a : b;  // ternary operator
}

int main(){
    int a = 1, b =2;
    int ans =0;

    ans = getMax(a, b);
    cout<< ans << endl;  // output: 2

    a = a+3;
    b = b+3;

    ans = getMax(a, b);
    cout<< ans << endl;  // output: 5


    return 0;


}