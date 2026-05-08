https://codeforces.com/contest/546/problem/A

#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int k, n, w;
    cin >> k >> n >> w;
    int totalPagar = 0;b

    for(int i=1; i<= w; i++){
      int aux = k * i;
      totalPagar = totalPagar + aux;
    }

    if(n >= totalPagar)
      cout << "0" << endl;
    else{
      int prestamo = totalPagar - n;
      cout << prestamo << endl;
    }
    return 0;
}