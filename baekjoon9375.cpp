#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

  int testcase;
  cin >> testcase;

  for(int i = 0; i < testcase; i++){

    vector <string> types;
    vector< vector <string> > clothes;

    int number;
    cin >> number;

    if(number == 0){
      cout << 0 << endl;
      continue;
    }

    for(int j = 0; j < number; j++){
      string name, type;
      cin >> name >> type;
      for(int k = 0; k <= types.size(); k++){
        if(k == types.size()){
          types.push_back(type);
          clothes.push_back(vector <string>(0));
          clothes[clothes.size()-1].push_back(name);
          break;
        }
        if(types[k] == type){
          clothes[k].push_back(name);
          break;
        }
      }
    }

    /*
    for(int j = 0; j < types.size(); j++){
      cout << types[j] << ' ';
    }
    cout << endl;

    for(int j = 0; j < types.size(); j++){
      for(int k = 0; k < clothes[j].size(); k++){
        cout << clothes[j][k] << endl;
      }
    }
    */

    int total = 1;
    for(int j = 0; j < types.size(); j++){
      total *= clothes[j].size() + 1;
    }

    cout << total - 1 << endl;
  }

  return 0;
}
