#include <iostream>
using namespace std;
int main(){
    //Arrays
    //Criando matrizes
    int n[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
               cin >> n[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        cout << n[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;

return 0;
}
