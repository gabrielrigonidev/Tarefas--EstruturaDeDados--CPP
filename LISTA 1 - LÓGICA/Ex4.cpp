#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double baseMenor, baseMaior, h, area;
    
    cout << "Digite a Base Maior do Trapezio: ";
    cin >> baseMaior;

    if (baseMaior <= 0){
        cout << "Base maior Invalida";
        return 0;
    }
    cout << "Digite a Base Menor do Trapezio: ";

    cin >> baseMenor;
    if (baseMenor <= 0){
        cout << " Base Menor Invalida";
        return 0;
    }
    else if (baseMenor > baseMaior){
        cout << "Base Menor nao pode ser maior que a Base Maior";
        return 0;
    }

    cout << "Digite a altura do Trapezio: ";
    cin >> h;
    if (h <= 0){
        cout << "Altura Invalida";
        return 0;
    }
    
    area = (baseMenor + baseMaior) * h / 2;
    cout << "Area do Trapezio: " << area;
    return 0;
}