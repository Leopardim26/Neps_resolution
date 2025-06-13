#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a = 0;
    for(int i = 0; i < n; i++){
        int b;
        scanf("%d", &b);
        a += b;
    }
    printf("%d", a);
    return 0;
}
