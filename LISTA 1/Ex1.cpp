#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    double delta, x1,x2;
    
    cout<<"Digite 3 valores: " << endl;
    cin>>a>>b>>c;
    
    delta = (b*b) - (4*a*c);
    
    if(delta>0){  
        x1=-b + sqrt(delta) / (2*a);
        x2=-b - sqrt(delta) / (2*a);
        cout<< "Delta: " << delta << " | X1= "<<x1<<" | X2= "<< x2 << endl;
    }
    else if(delta==0){
        x1=-b/(2*a);
        cout<<"A raiz "<<x1<<"\n";
    }
    else{
        cout<<"Nao existe raiz\n";
    }

    return 0;
}