#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    \\comparação de valores;
  int num1, num2;
  cin >> num1 >> num2;

  if (num1 > num2){
    cout << "Maior: " << num1 << endl;
  }
  else if (num2 > num1){
    cout << "Maior: " << num2 << endl;
  }
  else{
    cout << "São iguais\n";
  }
return 0;
}
