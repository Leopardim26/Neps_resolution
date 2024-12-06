#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

bool tpp(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ return 0;
    }else if(c == 'b' || c == 'c' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'p' || c == 'q' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z'){ return 1;}
}

int main(){
    char s[50];
    scanf("%s", s);
    vector<char> c;
    vector<char> v;
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(tpp(s[i])){
            c.push_back(s[i]);
        }else{
            v.push_back(s[i]);
        }
    }
    printf("Vogais: ");
    for(int i = 0; i < v.size(); i++){
        printf("%c", v[i]);
    }
    printf("\nConsoantes: ");
    for(int i = 0; i < c.size(); i++){
        printf("%c", c[i]);
    }
    return 0;
}
