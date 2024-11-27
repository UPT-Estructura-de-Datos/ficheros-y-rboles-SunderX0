#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ofstream archivo("grupo.txt"); 
    if (!archivo) {
        cout << "Error al crear el archivo." << endl;
        return 1;
    }

    string nombre, seccion;

    cout << "Ingrese la informacion de las 3 personas del grupo:\n";
    for (int i = 1; i <= 3; i++) {
        cout << "Persona " << i << ":\n";
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Seccion: ";
        getline(cin, seccion);

        archivo << "Persona " << i << ":\n";
        archivo << "Nombre: " << nombre << endl;
        archivo << "Seccion: " << seccion << endl << endl;
    }

    archivo.close(); 

    cout << "\nLa informacion se guardo en el archivo 'grupo.txt'.\n";
    return 0;
}

