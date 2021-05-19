#include <iostream>
using namespace std;

int main(){

  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  int score[] = {A,B,C,D,E};
  int total = 0;

  for(int i = 0; i < 5; i++){
    score[i] >= 40 ? total += score[i] : total += 40;
  }

  cout << total / 5 << endl;

  return 0;
}
