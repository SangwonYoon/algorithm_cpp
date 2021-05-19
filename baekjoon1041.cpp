#include <iostream>
using namespace std;

void sort(int *arr, int size){
  for(int i = 1; i < size; i++){
    int temp = arr[i];
    int j = i-1;
    while(j >=0 && arr[j] > temp){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
}

int main(){

  long long N;
  cin >> N;

  int dice[6];
  for(int i = 0; i < 6; i++){
    cin >> dice[i];
  }
  int arr3[] = {dice[0] + dice[1] + dice[2], dice[0] + dice[1] + dice[3], dice[0] + dice[3] + dice[4], dice[0] + dice[2] + dice[4], dice[1] + dice[2] + dice[5],dice[1]+dice[3]+dice[5], dice[3] + dice[4]+dice[5], dice[2]+dice[4]+dice[5]};
  int arr2[] = {dice[0]+dice[1],dice[0]+dice[2],dice[0]+dice[3],dice[0]+dice[4],dice[1]+dice[5],dice[2]+dice[5],dice[3]+dice[5],dice[4]+dice[5],dice[1]+dice[2],dice[1]+dice[3],dice[2]+dice[4],dice[3]+dice[4]};
  sort(arr3,8);
  sort(arr2,12);
  sort(dice,6);

  long long result = 0;
  if(N == 1){
    for(int i = 0; i < 5; i++){
      result += dice[i];
    }
    cout << result << endl;
    return 0;
  }
  result += dice[0] * (5*N*N -16*N + 12) + arr2[0] * (8*N - 12) + arr3[0] * 4;

  cout << result << endl;

  return 0;
}
