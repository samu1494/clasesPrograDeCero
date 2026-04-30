#include <iostream>
using namespace std;

int main(){
  // tipos de datos
  int variable1 = 12;
  int variable2;
  int constante = 1;

  long long num1 = 118127112712819281;

  double decimales = 12.23232323;
  double decimal2 = 125644.127182712;

  variable1 = 10;

  int suma = 12+12; //24
  double resta = 12.23 - 5.5; // 6.73
  long long producto = 123*127162712618; // 15641013652014

  double division1 = 15/2; // 7.5
  int division2 = 15/2; // 7

  int modulo = 15 % 4; // 3
  int modulo2 = 12 % 2; // 0

  // operadores unarios
  int op1 = 1;
  op1++; // 2
  op1++; // 3
  op1++; // 4

  int op2 = 5;
  op2--; // 4
  op2--; // 3
  op2--; // 2

  cout << op1 << endl;
  cout << op2 << endl;

  //operadores relacionales ==, 
  bool son_iguales = 12 == 45; // false
  bool son_diferentes = 4 != 4; // false
  bool es_mayor = 12 > 3; // true;
  bool es_menor = 12 < 24; // false;
  bool es_mayor_igual = 12 >= 12; // true;
  bool es_menor_igual = 15 <= 5; // false;

  cout << son_iguales << endl;  
  cout << son_diferentes << endl;

  // operadores logicos: &&, ||, and, or
  bool op_and = 12 > 5 and 12 == 12; //true
  bool op_or = 12 > 15 or 12 == 12; // true
  bool negacion = !(12 > 5); // false

  
  return 0;
}
