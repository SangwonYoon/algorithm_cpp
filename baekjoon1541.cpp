#include <iostream>
#include <string>
using namespace std;

string tokenize(int start, int end, string input){
  string result("");
  for(int i = start; i < end+1; i++){
    result += input[i];
  }
  return result;
}

int main(){

  string input;
  cin >> input;
  int num[50];
  char oper[50];

  int point = 0;
  int idx = 0;

  for(int i = 0; i < input.length(); i++){
    if(input[i] == '+' || input[i] == '-'){
      num[idx] = stoi(tokenize(point,i-1,input));
      oper[idx] = input[i];
      idx++;
      point = i+1;
    }
  }
  num[idx] = stoi(tokenize(point,input.length(),input));
  int result = num[0]; // 출력으로 내보낼 result 선언

  for(int i = 0; i < idx; i++){
    if(oper[i] == '+'){ // +기호 만나면 지금까지 더해온 값에 다음 값 더함
      result += num[i+1];
    }
    else if(oper[i] == '-' && i == idx - 1){
      result -= num[i+1];
    }
    else{ // -기호 만나면 다음 -기호 나올때까지의 값들을 더한 값을 result에서 빼줌
      int sum = num[i+1]; // sum 변수에 값들을 더해줌
      i++; // -기호 만나면 다음 인덱스부터 +기호를 찾기 위해 i값 1증가시킴
      for(i; oper[i] =='+'; i++){ // +기호면 sum변수에 값을 더함
        sum += num[i+1];
        if(i == idx - 1){
          result -= sum;
          cout << result << endl;
          return 0;
        }
      }
      i--; //-기호를 만나서 for문이 종료되면 i값을 1 감소시켜서 바깥 for문이 다시 -기호를 읽을수 있게 함
      result -= sum; // 지금까지 더한 sum값을 result값에서 빼줌
    }
  }
  cout << result << endl;

  return 0;
}
