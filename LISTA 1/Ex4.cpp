#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double baseMenor, baseMaior, h, area;
    
    cout << "Digite a base maior do trapezio: ";
    cin >> baseMaior;
    if (baseMaior <= 0){
        cout << "Base maior Invalida";
        return 0;
    }
    cout << "Digite o tamanho da base menor do trapezio: ";

    cin >> baseMenor;
    if (baseMenor <= 0){
        cout << " Base menor Invalida";
        return 0;
    }
    else if (baseMenor > baseMaior){
        cout << "Base menor não pode ser maior que a base maior";
        return 0;
    }

    cout << "Digite o tamanho da altura do trapezio: ";
    cin >> h;
    if (h <= 0){
        cout << "Altura Invalida";
        return 0;
    }
    
    area = (baseMenor + baseMaior) * h / 2;
    cout << "Area do Trapezio: " << area;
    return 0;
}