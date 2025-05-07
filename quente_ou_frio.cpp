#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    if(n <= 2){
        printf("Fervendo");
    }else if(n <= 5){
        printf("Quente");
    }else if(n <= 10){
        printf("Morno");
    }else{
        printf("Frio");
    }
    return 0;
}