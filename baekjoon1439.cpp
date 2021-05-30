#include <iostream>
#include <string>
using namespace std;

int main(){

  string S;
  cin >> S;

  char temp = S[0];
  float cnt = 0;
  for(int i = 1; i < S.length(); i++){
    if(S[i] != temp){
      cnt += 0.5;
      temp = S[i];
    }
  }
  cnt += 0.5;

  cout << (int)cnt << endl;

  return 0;
}
