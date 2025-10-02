#include <iostream>
#include <iomanip>
using namespace std;

int formarTriangulo(float a,float b,float c){
    float area, perimetro;
        if(a + b > c && b + c > a && a + c > b){
            perimetro = a + b + c;
            cout << "Perimetro = " << fixed << setprecision(1)<< perimetro << endl;
        }
        else{
            area = (a + b)* c / 2;
            cout << "Area = " <<fixed << setprecision(1)<< area << endl;
        }
return 0;
}

int main(){
    //Desigualdade Triangular
    //Para saber se 3 números formam ou não um triângulo.
    //Condições : A soma de dois lados quaisquer deve ser maior que o terceiro lado.
    float a, b, c;
    cin >> a >> b >> c;


    formarTriangulo(a, b, c);
return 0;
}
