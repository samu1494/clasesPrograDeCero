#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<double> estaturas(5);
  estaturas = {1.68, 1.79, 2, 1.55, 2.03};

  // estaturas.size() : 5
  // 1.68 1.79 2 1.55 2.03
  for(int i=0; i < estaturas.size(); i++){
    cout<< i << " -> " << estaturas[i] << " ";
  }
  cout << endl;

  estaturas.push_back(1.75);
  estaturas.push_back(2.10);
  estaturas.push_back(1.35);

  // estaturas.size() : 7
  // 1.68 1.79 2 1.55 2.03 1.75 2.10 1.35
  for(int i=0; i < estaturas.size(); i++){
    cout<< i << " -> " << estaturas[i] << " ";
  }
  cout << endl;

  estaturas.pop_back();
  estaturas.pop_back();
  estaturas.pop_back();
  estaturas.pop_back();
  estaturas.pop_back();
  estaturas.pop_back();

  // estaturas.size() : 1
  // 1.68 
  for(int i=0; i < estaturas.size(); i++){
    cout<< i << " -> " << estaturas[i] << " ";
  }
  return 0;
}