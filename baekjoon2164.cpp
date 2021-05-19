#include <iostream>
using namespace std;

int main(){

  int N;
  cin >> N;
  if(N==1) {
    cout << 1 << endl;
    return 0;
  }
  int array[N] = {1, };
  int idx;
  int cnt = 0;
  int i = 1;
  bool fin = true;

  while(true){
    if(array[i] == 0 && cnt == 0){
      cnt++;
      fin = false;
    }
    else if(array[i] == 0 && cnt == 1){
      cnt = 0;
      array[i] = 1;
      idx = i;
      fin = false;
    }
    i++;
    if(i == N && fin == true){
      break;
    }
    if(i == N){
      i = 1;
      fin = true;
    }
  }

  cout << idx+1 << endl;

  return 0;
}
