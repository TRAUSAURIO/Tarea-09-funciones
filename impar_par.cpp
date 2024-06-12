// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Diseñe una función que determine si un número es par o impar.

#include <iostream> 
using namespace std; 

int es_par(int n) {
    if (n % 2 == 0)
        return 1; 
    else
        return 0; 
}

int main() {
    cout << "¿Es par el número 4? " << es_par(4) << endl;  
    cout << "¿Es par el número 7? " << es_par(7) << endl;  
    return 0;
}
