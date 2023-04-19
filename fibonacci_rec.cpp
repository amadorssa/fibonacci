#include <iostream>

using namespace std;

int fibonacci();

int main() {
   
    // Mostrar menu de opciones al usuario
    cout << "Seleccione una opcion:" << endl;
    cout << "\t (1) Calcular n numero de Fibonacci" << endl;
    cout << "\t (2) Cacular el maximo de numeros de Fibonacci soportados por la memoria" << endl;

    int choice = 0;

    //Entrada de eleccion del usuario
    do {
        cout << "Ingrese una opción: ";
        cin >> choice;
    } while (choice < 1 || choice > 2);
    
    int n = 0;

    switch (choice) {
    case 1: //Calcular n numero de Fibonacci

        do { //Entrada del termino de Fibonacci a calcular
            cout << "Ingrese un el numero del termino de Fibonacci que deseas calcular: ";
            cin >> n;
        } while (n<0);

        cout << "El " << n << " número de Fibonacci es: " << fibonacci(n) << endl; //Impresion y llamada a la funcion para calcular el número de Fibonacci

        break;

    case 2:
        while (true) {
            int fib_max = fibonacci(n);
            if (fib_max < 0) {
                cout << "Se ha alcanzado el límite de memoria" << endl;
                break;
            }
            cout << "Fibonacci(" << n << ") = " << fib_max << endl;
            n++;
        } break;
    }

   return 0;
}

int fibonacci(int n) {
   if (n <= 1) {
      return n;
   } else {
      return fibonacci(n-1) + fibonacci(n-2); //Llamada recursiva de la función
   }
}