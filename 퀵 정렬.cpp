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

void sort(int *arr, int size){
    quickSort(arr,0,9);
}

int main(){

  int arr[10] = {1,5,9,4,7,10,6,2,8,3};
  quickSort(arr,0,9);

  for(int i = 0; i< 10; i++){
    cout << arr[i] << endl;
  }

  return 0;
}
