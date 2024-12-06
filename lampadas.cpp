#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int b = -1, c = -1;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 1){ 
            b *= -1;
        }else{
            c *= -1;
            b *= -1;
        } 
    }
    printf("%d \n%d", (b>0)? 1 : 0, (c>0)? 1 : 0);
    return 0;
}
