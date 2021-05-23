#include <iostream>
#include <math.h>
using namespace std;

class Weight{ // 알파벳의 가중치를 저장할 객체를 위한 클래스 생성
public:
  char alpha; // 어떤 알파벳인지 저장
  int w; // 알파벳의 가중치 저장
  int num; // 알파벳에게 부여할 숫자 저장
  Weight(){
    this->num = -1;
  }
  void set(char alpha, int w){
    this->alpha = alpha;
    this->w = w;
  }
};

int main(){

  int N;
  cin >> N;

//동적할당으로 단어를 입력받을 배열 생성 후 입력받기
  string *words = new string[N];
  for(int i = 0; i < N; i++){
    cin >> words[i];
  }
//입력받은 단어들에 들어있는 알파벳을 중복없이 배열에 저장
  char alphabet[26];

  int idx = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < words[i].length(); j++){
      bool only = true;
      for(int k = 0; k < idx; k++){
        if(alphabet[k] == words[i][j]){
          only = false;
        }
      }
      if(only){
        alphabet[idx] = words[i][j];
        idx++;
      }
    }
  }

/*alphabet 배열의 크기를 size 변수에 저장(idx변수를 그대로 이용해도
되지만 변수 이름을 바꾸는 의미에서) */
  int size = idx;

//가중치를 저장할 배열 생성
  Weight *arr = new Weight[size];

//각 알파벳의 가중치를 계산
  for(int h = 0; h < size; h++){
    int total = 0;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < words[i].length(); j++){
        if(alphabet[h] == words[i][j]){
          total += pow(10,words[i].length() - 1 - j);
        }
      }
    }
    arr[h].set(alphabet[h],total);
  }

//각 알파벳에 숫자 부여
  int num = 9;
  for(int i = 0; i < size; i++){
    int max = 0;
    for(int h = 0; h < size; h++){
      if(max < arr[h].w && arr[h].num == -1){
        max = arr[h].w;
      }
    }
    for(int h = 0; h < size; h++){
      if(arr[h].num == -1 && arr[h].w == max){
        arr[h].num = num;
        num--;
        break;
      }
    }
  }

// 각 알파벳에 부여된 수에 따라 계산 (부여된 수 * 가중치)
  int result = 0;
  for(int i = 0; i < size; i++){
    result += arr[i].num * arr[i].w;
  }

// 결과 출력
  cout << result << endl;

  delete[] words;
  delete[] arr;

  return 0;
}
