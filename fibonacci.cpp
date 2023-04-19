#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingresa el numero de terminos que quieres calcular -->";
    cin >> n;

    int fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for(int i = 0; i < n; i++) {
        cout << "F(" << i << ") = " << fibonacci[i] << endl;
    }

    return 0;
}
