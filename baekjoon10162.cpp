#include <iostream>
using namespace std;

int main(){

  int A = 0, B = 0, C = 0;
  int T;
  cin >> T;

  while(T >= 300){
    T -= 300;
    A++;
  }
  while(T >= 60){
    T -= 60;
    B++;
  }
  while(T >= 10){
    T -= 10;
    C++;
  }
  if(T != 0){
    cout << -1 << endl;
    return 0;
  }
  else{
    cout << A << ' ' << B << ' ' << C << endl;
  }

  return 0;
}
