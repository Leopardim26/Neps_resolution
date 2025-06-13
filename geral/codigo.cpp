#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int s[n];
    for(int i = 0; i < n; i++){ scanf("%d", &s[i]);}
    int r = 0;
    for(int i = 0; i < n-2; i++){
        if(s[i] == 1 && s[i+1] == 0 && s[i+2] == 0) r += 1;
    }
    printf("%d", r);
    return 0;
}
