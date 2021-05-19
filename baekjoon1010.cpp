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

  int test_case;
  cin >> test_case;

  for(int i = 0; i < test_case; i++){
    int N, M;
    cin >> N >> M;
    if(N <= M - N){
      cout << fac(M,M-N+1) / fac(N,1) << endl;
    }
    else{
      cout << fac(M,N+1) / fac(M-N,1) << endl;
    }
  }

  return 0;
}
