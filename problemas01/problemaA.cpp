#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    cin >> m >> n;
    
    int respuesta;
    if(m%2==0 or n%2==0){
      respuesta = (m*n)/2;
    }else{
      respuesta = (n*m-1)/2;
    }

    cout << respuesta << endl;
    return 0;
}