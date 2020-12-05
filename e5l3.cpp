#include <iostream>
using namespace std;

int main(){
    int mx=20, matriz[mx][mx], matriz2[mx][mx], i, j, k, l;
	for (i=0; i<mx; i++){
		for (j=0; j<mx; j++){
			cout << "matriz [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];}
			}
    for (i=0; i<mx; i++){
		for (j=0; j<mx; j++){
			cout << "matriz2 [" << i << "][" << j << "]: ";
			cin >> matriz2[i][j];}
			}
    for (i=0; i<mx; i++){
        for (j=0; j<mx; j++){
            for (k=0; k<mx; k++){
                for (l=0; l<mx; l++){
                    if (matriz[i][j] == matriz2[k][l]){
                        cout << "\nO numero "<<matriz[i][j] << " aparece em ambas as matrizes.\n";
					}
				}
			}
		}
	}
}


