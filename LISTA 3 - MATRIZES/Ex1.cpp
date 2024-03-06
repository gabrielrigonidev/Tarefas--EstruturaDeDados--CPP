#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int matrizA[4][4];
	int somaA=0;
	int total;
	
	for(int i= 0; i<4; i++){
		for(int j= 0; j<4; j++){
		cout << "Insira um valor na matriz " << i << " " << j << ": ";
		cin>> matrizA[i][j];

            if(i==j){
                somaA += matrizA[i][j];
            }
	    }
    }
    cout<< "Diagonal Principal: " << somaA <<endl;
	return 0;
}