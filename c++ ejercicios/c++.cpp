/******************************************************************************

Hacer un programa que solicite una edad(entero) e indique 
si esta en el rango[18-25]Nota Edad>18

*******************************************************************************/
#include <iostream>


int main(){
    
    int edad;
    cout<<"Porfavor, ingresa tu edad: ";
    while(!(cin>>edad)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"El valor no es numerico.Porfavor ingresar valores numericos: ";
    }
    if (edad > 18 && edad <= 25){
        cout<<"estas dentro del rango de edad 18-25"<<endl;
    }else if (edad < 18){
        cout<<"Te falta para llegar al rango de 18 y 25"<<endl;
    }else if(edad > 25){
        cout<<"Pasas el rango de 18 a 25"<<end;
    }

    return 0;
}