#include <iostream>
using namespace std;

int main(){

  int N, K;
  cin >> N >> K;

  int arr[N];
  for(int i = 1; i <= N; i++){
    arr[i-1] = i;
  }

  int answer[N];
  int idx = 0;
  int idx_a = 0;
  int cnt = 0;

  while(idx_a != N){
    if(arr[idx] != 0){
      cnt++;
      if(cnt == K){
        answer[idx_a] = arr[idx];
        idx_a++;
        arr[idx] = 0;
        cnt = 0;
      }
    }
    idx++;
    if(idx == N){
      idx = 0;
    }
  }

  cout << '<';
  for(int i = 0; i < N-1; i++){
    cout << answer[i] << ", ";
  }
  cout << answer[N-1] << '>' << endl;

  return 0;
}
