#include <iostream>

using namespace std;

int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    if(a > b){
        int c = b;
        b = a;
        a = c;
    }
    for(int i = a; i <= b; i++){
        printf("%d ", i);
    }
    return 0;
}
