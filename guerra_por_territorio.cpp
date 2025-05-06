#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int a[n], m0 = 0, m1 = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        m0 += a[i];
    }

    for(int i = 0; i < n; ++i){
        m0 -= a[i];
        m1 += a[i];
        if(m0 == m1){
            printf("%d", i+1);
            break;
        }
    }

    return 0;
}