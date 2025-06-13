#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%s", (x>0)? "positivo": ((x<0)? "negativo" : "nulo"));

    return 0;
}
