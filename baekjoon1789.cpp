#include <iostream>
using namespace std;

int main(){

  long long S;
  cin >> S;

  long long num = 1;

  while(((num+1)*num)/2 <= S){
    num++;
  }

  cout << num-1 << endl;

  return 0;
}
