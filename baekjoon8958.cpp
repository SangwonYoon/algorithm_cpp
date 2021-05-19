#include <iostream>
using namespace std;

int main(){

  int test_case;
  cin >> test_case;

  int answer[test_case];

  for(int i = 0; i < test_case; i++){
    string input;
    int score = 0;
    int cnt = 0;
    cin >> input;
    for(int j = 0; j < input.length(); j++){
      if(input[j] == 'O'){
        cnt++;
        score += cnt;
      }
      else if(input[j] == 'X'){
        cnt = 0;
      }
    }
    answer[i] = score;
  }

  for(int i = 0; i < test_case; i++){
    cout << answer[i] << endl;
  }

  return 0;
}
