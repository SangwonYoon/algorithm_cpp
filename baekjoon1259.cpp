#include <iostream>
using namespace std;

int main(){

  while(true){
    bool pal = true;
    string input;
    cin >> input;
    if(input == "0"){
      break;
    }

    for(int i = 0; i < input.length() / 2; i++){
      if(input[i] != input[input.length()-1-i]){
        cout << "no" << endl;
        pal = false;
      }
    }
    if(pal){
      cout << "yes" << endl;
    }
  }

  return 0;
}
