#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int a, b;
    cin >> a; // 3
    cin >> b; // 2

    if(a==1 && b==2)
      cout << 3 << endl;
    else if(a==2 && b==3)
      cout << 1 << endl;
    else if(b==1 && a==3)
      cout << 2 << endl;
    else if(a==3 && b==1)
      cout << 2 << endl;
    else if(a==2 && b==1)
      cout << 3 << endl;
    else if(a==3 && b==2)
      cout << 1 << endl; 
    else if(a==1 && b==3)
      cout << 2 << endl; 

    return 0;
}