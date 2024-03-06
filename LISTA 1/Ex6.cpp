#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade >= 0 && idade <= 11)
    {
        cout << "Voce e Crianca!";
    }
    else if (idade >= 12 && idade <= 17)
    {
        cout << "Voce e Adolescente!";
    }
    else if (idade >= 18 && idade <= 49)
    {
        cout << "Voce e um Adulto!";
    }
    else if (idade >= 50)
    {
        cout << "Voce e um Idoso!";
    }
    return 0;
}