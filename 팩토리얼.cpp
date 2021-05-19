#include <iostream>
using namespace std;

long long fac(int a, int b){
  long long result = 1;
  for(int i = b; i <= a; i++){
    result *= i;
  }
  return result;
}

int main(){

  cout << fac(29,13) << endl;

  return 0;
}
