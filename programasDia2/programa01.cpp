#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    while(true){
        int pass;
        cin >> pass;
        if(pass != 2002){
            cout << "Senha Invalidad" << endl;
        }else{
            cout << "Accceso Permitido" << endl;
            break;
        }
    }
    cout << "Fin de programa" << endl;
    return 0;
}