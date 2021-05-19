#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int a = N / 5;
    for(a; a >= 0; a--){
        for(int b = 0; 5 * a + 3 * b <= N; b++){
            if (5 * a + 3 * b == N){
                cout << a+b << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
