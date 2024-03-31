#include <iostream>

using namespace std;

  void dobrar(int &x){
    x = x * 2;
    cout << "x = " << x << endl;
  }

int main() {
  int numero = 5;
  dobrar(numero);
  cout << "numero = " << numero << endl;  
}