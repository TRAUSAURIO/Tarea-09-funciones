// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Evaluación de expresiones con valores iniciales.

#include <iostream> 
using namespace std; 

int main() {
    int x = 5;
    int y = 0;
    int resultado_a = (x == 5 && y != 0);
    cout << "Resultado de la expresión a: " << resultado_a << endl; 

    int n = 90;
    int resultado_b = !(n >= 1 && n <= 100);
    cout << "Resultado de la expresión b: " << resultado_b << endl;  

    int num = 10;
    double resultado_c = (3.14159 * num - (num * 2) / 3.0);
    cout << "Resultado de la expresión c: " << resultado_c << endl; 

    int p = 15;
    int q = 20;
    int resultado_d = (p == 15 || q > 20);
    cout << "Resultado de la expresión d: " << resultado_d << endl;  

    p = 2;
    q = 1;
    int resultado_e = (p != 2 || q == 5);
    cout << "Resultado de la expresión e: " << resultado_e << endl;  

    return 0;
}

