#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int x;
    cin >> x;
    // 1, 3, 5, 7, 9, ...
    
    for(int i = 0; i < x; i++){
        cout << i << endl;
    }

    cout << "----------------------------" << endl;
    for(int i = x; i >= 0; i -= 3){
        cout << i << endl;
    }
    return 0;
}