#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double l, h, area;
    cout << "Digite o Lado do Retangulo: ";
    cin >> l;
    if (l <= 0){
        cout << "Lado Invalido";
        return 0;
    }
    cout << "Digite a Altura do Retangulo: ";
    cin >> h;
    if (h <= 0){
        cout << "Altura Invalida";
        return 0;
    }
    area = l * h;
    cout << "Area do retangulo: " << area;
    return 0;
}