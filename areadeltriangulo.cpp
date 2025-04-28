#include <iostream>

using namespace std;

int main() {
    int base, altura, resultado;
    cout << "Ingrese la medida de la base: "<< endl;
    cin >> base;
    cout << "Ingrese la medida de la altura: " << endl;
    cin >> altura;
    resultado = (base * altura) / 2;
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
