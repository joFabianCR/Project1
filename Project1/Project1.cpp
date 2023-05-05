#include <iostream>
#include <string>
using namespace std;

struct Prestamo {
    string nombreCliente;
    float monto;
    float tasaInteres;
    int plazo;
};

float cuota(Prestamo prestamo) {
    return (prestamo.monto * (prestamo.tasaInteres / 100)) / (1 - pow(1 + (prestamo.tasaInteres / 100), -prestamo.plazo));
}


int main() {
    Prestamo prestamo;
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, prestamo.nombreCliente);
    cout << "Ingrese el monto del préstamo: ";
    cin >> prestamo.monto;
    cout << "Ingrese la tasa de interés anual: ";
    cin >> prestamo.tasaInteres;
    cout << "Ingrese el plazo en meses: ";
    cin >> prestamo.plazo;

    //float cuota = (prestamo.monto * (prestamo.tasaInteres / 100)) / (1 - pow(1 + (prestamo.tasaInteres / 100), -prestamo.plazo));
    cout << "La cuota mensual es: " << cuota(prestamo) << endl;

    return 0;
}