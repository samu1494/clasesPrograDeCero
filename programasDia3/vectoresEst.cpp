#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int edades[5] = {1,11,12,21,100};

    cout << edades[0] << endl; // 1
    cout << edades[1] << endl; // 11
    cout << edades[4] << endl; // 100

    for(int i=0; i<5; i++){
      cout << "-> " << edades[i] << endl;
    }

    int tam = 4;
    double estaturas[tam];

    for(int i=0; i<tam; i++){
      double val;
      cout << "inserta estatura: ";
      cin >> val;
      estaturas[i] = val;
    }

    double suma = 0;
    for(int i=0; i<tam; i++){
      suma = suma + estaturas[i];
    }
    cout << suma << endl;
    
    return 0;
}