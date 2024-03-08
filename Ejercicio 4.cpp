//Ejercicio 4
#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;
public:
    CuentaBancaria(string nombre, string numero) : nombreTitular(nombre), numeroCuenta(numero), saldo(0) {}

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (saldo >= cantidad)
            saldo -= cantidad;
        else
            cout << "Saldo insuficiente." << endl;
    }

    double consultarSaldo() {
        return saldo;
    }
};

int main() {
    CuentaBancaria cuenta("Juan Perez", "123456789");
    cuenta.depositar(1000);
    cout << "Saldo actual: " << cuenta.consultarSaldo() << endl;
    cuenta.retirar(500);
    cout << "Saldo actual: " << cuenta.consultarSaldo() << endl;
    
    return 0;
}

