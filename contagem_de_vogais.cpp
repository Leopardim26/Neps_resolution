#include <iostream>
using namespace std;

bool vogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ return 1;}
    else{ return 0;}
}

int main(){
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int a = 0;
    for(int i = 0; i < n; i++){
        if(vogal(s[i])) a += 1;
    }
    printf("%d", a);
    return 0;
}
