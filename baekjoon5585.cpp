#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int change = 1000 - N;
    int arr[] = { 500,100,50,10,5,1 };
    int cnt = 0;
        for (int i = 0; i < 6; i++) {
            if (change / arr[i] > 0) {
                cnt += change / arr[i];
                change -= change / arr[i] * arr[i];
            }
        }
    cout << cnt << endl;

    return 0;
}
