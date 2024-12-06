#include <iostream>

using namespace std;

int main(){
    int s[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &s[i]);
    }

    if(s[1] != s[3]){
        if(s[0] == s[2]){
            printf("%d", 2);
        }else{
            printf("%d", 1);
        }
    }else{
        if(s[0] != s[2]){
            printf("%d", 1);
        }else{
            printf("%d", 0);
        }
    }

    return 0;
}
