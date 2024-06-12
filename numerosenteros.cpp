//Autor: Ronald Elian Hurtado Jama
//Fecha:11/06/2024
// Tema: Recibe un entero como parámetro y devuelve el cuadrado de ese entero.

#include <iostream>
using namespace std;

int cuadrado_entero(int n) {
    return n * n;
}

int main() {
    cout << cuadrado_entero(4) << endl;  
    cout << cuadrado_entero(7) << endl;  
    return 0;
}