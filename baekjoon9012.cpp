#include <iostream>
using namespace std;

int main(){

  int test_case;
  cin >> test_case;

  for(int j = 0; j < test_case; j++){
    string input;
    cin >> input;

    int cnt = 0;

    for(int i = 0; i < input.length(); i++){
      if(input[i] == '('){
        cnt++;
      }
      else{
        cnt--;
      }
      if(cnt < 0){
        cout << "NO" << endl;
        break;
      }
    }
    if(cnt == 0){
      cout << "YES" << endl;
    }
    else if(cnt > 0){
      cout << "NO" << endl;
    }
  }

  return 0;
}
