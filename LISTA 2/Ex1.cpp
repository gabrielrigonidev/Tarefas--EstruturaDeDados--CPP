#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{  
    int i,vet[10], x;
    i=0;
    
    do{
        cout<<"Digite um número \n";
        cin>>x;
        if(x>0){
               vet[i]=x;
               i++;
               }
        }
    while(i<10  && x>0);
    
    for(int y=0; y<i; y++)
            cout<<vet[y]*(-1)<<"\n";
    
    return 0;
}
