#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double b, h, area;
    cout << "Digite a Base do Triangulo: ";
    cin >> b;
    if (b <= 0){
        cout << "Base Invalida";
        return 0;
    }
    cout << "Digite a Altura do Triangulo: ";
    cin >> h;
    if (h <= 0){
        cout << "Altura Invalida";
        return 0;
    }
    area = (b * h) / 2;
    cout << "Area do Triangulo: " << area;
    return 0;
}