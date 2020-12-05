#include <iostream>
using namespace std;

int main(){
    int n[40];
    int cread = 0, ceven = 0, even = 0;
    for (cread; cread < 40;cread++ ){
        cout << "Numero:";
        cin >> n[cread];
    }
    for(ceven; ceven < 40;ceven++){
        if (n[ceven] % 2 == 0){
            even++;}
        } cout << "O Vetor possui " << even << " numeros pares.";
    }
