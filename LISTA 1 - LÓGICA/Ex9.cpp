#include <cstdlib>
#include <iostream>

using namespace std;

int main() { 

    double n1, n2, n3, n4;
    double menor, maior, media; 
    cout << "Digite o primeiro numero: "; 
    cin >> n1;
    menor = n1;
    maior = n1;
    cout << endl << "Digite o segundo numero: "; 
    cin >> n2; 

    if (n2 < menor) { 
        menor = n2; 
    } 
    else if (n2 > maior) { 
        maior = n2; 
    }

    cout << endl << "Digite o terceiro numero: "; 
    cin >> n3;

    if (n3 < menor) { 
        menor = n3; 
    } else if (n3 > maior) { 
        maior = n3; 
    } 

    cout << endl << "Digite o quarto numero: "; 
    cin >> n4; 

    if (n4 < menor) { 
        menor = n4; 
    } else if (n4 > maior) { 
        maior = n4; 
    } 
    media = (n1 + n2 + n3 + n4) / 4; 

    cout << endl << "Maior numero digitado: " << maior << endl; 
    cout << "Menor numero digitado: " << menor << endl; 
    cout << "Media artimetica dos numeros: " << media << endl; 
    return 0; 
} 