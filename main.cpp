/*
* Trabajo Práctico N°2 "Numero par".
*
* Ferreyra, Maximiliano Gastón.
*
* Fecha: 20150418
*/

#include <iostream>

using std::cout;
using std::cin;

int main(){

    // Declaro una variable de tipo Integer.
    int num;

    // Pedimos un valor por consola.
    cout << "Ingrese un numero mayor a cero: ";

    // Extraemos y asignamos el valor ingresado a la variable entera.
    cin >> num;

    /*
    *   Calculamos si el resto o el valor de la variable es igual a 0.
    *   En caso afirmativo, enviamos un mensaje indicando que la misma es PAR.
    *   En caso contrario, informamos que es IMPAR.
    */
    cout << "El numero es: ";

    if (num % 2 == 0 || num == 0)
        cout << "Par";
    else
        cout << "Impar";

    return 0;

}
