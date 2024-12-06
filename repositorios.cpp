#include <bits/stdc++.h>
using namespace std;

int c, n, p, v;

int main() {
    scanf("%d %d", &c, &n);

    map<int, int> inter;
    map<int, int> exe;

    // Lê os programas instalados na empresa
    for (int i = 0; i < c; i++) {
        scanf("%d %d", &p, &v);
        exe[p] = v; // Atualiza ou insere a versão instalada do programa
    }

    // Lê os programas disponíveis na internet
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p, &v);

        // Se o programa não está instalado ou a versão disponível é mais recente
        if (exe.find(p) == exe.end() || exe[p] < v) {
            // Atualiza para a maior versão disponível
            if (inter.find(p) == inter.end() || inter[p] < v) {
                inter[p] = v;
            }
        }
    }

    // Imprime os programas que precisam ser instalados
    for (auto itr = inter.begin(); itr != inter.end(); ++itr) {
        printf("%d %d\n", itr->first, itr->second);
    }

    return 0;
}
