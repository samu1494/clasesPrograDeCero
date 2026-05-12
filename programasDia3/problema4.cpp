// beecrowd 1172 problema
// Array Replacemente I

#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> numeros;
  for(int i=1; i<=10; i++){
    int val; 
    cin>>val;
    numeros.push_back(val);
  }

  // reemplazar todos los valores de cero 0, por el numero 1
  // numeros.size() : 10

  for(int i=0; i<numeros.size(); i++){
    if(numeros[i] == 0){
      numeros[i] = 1;
    }
  }

  for(int i=0; i<numeros.size(); i++){
    cout << numeros[i] << " ";
  }
  cout << endl;

  return 0;
}