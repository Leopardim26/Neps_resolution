#include <iostream>
#include <cstring>
#include <stack>
#define MAX 1000000
using namespace std;

char ret(char a) {
    if (a == '{' || a == '[' || a == '(') return 'a';
    if (a == '}') return '{';
    if (a == ')') return '(';
    if (a == ']') return '[';
    return 0; // Retorna 0 para caracteres inválidos
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[MAX];
        scanf("%s", s);
        stack<char> q;
        char a = 'S';

        for (int j = 0; s[j] != '\0'; j++) { // Evitar strlen para maior eficiência
            if (ret(s[j]) == 'a') {
                q.push(s[j]);
            } else {
                if (!q.empty() && ret(s[j]) == q.top()) {
                    q.pop();
                } else {
                    a = 'N';
                    break;
                }
            }
        }
        if (!q.empty()) a = 'N';
        printf("%c\n", a);
    }
    return 0;
}
