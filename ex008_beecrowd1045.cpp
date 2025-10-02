#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Formação de Triângulos
    //Beecrowd 1045
    float a, b, c;
    cin >> a >> b >> c;
    float lados[3] = {a,b,c};
    sort(lados, lados + 3);

    a = lados[2];
    b = lados[1];
    c = lados[0];

    if (a >= b + c){
        cout << "Nao forma triangulo\n";
    }
    else{
        if ((a * a) == (b * b )+ (c * c)){
        cout << "triangulo retangulo\n";
        }
        else if ((a * a) > (b * b )+ (c * c)){
                cout << "triangulo obtusangulo\n";
            }
        else if ((a * a) < (b * b)+ (c * c)){
                cout << "triangulo acutangulo\n";
            }

        if(a == b && b == c){
            cout << "triangulo equilatero\n";
        }
        else if ((a == b && b != c) || (c == b && b != a )|| (a == c && c != b)){
            cout << "triangulo isosceles\n";
        }
    }
return 0;
}
