#include <iostream>
using namespace std;
 
int calcPrimo (int x);
 
int main() {
    int num, resultado;
    cout << "*** Digite um valor: " << endl;
    cin >> num;
    resultado = calcPrimo(num);
    if (resultado == 1){
        cout << "É Primo";
    } else {
        cout << "Não é Primo";
    }
    return 0;
}
 
    int calcPrimo (int x){
        int c=0;
        for (int i=1; i<=x; i++){
            if (x%i == 0){
                c++;
            }
        }
        if (c == 2){
            return 1;
        } else {
            return 0;
        }
    }