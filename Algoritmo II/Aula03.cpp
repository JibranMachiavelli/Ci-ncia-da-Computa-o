#include <iostream>
#include <string>

using namespace std;

  /*
  void procediMento_calcular_area_circ() {
    double raio = 3.5;
    double area = 3.14 * (raio * raio);
    cout << "A area da circunferencia de raio " << raio << " é " << area << endl;
  }

  double funcao_calcular_area_circ(){
    double raio = 3.5;
    double area = 3.14 * (raio * raio);
    return area;
  }
  */

  double calcularAreaQuadrada (){
    cout << "Qual o tamanho do lado do quadrado? \n";
    double lado;
    cin >> lado;
    double areaQuadrado = lado * lado;
    return areaQuadrado;
  }
  double calcularAreaCubo(){
    double areaQuadrado = calcularAreaQuadrada();
    double areaCubo = 6 * areaQuadrado;
    return areaCubo;
  }

  double calcularAreaPiramide(){
    double areaQuadrado = calcularAreaCubo();
    double areaFaces = 3.5;
    double areaPiramide = areaQuadrado + areaFaces;
    return areaPiramide;
  }

int main() {
  /*
  procediMento_calcular_area_circ();

  cout << endl;
  
  double a = funcao_calcular_area_circ();
  
  cout << a << endl;
  */

  double areaCubo = calcularAreaCubo();
  double areaPiramide = calcularAreaPiramide();
  cout << "A area do cubo é " << areaCubo << endl;
  cout << "A area da piramide é " << areaPiramide << endl;
  return 0;
}