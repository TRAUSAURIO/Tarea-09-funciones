// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Diseñe una función que genere números aleatorios y retorne su sumatoria.


#include <iostream> 
#include <cstdlib>  
#include <ctime>  
using namespace std; 

//DOCUMENTE LA FUNCION

int suma_num_aleatorios(int cantidad, int limite_inferior, int limite_superior) {
    srand(time(0)); 
    int suma = 0;
    for (int i = 0; i < cantidad; ++i) {
        int num_aleatorio = rand() % (limite_superior - limite_inferior + 1) + limite_inferior;
        suma += num_aleatorio;
    }
    return suma;
}

int main() {
    cout << suma_num_aleatorios(100, 45, 80) << endl;
    return 0;
}
