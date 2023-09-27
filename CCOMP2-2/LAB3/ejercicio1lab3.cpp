#include <iostream>

bool Primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { //reduce la cantidad de iteraciones necesarias para determinar si un numero es primo
        if (num % i == 0) {
            return false;
        }
    }
    return true; //si no se encontró ningún divisor, la función devuelve true
}

int main() {
    int n;
    std::cout << "Ingrese un número: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "No hay números primos para mostrar." << std::endl;
        return 1;
    }

    std::cout << "Los números primos hasta " << n << " son:" << std::endl;

    for (int i = 2; i <= n; i++) {
        if (Primo(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
