#include <iostream>
using namespace std;
 
// Declarar Método aqui:
int verificarBissexto (int x);
 
int main() {
    int ano, resultado;
    cout << "Digite um ano: " << endl;
    cin >> ano;
    resultado = verificarBissexto(ano);
    if (resultado == 1){
        cout << "É Bissexto";
    } else {
        cout << "Não é Bissexto";
    }
    return 0;
}
 
int verificarBissexto  (int x){
     if (x%4 == 0 && x%100 != 0 || x%400 == 0){
        return 1;
    } else {
        return 0;
    }
}