#include<iostream>
using namespace std;
void reverse(string &str, int i, int j){    // mpercent ka dhyan dena yahan par

    //base case
    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str, i, j);

}

int main(){
    string name = "saket";
    reverse(name, 0 , name.length()-1);
    cout << "Reversed Name: "<< name << endl;
}