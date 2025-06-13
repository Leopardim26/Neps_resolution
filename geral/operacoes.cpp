#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operacao;
    double a, b;

    // Lê a operação
    cin >> operacao;

    // Lê os dois números
    cin >> a >> b;

    // Realiza a operação conforme solicitado
    if (operacao == 'M') {
        cout << fixed << setprecision(2) << a * b << endl;
    } else if (operacao == 'D') {
        cout << fixed << setprecision(2) << a / b << endl;
    }

    return 0;
}
