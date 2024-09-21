#include <iostream>
using namespace std;

int main() {
    int estacion;
    cout << "Ingrese un número del 1 al 4: ";
    cin >> estacion;
    
    if (estacion = 1 ) {
        cout << "Primavera" << endl;
    }else if (estacion = 2) {
        cout << "Verano" << endl;
    }else if(estacion = 3) {
        cout << "Otoño" << endl;
    }else if (estacion = 4){
        cout << "Invierno" << endl;
    }else if (estacion <= 0 && estacion > 4) {
        cout << "Valor fuera de límites" << endl;
    }
    return 0;
}