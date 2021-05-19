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
  int idx = 0;
  int answer[99999];

  while(N != 0){
    int cnt = 0;

    for(int i = N + 1; i <= 2*N; i++){
      if(isPrime(i)){
        cnt++;
      }
    }
    answer[idx] = cnt;
    idx++;

    cin >> N;
  }

  for(int i = 0; i < idx; i++){
    cout << answer[i] << endl;
  }

  return 0;
}
