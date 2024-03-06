#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	
	int A[3][5];
	int soma_Linha[3]={0,0,0};
	
	for(int i= 0; i<3; i++){
		for(int j= 0; j<5; j++){
			cout << "Insira um valor na matriz " << i << " " << j << ": ";
			cin >> A[i][j];
        }
    }
		
    for(int i= 0; i<3; i++){
		for(int j= 0; j<5; j++){
            soma_Linha[i] += A[i][j];
	    }
    }
	for(int i= 0; i<3;i++){
		cout << "Soma da linha "<< i << ": " << soma_Linha[i] << endl;       
    }
	return 0;
}