// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Diseñe una función que devuelva la cantidad de cifras de un número entero.


#include <iostream> 
#include <cmath> 
using namespace std; 

int cantidad(int n) {
    if (n == 0) return 1; 
    int contador = 0;
    n = abs(n); 
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

int main() {
    cout << cantidad(123) << endl;    
    cout << cantidad(12300) << endl;  
    cout << cantidad(5660) << endl;   
    return 0;
}
