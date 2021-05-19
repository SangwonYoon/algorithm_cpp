#include <iostream>
using namespace std;

/* 시간 초과
int fibo(int n){
  if(n == 0){
    return 0;
  }
  else if(n == 1){
    return 1;
  }
  else{
    return fibo(n-1) + fibo(n-2);
  }
}
*/

int main(){

  int n;
  cin >> n;

  int fibo[45] = {0, 1, };
  for(int i = 2; i <= n; i++){
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  cout << fibo[n] << endl;

  return 0;
}
