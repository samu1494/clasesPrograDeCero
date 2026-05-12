// https://codeforces.com/problemset/problem/1030/A
// A. En busca de un problema fácil

#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int op[n];

  for(int i=0; i<n; i++){
    int val; cin>>val;
    op[i] = val;
  }

  bool control = true;
  for(int i=0; i<n; i++){
    if(op[i] == 1){
      control = false;
      break;
    }
  }
  
  if(control){
    cout << "EASY" << endl;
  }else{
    cout << "HARD" << endl;
  }
  return 0;
}