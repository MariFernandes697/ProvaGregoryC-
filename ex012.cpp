#include <iostream>
using namespace std;

int main(){
    float num[6], media = 0;
    int positivos = 0;

    for(int i = 0; i < 6; i++){
        cin >> num[i];
        if(num[i] > 0){
            positivos++;
            media += num[i];
        }
    }
    media = media/ positivos;
    cout << positivos << " valores positivos\n" << media << endl;

return 0;
}
