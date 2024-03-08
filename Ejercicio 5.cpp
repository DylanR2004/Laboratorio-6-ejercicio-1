//Ejercicio 5
#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anoLanzamiento;
public:
    Pelicula(string t, string d, int ano) : titulo(t), director(d), anoLanzamiento(ano) {}

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de lanzamiento: " << anoLanzamiento << endl;
    }
};

int main() {
    Pelicula pelicula1("Pulp Fiction", "Quentin Tarantino", 1994);
    pelicula1.mostrarInformacion();
    
    return 0;
}

