#include <iostream>
#include <string>
using namespace std;

int main(){

  string input;
  getline(cin,input,'\n');

  int cnt = 0;

  for(int i = 1; i < input.length() - 1; i++){
    if(input[i] == ' '){
      cnt++;
    }
  }

  cout << cnt + 1 << endl;

  return 0;
}
