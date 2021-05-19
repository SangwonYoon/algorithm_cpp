#include <iostream>
using namespace std;

int main(){

  int N;
  cin >> N;

  int arr[N];
  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  int M;
  cin >> M;

  int find[M];
  for(int i = 0; i < M; i++){
    cin >> find[i];
  }

  int answer[M];

  for(int i = 0; i < M; i++){
    int cnt = 0;
    for(int j = 0; j < N; j++){
      if(arr[j] == find[i]){
        cnt++;
      }
    }
    answer[i] = cnt;
  }

  for(int i = 0; i < M; i++){
    cout << answer[i] << ' ';
  }
  cout << endl;

  return 0;
}
