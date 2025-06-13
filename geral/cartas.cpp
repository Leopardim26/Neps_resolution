#include <iostream>

using namespace std;

int main(){
    int c[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &c[i]);
    }

    if(c[0] == c[1]) printf("%d", c[2]);
    if(c[0] == c[2]) printf("%d", c[1]);
    if(c[2] == c[1]) printf("%d", c[0]);
    return 0;
}
