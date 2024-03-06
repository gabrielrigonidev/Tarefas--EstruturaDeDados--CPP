#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num % 2 == 0){
        cout << "Numero Par!";
    } else {
        cout << "Numero Impar!";
    }
    return 0;
}