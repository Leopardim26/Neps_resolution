#include <iostream>
#include <cstring> // Para usar strlen
using namespace std;

#define MAX 1000

int main() {
    char s[MAX];
    scanf("%[^\n]", s); // Lê a mensagem inteira, incluindo espaços
    int n = strlen(s);
    char r[MAX]; // Para armazenar a mensagem decodificada
    int a = 0;   // Índice para a mensagem decodificada

    for (int i = 0; i < n; i++) {
        if (s[i] == 'p') {
            // Ignorar o 'p', mas garantir que o próximo caractere seja copiado
            if (i + 1 < n) {
                r[a++] = s[i + 1];
                i++; // Pula para o próximo caractere
            }
        } else if (s[i] == ' ') {
            // Copiar espaços diretamente
            r[a++] = ' ';
        }
    }

    r[a] = '\0'; // Adicionar o caractere nulo para finalizar a string
    printf("%s\n", r);
    return 0;
}
