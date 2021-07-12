#include <iostream>
using namespace std;

int main(){

  int N,M; // N은 세로 M은 가로
  cin >> N >> M;
  int result;

  if(M >= 7 && N >= 3){
    result = M - 2;
  }

  else if(M >= 7 && N == 2){
    result = 4;
  }

  else if(M >= 7 && N == 1){
    result = 1;
  }

  else if(N >= 3){
    if(M >= 5){
      result = 4;
    }
    else{
      result = M;
    }
  }

  else if(N == 2){
    result = (M+1) / 2;
  }

  else{
    result = 1;
  }

  cout << result << endl;

  return 0;
}
