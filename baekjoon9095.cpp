#include <iostream>
#include <math.h>
using namespace std;

string DtoB(int num,int length){
  string result = "";
  for(int i = length-1; i >= 0; i--){
    if(num / (int)pow(2,i) == 1){
      result += "1";
      num -= pow(2,i);
    }
    else{
      result += "0";
    }
  }
  return result;
}

int main(){

  int testcase;
  cin >> testcase;

  for(int i = 0; i < testcase; i++){
    int num;
    cin >> num;

    string *arr = new string[(int)pow(2,num-1)];
    for(int i = 0; i < pow(2,num-1); i++){
      arr[i] = DtoB(i,num-1);
    }

    int cnt = 0;

    for(int i = 0; i < pow(2,num-1); i++){
      int temp = 1;
      bool suc = true;
      for(int idx = 0; idx < num-1; idx++){
        if(arr[i][idx] == '1'){
          temp = 1;
        }
        else{
          temp++;
          if(temp > 3){
            suc = false;
          }
        }
      }
      if(suc){
        cnt++;
      }
    }
    cout << cnt << endl;

    delete[] arr;
  }


  return 0;
}
