#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
    char v[10];
    int tam;

    cout << "Digite o tamanho da palavra" << endl;
    cin>>tam;
    
    for(int i=0; i<tam; i++){
            cin>>v[i];
    }
    cout << endl;

    for(int i=tam-1; i>=0; i--){
        cout<<v[i];
    }
    cout << endl;
    return 0;
}