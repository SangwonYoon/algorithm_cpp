#include <iostream>
using namespace std;

void quickSort(int *arr,int s, int e){

  if(s >= e){
    return;
  }

  int pivot = arr[(s+e) / 2];
  int left=s, right=e;

  while(left <= right){
    while(arr[left] < pivot) left++;
    while(pivot < arr[right]) right--;
      swap(arr[left],arr[right]);
      left++; right--;

  }

  quickSort(arr,s,right);
  quickSort(arr,left,e);
}

int main(){

  int N;
  cin >> N;
  int input[N];
  for(int i = 0; i < N; i++){
    cin >> input[i];
  }

  int M;
  cin >> M;
  int find[M];
  for(int i = 0; i < M; i++){
    cin >> find[i];
  }

  quickSort(input,0,N-1);

  int answer[M] = {0, };

  for(int i = 0; i < M; i++){
    bool found = true;
    int start = 0;
    int end = N-1;
    int idx = (start + end) / 2;
    while(find[i] != input[idx]){
      if(start > end){
        found = false;
        break;
      }
      else if(find[i] > input[idx]){
        start = idx + 1;
      }
      else if(find[i] < input[idx]){
        end = idx - 1;
      }
      idx = (start + end) / 2;
    }
    if(found){
      answer[i] = 1;
    }
  }

/*
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      if(find[i] == input[j]){
        answer[i] = 1;
        break;
      }
      else if(find[i] < input[j]){
        break;
      }
    }
  }
  */

  for(int i = 0; i < M; i++){
    cout << answer[i] << endl;
  }

  return 0;
}
