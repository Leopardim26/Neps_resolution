#include <iostream>
using namespace std;

int main(){
    int P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    int a = P1*C1;
    int b = P2*C2;
    if(a == b){
        printf("%d", 0);
    }else if(a > b){
        printf("%d", -1);
    }else{
        printf("%d", 1);
    }

    return 0;
}
