/**
 * @version 1.0
 * @date 21/01/2025
 * @author Gael Muñoz
 * @title Calculadora
 * @brief Calculadora con funciones breves
 */

#include <iostream>
using namespace std;

/**
 * @brief Punto de entrada principal del programa.
 * 
 * Este programa realiza operaciones matemáticas básicas entre dos números
 * ingresados por el usuario utilizando un operador (+, -, *, /).
 * 
 * @return int 0 en caso de ejecución exitosa.
 */
int main()
{
    /**
     * @brief Variables para almacenar los números ingresados y el resultado.
     */
    double numero, numero2, resultado;
    char operacion;

    /**
     * @brief Solicitar al usuario los valores y el operador matemático.
     * 
     * @code
     * // Ejemplo de entrada
     * cout << "Ingresa el primer número: ";
     * cin >> numero;
     * cout << "Ingresa el operador (+, -, *, /): ";
     * cin >> operacion;
     * cout << "Ingresa el segundo número: ";
     * cin >> numero2;
     * @endcode
     */
    cout << "Calculadora Básica" << endl;
    cout << "Ingresa el primer número: ";
    cin >> numero;

    cout << "Ingresa el operador (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingresa el segundo número: ";
    cin >> numero2;

    /**
     * @brief Evaluar el operador ingresado y realizar la operación correspondiente.
     * 
     * Se utiliza un `switch` para ejecutar diferentes operaciones según el operador.
     */
    switch (operacion) {
        case '+': ///< Realizar suma.
            resultado = numero + numero2;
            cout << "El resultado es: " << resultado << endl;
            break;

        case '-': ///< Realizar resta.
            resultado = numero - numero2;
            cout << "El resultado es: " << resultado << endl;
            break;

        case '*': ///< Realizar multiplicación.
            resultado = numero * numero2;
            cout << "El resultado es: " << resultado << endl;
            break;

        case '/': ///< Realizar división, con validación de división por cero.
            if (numero2 != 0) {
                resultado = numero / numero2;
                cout << "El resultado es: " << resultado << endl;
            } else {
                cout << "Error: División por cero no permitida." << endl;
            }
            break;

        default: ///< Manejar operadores no válidos.
            cout << "Operador no válido. Usa +, -, *, o /." << endl;
    }

    /**
     * @brief Finaliza el programa.
     */
    return 0;
}
