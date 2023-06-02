#include <iostream>

using namespace std;

double calculatePi(int iter) {
    double appPi = 0.0;
    double d = 1.0;
    int s = 1;

    for (int i = 0; i < iter; ++i) {
        appPi += s / d;
        d += 2;
        s *= -1;
    }

    return appPi * 4;
}

int main() {
    int iter = 1000000; // Número de iteraciones para calcular el valor exacto de pi
    double vpi = calculatePi(iter);
    int ld;

    cout << "Ingrese la cantidad de decimales de pi que desea mostrar en pantalla: ";
    cin >> ld;

    cout.precision(ld); // Indica con cuántos decimales se mostrará el valor de pi en la consola
    cout << "Haciendo " << iter << " iteraciones, el valor de pi mostrando " << ld - 1 << " decimales es: " << vpi << endl;

    return 0;
}
