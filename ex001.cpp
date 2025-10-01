#include <iostream>
using namespace std;

int main(){
   //Pratica 1.1
    cout << "Alo mundo\n";

   //Pratica 1.2
   int a,b;
   cin >> a >> b;
   cout << "Soma: " << a + b << endl;
   cout << "Multiplicacao: " << a * b << endl;

   //Pratica 1.3 | Conversor de tempo
   int tempo, horas, minutos;
   cout << "Digite o tempo em minutos\n";
   cin >> tempo;

   horas = tempo / 60;
   minutos = tempo % 60;

   cout << "É equivalente a " << horas << "horas e " << minutos << "minutos.\n";
return 0;
}

