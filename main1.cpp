#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaraci�n de variables
    string nombres, apellidos, fechaNacimiento, opcion;
    int dni, edad;

    // Mostrar interfaz
    cout << "REGISTRAR ESTUDIANTE" << endl << endl;

    cout << "Nombres: ";
    getline(cin, nombres);

    cout << "Apellidos: ";
    getline(cin, apellidos);

    cout << "Fecha de Nacimiento (dd/mm/aaaa): ";
    getline(cin, fechaNacimiento);

    cout << "DNI: ";
    cin >> dni;

    cout << "Edad: ";
    cin >> edad;

    cin.ignore(); // Limpiar buffer antes de usar getline nuevamente

    // Mostrar la informaci�n registrada
    cout << endl << "Informaci�n del Estudiante" << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "DNI: " << dni << endl;
    cout << "Edad: " << edad << endl << endl;

    // Simulaci�n del bot�n Guardar
    cout << "�Desea guardar la informaci�n? (si/no): ";
    getline(cin, opcion);

    if (opcion == "si" || opcion == "SI" || opcion == "Si") {
        cout << "Informaci�n guardada exitosamente." << endl;
    } else {
        cout << "Operaci�n cancelada." << endl;
    }

    // Regresar al men�
    cout << "Regresando al men�..." << endl;

    return 0;
}
