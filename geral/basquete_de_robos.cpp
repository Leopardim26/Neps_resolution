#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D; // Leitura da distância do robô

    if (D <= 800) {
        cout << 1 << endl; // Cesta vale 1 ponto
    } else if (D <= 1400) {
        cout << 2 << endl; // Cesta vale 2 pontos
    } else {
        cout << 3 << endl; // Cesta vale 3 pontos
    }

    return 0;
}
