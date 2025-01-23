/******************************************************************************

Codigo donde se introduce una serie de numeros y
el ordenador cuenta cuantos son positivos

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int numero,contador_Positivos = 0;
    
    cout << "Introduce una serie de numeros (para terminar ingresa 0): " << endl;
    
    do {
        cout << "Numero: ";
        cin >> numero;
        
        if(numero>0){
            contador_Positivos++;
        }
    } while (numero != 0);
    
    cout << "cantidad de positivos: " << contador_Positivos << endl;

    return 0;
}