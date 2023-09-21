#include <iostream>

bool esNumeroPerfecto(int numero) {
    int suma = 1; 
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            suma += i;
            if (i != numero / i) {
                suma += numero / i;
            }
        }
    }
    return suma == numero;
}

int main() {
    int n;
    std::cout << "Ingrese un número: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Ingrese un número válido" << std::endl;
        return 1;
    }

    std::cout << "Los primeros " << n << " números perfectos son:" << std::endl;

    int numero = 2; 
    int contador = 0;

    while (contador < n) {
        if (esNumeroPerfecto(numero)) {
            std::cout << numero << " ";
            contador++;
        }
        numero++;
    }

    std::cout << std::endl;

    return 0;
}


