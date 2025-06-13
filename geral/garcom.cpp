#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    int c = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a[i], &b[i]);
        if(a[i] > b[i]) c += b[i];
    }

    printf("%d", c);
    
    return 0;
}
