/******************************************************************************
Haz una clase llamada password que siga las siguientes condiciones:

Que tenga los atributos longitud y contrasela

Por defecto la longitud sera de 8

Los constructores seran los siguientes:

-Un constructor por defecto

-Un constructor con la longitud que nosotros le pasemos, generara

una contraseña aleatoria con esa longitud

Los metodos que implementa seran:

-Generarpassword(): Genera la constraseña del objeto con la longitud que tenga

-Metodo get para constraseña y longitud

-Metodo set para longitud
*******************************************************************************/

#include <iostream>
#include <random>

using namespace std;

class Password {
private:
    int longitud;
    string contrasena;
    static constexpr char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

public:
    // Constructor por defecto
    Password() : longitud(8) {
        generarPassword();
    }

    // Constructor con longitud definida
    Password(int longi) : longitud(longi) {
        generarPassword();
    }

    // Método para generar la contraseña con mejor aleatoriedad
    void generarPassword() {
        contrasena.clear();
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(0, sizeof(caracteres) - 2);

        for (int i = 0; i < longitud; i++) {
            contrasena += caracteres[distrib(gen)];
        }
    }

    // Getters
    string getContrasena() const {
        return contrasena;
    }

    int getLongitud() const {
        return longitud;
    }

    // Setter para la longitud
    void setLongitud(int longi) {
        longitud = longi;
        generarPassword();
    }
};

// Definición de la constante fuera de la clase
constexpr char Password::caracteres[];

int main() {
    // Prueba de la clase
    Password pass1;
    cout << "Contraseña generada por defecto: " << pass1.getContrasena() << endl;

    Password pass2(12);
    cout << "Contraseña generada con longitud personalizada: " << pass2.getContrasena() << endl;

    pass2.setLongitud(16);
    cout << "Nueva contraseña tras cambiar longitud: " << pass2.getContrasena() << endl;

    return 0;
}
