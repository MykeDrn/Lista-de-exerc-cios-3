#include <iostream>
using namespace std;

int main(){
    int vetor[40], i;
    for (i=0; i<40 ;i++){
        cout << "Digite o numero a ser armazenado: ";
        cin >> vetor[i];
    }for (i=0; i<40 ;i++){
        if(vetor[i]>0){
            vetor[i]=0;
        }
    }
}
