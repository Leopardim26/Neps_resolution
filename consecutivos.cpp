#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> values(N);
    for (int i = 0; i < N; i++) {
        std::cin >> values[i];
    }

    int max_points = 1; // Inicialmente, o máximo é 1 (pois há pelo menos um valor)
    int current_count = 1; // Contador para a sequência atual

    for (int i = 1; i < N; i++) {
        if (values[i] == values[i - 1]) {
            // Incrementa a contagem da sequência atual
            current_count++;
        } else {
            // Atualiza o máximo e reseta a contagem
            max_points = std::max(max_points, current_count);
            current_count = 1;
        }
    }

    // Atualiza o máximo após o loop, para incluir a última sequência
    max_points = std::max(max_points, current_count);

    std::cout << max_points << std::endl;

    return 0;
}
