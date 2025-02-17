#include <iostream>
using namespace std;

// Función para encontrar el número más grande en un vector
int encontrarMaximo(int numeros[], int tamano) {
    int maximo = numeros[0];
    for (int i = 1; i < tamano; ++i) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }
    return maximo;
}

int main() {
    // Declaración e inicialización del vector de números
    int numeros[] = {10, 25, 15, 30, 20};

    // Llamada a la función para encontrar el número más grande
    int maximo = encontrarMaximo(numeros, 5);

    // Imprimir el resultado
    cout << "El número más grande es: " << maximo << endl;
    cin.get();
    return 0;
}

