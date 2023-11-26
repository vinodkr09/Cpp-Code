#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Saket Anand";
  string substring = str.substr(6, 10);
  cout << substring << endl;
  return 0;
}