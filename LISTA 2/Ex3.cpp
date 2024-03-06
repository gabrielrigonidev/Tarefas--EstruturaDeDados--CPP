#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    char v[10];
    int tam;
    cout<<"Digite o tamanho da palavra \n";
    cin>>tam;
    for(int i=0; i<tam; i++){
            cin>>v[i];
    }
     cout<<"\n";
     for(int i=tam-1; i>=0; i--){
         cout<<v[i];
     }
     cout<<"\n";
 
    return 0;
}