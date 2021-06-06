#include <iostream>
using namespace std;

int main(){

  int i = 1;
  while(true){
    int L, P, V;
    cin >> L >> P >> V;
    if(L == 0 && P == 0 && V == 0){
      break;
    }
    int result = 0;
    result += (V / P) * L;
    V -= (V / P) * P;

    V <= L ? result += V : result += L;
    cout << "Case " << i << ": " << result << endl;
    i++;
  }



  return 0;
}
