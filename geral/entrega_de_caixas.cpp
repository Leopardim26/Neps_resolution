#include <iostream>

using namespace std;

int main(){
    int c[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &c[i]);
    }

    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(i != 2){
            if(c[i] < c[i+1]){ continue;
            }else if(c[i]+c[i+1] < c[2]){
            ans++;
            break;
            }else{
            ans++;
            }
        }else{
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}
