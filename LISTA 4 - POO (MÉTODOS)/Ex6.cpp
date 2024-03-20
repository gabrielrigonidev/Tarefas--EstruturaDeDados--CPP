#include <iostream>
using namespace std;

int soma (int a, int b);
int quad (int c);
int somaquad (int d, int e);
//----------------------------------------------------------------------
int main(){
    int x, y;
    cout << "Digite: " << endl;
    cin >> x >> y;
    cout << "Soma dos quadrados dos números: " << somaquad(x,y) << endl;
    return 0;
}
//----------------------------------------------------------------------
    int soma (int a, int b){
        return a+b;
    }
    
    int quad (int c){
        return c*c; 
    }
    
    int somaquad (int d, int e){
        return soma(quad(d), quad(e));
    }
