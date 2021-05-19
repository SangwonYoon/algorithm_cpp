#include <iostream>
using namespace std;

class TV{
  int size;
public:
  TV(int size = 20){
    this->size =size;
  }
  int getSize(){
    return size;
  }
};

class WideTV : public TV{
  bool videoIn;
public:
  WideTV(bool videoIn = true, int size = 20) : TV(size){
    this->videoIn = videoIn;
  }
  bool getVideoIn(){
    return videoIn;
  }
};

class SmartTV : public WideTV{
  string IPAddress;
public:
  SmartTV(string IPAddress, int size = 20): WideTV(true,size){
    this->IPAddress = IPAddress;
  }
  string getIPAddress(){
    return IPAddress;
  }
};

int main(){

  SmartTV htv("192.0.0.1",32);
  cout << htv.getSize() << endl;
  cout << boolalpha << htv.getVideoIn() << endl;
  cout << htv.getIPAddress() << endl;

  return 0;
}
