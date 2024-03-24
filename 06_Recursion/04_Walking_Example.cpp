#include<iostream>
using namespace std;
void reachHome(int source, int dest){

cout<< " Source se start " << source << " Destination " << dest << endl;
    // base Case
    if(source == dest){
        cout<< "GHar paunch gaye"<< endl;
        return ;
    }
     // Processing- ek step aage badh jao
     source++;

    // Recursive call
    reachHome(source, dest);

}


int main(){
    int source = 1;
    int dest = 10;
    cout<< endl;
    reachHome(source, dest);
}  