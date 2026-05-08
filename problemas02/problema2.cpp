// https://atcoder.jp/contests/abc068/tasks/abc068_b

#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int n;
    cin >> n;
    int contador_alto = 0;
    int val_alto = 0;

    for(int i = 1; i <= n; i++){
      int contador = 0;
      int aux = i;
      while(aux > 0){
        if(aux % 2 == 0){
          contador = contador + 1;
        }
        
        aux = aux / 2;
      }

      if(contador >= contador_alto){
        contador_alto = contador;
        val_alto = i;
      }
    }

    cout << val_alto << endl;
    return 0;
}