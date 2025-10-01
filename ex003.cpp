#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  //Uso do switch case
  //Valores conhecidos, não é útil para intervalos

  double a, b, c;
  double delta, raiz, r1, r2;
  cin >> a >> b >> c;

  delta =( b * b )- 4 * a * c;
  raiz = sqrt(delta);
  r1 = (-b + raiz)/(2 * a);
  r2 = (-b - raiz)/(2 * a);

  if( raiz > 0 && a!= 0 ){

      cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
      cout << "R2 = " << r2 << endl;
  }
   else{
      cout << "Impossível Calcular\n";
   }
return 0;
}

