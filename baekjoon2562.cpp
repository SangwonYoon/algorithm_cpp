#include <iostream>
using namespace std;

int main(){

  int M = 0;
  int idx = -1;

  for(int i = 0; i < 9; i++){
    int num;
    cin >> num;
    if(M < num){
      M = num;
      idx = i;
    }
  }

  cout << M << endl << idx+1 << endl;

  return 0;
}
