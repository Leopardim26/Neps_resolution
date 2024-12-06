#include <iostream>
using namespace std;
#define MAX 1000100

long long int v[MAX];
long long int f(int n){
    if(n > 2){
        if(v[n] != 0){
            return v[n];
        }else{
            v[n] = (f(n-1) + 4*f(n-2) + 2*f(n-3))%1000000007;
            return v[n];
        }
    }else if(n == 2){
        return 5;
    }else{
        return 1;
    }
}

int main(){
    int a;
    scanf("%d", &a);
    
    printf("%lld", f(a));
}
