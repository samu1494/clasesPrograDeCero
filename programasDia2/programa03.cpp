#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int n;
    cin >> n;

    long long suma = 0;
    for(int i = 1; i <= n; i++){
        int valor;
        cin >> valor;
        // suma = suma + valor;
        suma += valor;
    }

    cout << suma << endl;
    return 0;
}