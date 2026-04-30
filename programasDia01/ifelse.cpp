#include <iostream>
using namespace std;

int main(){
  int a, b;
  // input()
  cin >> a >> b;
  //cin >> b;

  if(a > b){
    cout << "el mayor es a" << endl;
  }else{
    cout << "el mayor es b" << endl;
  }
  return 0;
}