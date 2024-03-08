//Ejercicio 2
#include <iostream>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    string apellido;
    int edad;
    int curso;
public:
    Estudiante(string n, string a, int e, int c) : nombre(n), apellido(a), edad(e), curso(c) {}

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
    Estudiante estudiante1("Juan", "Perez", 20, 3);
    estudiante1.mostrarInformacion();
    
    return 0;
}

