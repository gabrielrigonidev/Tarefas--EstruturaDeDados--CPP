#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        cout << "O ano digitado e bissexto";
    }
    else{
        cout << "O ano nao e bissexto";
    }
    return 0;
}