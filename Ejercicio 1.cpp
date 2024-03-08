//Ejercicio 1
#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;
public:
    Libro(string t, string a, int ano) : titulo(t), autor(a), anioPublicacion(ano) {}

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anioPublicacion << endl;
    }
};

int main() {
    Libro libro1("El senior de los anillos", "J.R.R. Tolkien", 1954);
    libro1.mostrarInformacion();
    
    return 0;
}


