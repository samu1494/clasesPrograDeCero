#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int mat[3][3];

    //i recorre las filas
    for(int i=0; i<3; i++){
      // j recorrer las columnas para cada fila
      for(int j=0; j<3; j++){
        int val;
        cin>> val;
        mat[i][j] = val;
      }
    }

    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout << mat[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
}