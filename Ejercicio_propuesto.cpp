#include <iostream>
using namespace std;
int main (){

    // Primero se define la variable.
    int num1;

    // Pedimos el numero a evaluar.
    cout << "Ingresa un numero" << endl;
    cin >> num1;
    
    // Se evalua con "if" si es positivo, negativo o cero. Luego se muestra el mensaje.
    if (num1 > 0) {
        cout << "El numero es positivo" << endl;
    
    } else if (num1 < 0) {
        cout << "El numero es negativo" << endl;
    
    } else {
        cout << "El numero es cero" << endl;
    }
    // Se termina el código.
  return 0;

}   