#include <iostream>

using namespace std;

  const double PI = 3.14;

  void calcularAreaCircunferencia(){
    double raio = 5;
    double area = PI * (raio * raio);
    cout << "Area da circunferencia = " << area << endl;
  }

int main() {

  //part02
  calcularAreaCircunferencia();

  //part02
  int z = 15;
  if (z > 10){
    int a = 20 + z;
    cout << "a = " << a << endl;
  }
    cout << "z = " << z << endl;
  
  return 0;
}