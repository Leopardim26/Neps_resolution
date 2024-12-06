#include <iostream>
using namespace std;

int fat(int a){
    if(a == 1 || a == 0){ 
        return 1;
    }else{
        return a*fat(a-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fat(n));
    return 0;
}
