#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Leitura dos tempos dos três nadadores
    int T1, T2, T3;
    cin >> T1 >> T2 >> T3;

    // Criar um vetor de pares para armazenar o tempo e o índice do nadador
    vector<pair<int, int>> times = {{T1, 1}, {T2, 2}, {T3, 3}};

    // Ordenar o vetor pelo tempo (primeiro elemento do par)
    sort(times.begin(), times.end());

    // O menor tempo é o ouro, o segundo menor é prata e o terceiro menor é bronze
    cout << times[0].second << endl; // Nadador com medalha de ouro
    cout << times[1].second << endl; // Nadador com medalha de prata
    cout << times[2].second << endl; // Nadador com medalha de bronze

    return 0;
}
