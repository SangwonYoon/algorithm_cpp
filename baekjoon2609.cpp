#include <iostream>
using namespace std;

int main(){

  int a, b;
  cin >> a >> b;

  int gcd; // 최대 공약수
  int lcm; // 최소 공배수

  int div = a < b ? a : b;
  int i = 1;

  while(true){
    if(div % i == 0 && a % (div/i) == 0 && b % (div/i) == 0){
      gcd = div/i;
      break;
    }
    i++;
  }

  int mul = a < b ? b : a;
  int j = 1;

  while(true){
    if((mul*j) % a == 0 && (mul*j) % b == 0){
      lcm = mul*j;
      break;
    }
    j++;
  }

  cout << gcd << endl << lcm << endl;

  return 0;
}
