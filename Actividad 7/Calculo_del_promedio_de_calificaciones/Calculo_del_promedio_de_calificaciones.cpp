#include <iostream>
using namespace std;

// Función para calcular el promedio de calificaciones
float calcularPromedio(float notas[], int tamano) {
    float suma = 0;
    for (int i = 0; i < tamano; ++i) {
        suma += notas[i];
    }
    return suma / tamano;
}

int main() {
    // Declaración e inicialización del vector de calificaciones
    float calificaciones[] = {8.5, 7.2, 9.0, 6.8, 8.9};

    // Llamada a la función para calcular el promedio
    float promedio = calcularPromedio(calificaciones, 5);

    // Imprimir el resultado
    cout << "El promedio de calificaciones es: " << promedio << endl;
    cin.get();

    return 0;
}
