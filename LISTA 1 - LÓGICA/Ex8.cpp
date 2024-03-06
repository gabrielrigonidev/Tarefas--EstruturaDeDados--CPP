#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int angA, angB, angC, verTr;
    cout << "Digite o valor do primeiro angulo: ";
    cin >> angA;
    cout << "Digite o valor do segundo angulo: ";
    cin >> angB;
    cout << "Digite o valor do terceiro angulo: ";
    cin >> angC;
    verTr = angA + angB + angC;

    if (verTr > 180){
        cout << "A soma dos angulos nao gera um triangulo";
    }
    else if (angA == angB && angA == angC){
        cout << "Triangulo Equilatero";
    }
    else if (angA == angB || angA == angC || angB == angC){
        cout << "Triangulo Isosceles";
    }
    else if (angA != angB && angA != angC && angB != angC){
        cout << "Triangulo Escaleno";
    }
    return 0;
}