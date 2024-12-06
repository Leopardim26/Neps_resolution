#include <iostream>

int main() {
    int A, B, C;
    
    // Lê os valores escolhidos por Alice, Beto e Clara
    std::cin >> A >> B >> C;
    
    // Verifica quem é o vencedor ou se não há vencedor
    if (A != B && A != C) {
        std::cout << "A" << std::endl; // Alice é a vencedora
    } else if (B != A && B != C) {
        std::cout << "B" << std::endl; // Beto é o vencedor
    } else if (C != A && C != B) {
        std::cout << "C" << std::endl; // Clara é a vencedora
    } else {
        std::cout << "*" << std::endl; // Não há vencedor
    }
    
    return 0;
}
