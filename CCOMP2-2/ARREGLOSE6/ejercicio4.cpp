// Implementar la suma de los valores en recursividad
#include <iostream>
using namespace std;

int sumar(const int array[], const int tam) {
    long sum = 0;
    //for (int i = 0; i < tam; sum += arr[i++])
    int i = 0;
    while(i < tam){
        sum += array[i++];
    return sum;
}
int sumar_recursivo(const int arr[], int tam){
    if (tam < 0)
        return 0;
    else
        return arr[tam-1] + sumar_recursivo(arr, tam-1);
        /**
         * tam = 4 arr[3] + sumar_recursivo(arr, 3)
         * tam = 3         arr[2] + sumar_recursivo(arr, 2)
         * tam = 2              arr[3] + sumar_recursivo(arr, 3)
         * */
}

void imprimir(const int arr[], int tam){
    for (int i=0; i < tam; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}

void imprimir_rec(const int arr[], int tam, int i = 0){
    if(tam == 0)
        return;
    
    
    cout << arr [1] << " "; 
    imprimir_rec(arr, tam-1, ++i)

}

int main(){ // imprimir con recursivo
    int tam = 4;
    int arr[4] = {1, 2, 3, 4};
    cout << sumar(arr, tam) << endl;
    cout << sumar_recursivo(arr, tam) << endl;

    return 0;
}

}