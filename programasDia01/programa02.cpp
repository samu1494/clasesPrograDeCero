// Pagina del problema:
// https://judge.beecrowd.com/en/problems/view/1038

#include <iostream>
// libreria para manipular "dar formato" la entrada y salida de un programa
#include <iomanip> 
using namespace std;

int main(){  
  int codigo, cantidad;
  cin >> codigo;
  cin >> cantidad;

  double total;

  if(codigo == 1){
    total = 4 * cantidad;  
  }else if(codigo == 2){
    total = 4.50 * cantidad;
  }else if(codigo == 3){
    total = 5 * cantidad;
  }else if(codigo == 4){
    total = 2 * cantidad;
  }else{
    total = 1.50 * cantidad;
  }
  // línea de código que me permite fijar la cantidad de decimales para ver en pantalla
  cout << fixed << setprecision(2);
  cout << "Total: R$ " << total << endl;
  return 0;
}