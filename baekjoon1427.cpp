#include <iostream>
#include <string>
using namespace std;

void Rsort(int *arr,int size){
  for(int i = 1; i < size; i++){
    int temp = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] < temp){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
}

int ctoi(char c){
  return c - 48;
}

int main(){

  string input;
  cin >> input;
  int arr[input.length()];

  for(int i = 0; i < input.length(); i++){
    arr[i] = ctoi(input[i]);
  }

  Rsort(arr,input.length());

  for(int i = 0; i < input.length(); i++){
    cout << arr[i];
  }

  return 0;
}
