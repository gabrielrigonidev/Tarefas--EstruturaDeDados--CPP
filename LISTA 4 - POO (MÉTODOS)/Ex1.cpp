#include <iostream>
using namespace std;

float calcCel (float f){
	return (f - 32)/1.8;
}


float calcFah (float c){
	return (c / 5 * 9 )+ 32;
}


int main() {
	float Fahrenheit, Celsius;
	int valor;

	cout << "*** Converte Celsius para Fahrenheit e vice-versa 1 ou 2 ***\n";
	cin >> valor;

	if (valor == 1){
		cout << "\nDigite os graus Fahrenheit: ";
		cin >> Fahrenheit;
		Celsius = calcCel (Fahrenheit);
		cout << "\nGraus Celsius: "<< Celsius <<"\n";
	} else {
		cout << "\nDigite os graus Celsius: ";
		cin >> Celsius;
		Fahrenheit = calcFah (Celsius);
		cout << "Graus Fahrenheit: "<< Fahrenheit;
	}
	return 0;
}