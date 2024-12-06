#include <iostream>

using namespace std;

int main(){
    int v[10], n;
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &n);
    bool a = false;
    for(int i = 0; i < 10; i++){
        if(n == v[i]) a = true;
    }
    printf("%s", a? "SIM" : "NAO");

    return 0;
}
