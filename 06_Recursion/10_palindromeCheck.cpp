#include<iostream>
using namespace std;
bool checkPlaindrome(string str, int i, int j){

    // base case
    if(i>j)
    return true;

    if(str[i] != str[j]){    //  ek case slove kar diye hai baki recurison khud ba khud solve kar dega else me
         return false;
    }
      else{
        return checkPlaindrome(str, i+1, j-1); // recursive call to check the remaining
      }

}

int main(){
    string name = "madam";
    bool isPalindrome = checkPlaindrome(name, 0, name.length()-1);
    if(isPalindrome){
        cout<< "It is palindrome"<<endl;
    }
    else{
        cout<< "It is not plaindrome" << endl;
    }
    return 0;

}


