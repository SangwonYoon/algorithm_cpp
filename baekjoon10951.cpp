#include <iostream>
#include <string>
using namespace std;

int main(){

  string input;

  while(getline(cin, input, '\n')){
    int A, B;
    A = input[0] - 48;
    B = input[2] - 48;
    cout << A + B << endl;
  }

  return 0;
}
