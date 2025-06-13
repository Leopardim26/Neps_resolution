#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%c", (!a)?'C':(b? 'A':'B'));

    return 0;
}
