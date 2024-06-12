// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Diseñe funciones que calculan las cuatro operaciones aritméticas básicas.


#include <iostream> 
using namespace std; 
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int producto(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        cout << "División por cero no es posible" << endl;
        return 0.0;
    }
}

int main() {
    cout << suma(10, 5) << endl;       
    cout << suma(20, 30) << endl;      

    cout << resta(10, 5) << endl;      
    cout << resta(30, 20) << endl;     

    cout << producto(10, 5) << endl;   
    cout << producto(20, 3) << endl;   

    cout << division(10, 5) << endl;   
    cout << division(20, 0) << endl;   
    return 0;
}
