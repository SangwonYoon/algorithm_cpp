#include <iostream>
using namespace std;

int main(){

  int K;
  cin >> K;
  int arr[K];
  int idx = 0;

  for(int i = 0; i < K; i++){
    int input;
    cin >> input;
    if(input){
      arr[idx] = input;
      idx++;
    }
    else{
      idx--;
      arr[idx] = 0;
    }
  }

  int answer = 0;
  for(int i = 0; i < idx; i++){
    answer += arr[i];
  }

  cout << answer << endl;

  return 0;
}
