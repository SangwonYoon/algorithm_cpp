#include <iostream>
using namespace std;

void sort(int *arr, int size){
  for(int i = 1; i < size; i++){
    int temp = arr[i];
    int j = i - 1;
    for(; j >= 0 && arr[j] > temp; j--){
      arr[j+1] = arr[j];
    }
    arr[j+1] = temp;
  }
}

int main(){
    int arr[10] = {5, 8, 1, 3, 10, 9, 2, 4, 6, 7};
    sort(arr,10);

    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
