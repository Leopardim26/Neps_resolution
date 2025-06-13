#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[50];
    scanf("%s\n", s);
    char c;
    scanf("%c", &c);
    int n = strlen(s);
    int r = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == c) r += 1;
    }
    printf("%d", r);
    return 0;
}
