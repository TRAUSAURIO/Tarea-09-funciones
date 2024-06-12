// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Imprimir las 20 primeras tablas de multiplicar.


#include <iostream> 
using namespace std; 

//DOCUMENTE LA FUNCION
//FALTA LA FUNCIÓN TABLA DE MULTIPLICAR CREADA EN CLASES.

void tablas_multiplicar_20() {
    for (int n = 1; n <= 20; ++n) {
        cout << "Tabla del " << n << endl;
        for (int i = 1; i <= 10; ++i) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
        cout << endl;
    }
}

int main() {
    tablas_multiplicar_20();  
    return 0;
}
