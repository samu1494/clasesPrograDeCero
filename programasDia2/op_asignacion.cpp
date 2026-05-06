#include <iostream>
using namespace std;

int main() {
    // Código aqui!!!
    int n = 10;
    //n = n + 20;
    n += 20;

    int i = 1;
    //i = i+2;
    i += 2;

    int val = 2;
    //val = val*4;
    val *= 4;

    int aux = 10;
    aux--; // 9
    aux = aux * (i + val ) / n;
    aux *= (i + val ) / n;

    int ans = 10;
    //ans = ans / 2;
    ans /= 2;
    return 0;
}