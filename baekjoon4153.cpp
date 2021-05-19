#include <iostream>
#include <math.h>
using namespace std;

int max(int a, int b, int c){
  if((a > b ? a : b) < c){
    return c;
  }
  else{
    return a > b ? a : b;
  }
}

int min(int a, int b, int c){
  if((a < b ? a : b) > c){
    return c;
  }
  else{
    return a < b ? a : b;
  }
}

int mid(int a, int b, int c){
  int M = max(a,b,c);
  int m = min(a,b,c);

  int arr[3] = {a,b,c};

  for(int i = 0; i < 3; i++){
    if(arr[i] != M && arr[i] != m){
      return arr[i];
    }
  }
}

int main(){

  while(true){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0){
      break;
    }
    int M = max(a,b,c);
    int m1 = min(a,b,c);
    int m2 = mid(a,b,c);

    if(pow(M,2) == pow(m1,2) + pow(m2,2)){
      cout << "right" << endl;
    }
    else{
      cout << "wrong" << endl;
    }

  }

  return 0;
}
