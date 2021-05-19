#include <iostream>
using namespace std;

int main(){

  string input;
  cin >> input;

  string f;
  cin >> f;

  while(true){
    int find = input.find(f);
    if(find == -1){
      break;
    }
    else{
      input.replace(find,f.length(),"");
    }
  }

  if(input == ""){
    cout << "FRULA" << endl;
  }
  else{
    cout << input << endl;
  }

  return 0;
}
