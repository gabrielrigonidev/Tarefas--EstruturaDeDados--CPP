#include <iostream>

using namespace std;

int main() {
	
    int matrizA[2][3] = {{0}};
    int matrizB[3][2] = {{0}};
    
    cout << "Popule a matriz 2x3: " << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cin>>matrizA[i][j];
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            matrizB[j][i]= matrizA[i][j];
        }
    }

    cout << endl;

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout << matrizB[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}