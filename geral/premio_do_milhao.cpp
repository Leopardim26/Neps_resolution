#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    bool b = true;
    int c = 0, d = 0;
    while(b){
        d += a[c];
        c += 1;
        if(d >= 1000000 || c >= n) b = false;
    }
    
    printf("%d", c);
    
    return 0;
}
