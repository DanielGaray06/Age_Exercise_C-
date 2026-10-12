#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 100000;
    double valor;

    cout << "===== CAJERO AUTOMATICO =====\n";
    cout << "Saldo inicial: $" << saldo <<"\n";
    cout << "1. Consignar dinero \n";
    cout << "2. Retirar dinero \n";
    cout << "Seleccione una opcion: \n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el valor a consignar: $";
            cin >> valor;

            if (valor > 0) {
                saldo = saldo + valor;
                cout << "Consignacion realizada correctamente. \n";
                cout << "Saldo final: $" << saldo << "\n";
            } else {
                cout << "El valor debe ser mayor que cero. \n" ;
            }
            break;

        case 2:
            cout << "Ingrese el valor a retirar: $";
            cin >> valor;

            if (valor <= 0) {
                cout << "El retiro debe ser mayor que cero. \n";
            } else if (valor <= saldo) {
                saldo = saldo - valor;
                cout << "Retiro realizado correctamente.\n";
                cout << "Saldo final: $" << saldo << "\n";
            } else {
                cout << "Saldo insuficiente. \n";
                cout << "Saldo disponible: $" << saldo << "\n";
            }
            break;

        default:
            cout << "Opcion no valida.";
    }

    return 0;
}
