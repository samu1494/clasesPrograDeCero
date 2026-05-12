// dado 3 valores a b c, encontrar el valor:
// mas grande de los 3, el valor medio y el mas pequeño

#include <iostream>
#include <vector>
#include <algorithm> // para usar funcion sort()
using namespace std;

int main(){
  int a,b,c;
  cin >> a>> b >> c;
  // uso de vector dinamico
  // vector<int> v(3);
  // v[0] = a;
  // v[1] = b;
  // v[2] = c;
  
  // sort(v.begin(), v.end());

  //uso de vector estatico
  int v[3] = {a, b, c};

  sort(v, v+3);
  cout << "valor mas pequeño: " << v[0] << endl;
  cout << "valor medio: " << v[1] << endl;
  cout << "valor mas grande: " << v[2] << endl;
  return 0;
}