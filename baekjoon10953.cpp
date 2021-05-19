#include <iostream>
#include <string>
using namespace std;

int main(){

  int test_case;
  cin >> test_case;

  for(int i = 0; i < test_case; i++){
    string input;
    cin >> input;
    cout << input[0] + input[2] - 96 << endl;
  }



  return 0;
}
