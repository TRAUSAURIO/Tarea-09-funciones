// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Diseñe la función que imprime una tabla de multiplicar.

#include <iostream> 
using namespace std; 

void tabla_multiplicar(int n) {
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    tabla_multiplicar(5); 
    return 0;
}
