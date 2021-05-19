#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
  if(n == 1){
    return false;
  }
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(){

  int N;
  cin >> N;
  int input;
  int cnt = 0;

  for(int i = 0; i < N; i++){
    cin >> input;
    if(isPrime(input)){
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
