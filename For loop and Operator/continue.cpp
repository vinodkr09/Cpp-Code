/* UISNG WHILE LOOP*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<10){
        if(i==7){
            i++;     /* whewn we use continue keyword in while loop then inside "if" we have to give i++ otherwise
            loop will run infinite timke for i=7 */
            continue; /* when we use a continue keyword that means it skips the output 7 and jump next no. 8 using i++  */
        }
        cout<<i<<endl;
        i++;
    }


/* USING FOR LOOP */

    for(int i=1;i<10;i++){
       if(i==7){
        continue;   /* FOR loop me phele se i++ initilize hota hai isliye yahan i++ nahi lagayenge*/
       } 
       cout<<i<<endl;
    }
}

