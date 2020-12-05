#include <iostream>
using namespace std;

int main(){
    int n[3][3];
    int i, j, cread;
    for (i=0; i < 3; i+=2){
        for (j=0; j<3; j++){
            cout << "\nDigite o numero a ser armazenado em n[" << i <<"][" << j << "]: ";
            cin >> n[i][j];
        }
    }
    for (cread = 0; cread <3; cread++){
        n[1][cread] = n[0][cread];
         n[0][cread] = n[2][cread];
          n[2][cread] = n[1][cread];
    }for (i=0; i < 3; i+=2){
        for (j=0; j<3; j++){
        cout << "\nNovo valor de n[" << i << "]["<< j <<"] : "<< n[i][j] << " \n";}
    }
}
