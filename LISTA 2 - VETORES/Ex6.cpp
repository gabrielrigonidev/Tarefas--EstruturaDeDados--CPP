#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
    int vet[10], aux;
    for(int i=0;i<10;i++){
        cout<<"Digite um numero: " << endl;
        cin>>vet[i];
    }  

    for(int i=0;i<10;i++){
        for(int j=i+1; j<10;j++){
            if(vet[i]>vet[j]){
                aux=vet[i];
               vet[i]=vet[j];
               vet[j]=aux;                                 
            }               
        }                
    }
    for(int i=0;i<10;i++){
        cout<<vet[i] << endl;
    }
    return 0;
}