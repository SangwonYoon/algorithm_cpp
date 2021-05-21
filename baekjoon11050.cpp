#include <iostream>
using namespace std;

int Fac(int n){
  int result = 1;
  for(int i = n; i > 0; i--){
    result *= i;
  }
  return result;
}

int main(){

  int N, K;
  cin >> N >> K;

  int answer = Fac(N) / (Fac(K) * Fac(N-K));

  cout << answer << endl;

  return 0;
}
