#include <stdio.h>
int main(){
    int b, c;
    scanf("%d%d", &b, &c);
    printf("%s", ((b+c)%2 == 0)? "Bino" : "Cino");
    
    return 0;
}
