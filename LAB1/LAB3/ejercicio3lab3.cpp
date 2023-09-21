#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un número: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Ingrese un número válido." << std::endl;
        return 1;
    }

    int primero = 0;
    int segundo = 1;

    std::cout << "Los primeros " << n << " números de la secuencia de Fibonacci son:" << std::endl;

    for (int i = 1; i <= n; i++) {
        std::cout << primero << " ";

        int siguiente = primero + segundo;
        primero = segundo;
        segundo = siguiente;
    }

    std::cout << std::endl;

    return 0;
}