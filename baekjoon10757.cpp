#include <iostream>
#include <string>
using namespace std;

int ctoi(char c){
  int result;
  result = c - 48;
  return result;
}

int main(){

  string A;
  string B;

  cin >> A >> B;

  int carry = 0;
  string result("");

  int len_A = A.length();
  int len_B = B.length();

  for(int i = 1; len_A - i >= 0 && len_B - i >= 0; i++){
    result = to_string((ctoi(A[len_A - i]) + ctoi(B[len_B - i]) + carry) % 10) + result;
    if(ctoi(A[len_A - i]) + ctoi(B[len_B - i]) + carry >= 10){
      carry = 1;
    }
    else{
      carry = 0;
    }
  }

  if(len_A == len_B){
  }
  else if(len_A > len_B){
    for(int i = 1; len_A - len_B - i >= 0; i++){
      result = to_string((ctoi(A[len_A - len_B - i]) + carry) % 10) + result;
      if(ctoi(A[len_A - len_B - i]) + carry >= 10){
        carry = 1;
      }
      else{
        carry = 0;
      }
    }
  }
  else{
    for(int i = 1; len_B - len_A - i >= 0; i++){
      result = to_string((ctoi(B[len_B - len_A - i]) + carry) % 10) + result;
      if(ctoi(B[len_B - len_A - i]) + carry >= 10){
        carry = 1;
      }
      else{
        carry = 0;
      }
    }
  }
  if(carry){
    result = "1" + result;
  }

  cout << result << endl;

  return 0;
}
