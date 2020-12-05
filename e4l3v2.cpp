#include <iostream>
using namespace std;

main (){
	int matriz[10][10], i, j, line, column, ctline, ctcolumn;
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			cout << "matriz[" << i << "][" << j << "] = ";
			cin >> matriz[i][j];}}
			for(ctline = 0; ctline<10; ctline++){
                for (ctcolumn = 0; ctcolumn<10; ctcolumn++){
                    if(matriz[0][0] <= matriz[ctline][ctcolumn]){
                        matriz[0][0] = matriz[ctline][ctcolumn];
                        line = ctline;
                        column = ctcolumn;
			}
		}
	}
    cout << "\nO maio numero da matriz esta localizado em [" << line << "][" << column <<"]";
	}
