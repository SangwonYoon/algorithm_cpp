#include <iostream>
using namespace std;

int main(){

    int N, K;
    cin >> N >> K;
    int arr[N];
    int cnt = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = N-1; i >= 0; i--){
        if(K/arr[i] > 0){
            cnt += K/arr[i];
            K -= K/arr[i] * arr[i];
        }
    }
    cout << cnt << endl;

    return 0;
}