#include <iostream>
using namespace std;

void sort(int *arr, int size){
  for(int i = 1; i < size; i++){
    int temp = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > temp){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
}

int main(){

  int N;
  cin >> N;
  int arr[N];
  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  sort(arr,N);
  int result = 0;
  for(int i = 0; i < N; i++){
    if(arr[i] * (N - i) > result){
      result = arr[i] * (N - i);
    }
  }

  cout << result << endl;

  return 0;
}
