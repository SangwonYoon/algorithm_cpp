#include <iostream>
using namespace std;

void sort(int *time, int size){
    for(int i = 1; i < size; i++){
        int j = i - 1;
        int temp = time[i];
        while(j >= 0 && time[j] > temp){
            time[j+1] = time[j];
            j--;
        }
        time[j+1] = temp;
    }
}

int main()
{
    int N;
    cin >> N;
    int time[N];
    for(int i = 0; i < N; i++){
        cin >> time[i];
    }
    
    sort(time, N);
    
    int result = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            result += time[j];
        }
    }
    
    cout << result << endl;

    return 0;
}