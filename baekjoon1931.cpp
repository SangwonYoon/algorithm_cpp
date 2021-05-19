/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
////////////////////////////////////////// sort 함수 다시 만들어야 함

void sort(int *arr, int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i][1];
        int j = i-1;
        while(j >= 0 && arr[j][1] > temp){
            arr[j+1][1] = arr[j][1];
            j--;
        }
        arr[j+1][1] = temp;
    }
}

int main(){

    int N;
    cin >> N;
    int arr[N][2];
    
    for(int i = 0; i < N; i++){
        int start,end;
        cin >> start >> end;
        arr[i][0] = start;
        arr[i][1] = end;
    }
    
    int end_pnt = arr[0][1];
    
    for(int i = 1; i < N; i++){
        if(end_pnt > arr[i][1]){
            end_pnt = arr[i][1];
        }
    }

    int cnt = 1;
    
    while(true){
        int temp = 0;
        
        for(int i = 0; i < N; i++){
            if(arr[i][0] >= end_pnt && temp == 0){
                temp = arr[i][1];
            }
            else if(arr[i][0] >= end_pnt && arr[i][1] < temp){
                temp = arr[i][1];
            }
        }
        if(temp == 0){
            cout << cnt << endl;
            break;
        }
        end_pnt = temp;
        cnt++;
    }
    
    return 0;
}