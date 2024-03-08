//Ejercicio 3
#include <iostream>

using namespace std;

class Calculadora {
private:
    double numero1;
    double numero2;
public:
    Calculadora(double n1, double n2) : numero1(n1), numero2(n2) {}

    double sumar() {
        return numero1 + numero2;
    }

    double restar() {
        return numero1 - numero2;
    }

    double multiplicar() {
        return numero1 * numero2;
    }

    double dividir() {
        if (numero2 != 0)
            return numero1 / numero2;
        else {
            cout << "Error: Division por cero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculadora calc(10, 5);
    cout << "Suma: " << calc.sumar() << endl;
    cout << "Resta: " << calc.restar() << endl;
    cout << "Multiplicacion: " << calc.multiplicar() << endl;
    cout << "Division: " << calc.dividir() << endl;
    
    return 0;
}

