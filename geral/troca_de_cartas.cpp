#include <iostream>
using namespace std;
#define MAX 100005

int C[MAX][2];

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    
    int r;
    for(int i = 0; i < A; i++){
        scanf("%d", &r);
        C[r][0] = 1;
    }
    for(int i = 0; i < B; i++){
        scanf("%d", &r);
        C[r][1] = 1;
    }
    
    int ans1 = 0, ans2 = 0;
    for(int i = 1; i < 100000; i++){
        if(C[i][0] == 1 && !C[i][1]) ans1++;
        if(C[i][1] == 1 && !C[i][0]) ans2++;
    }
    
    printf("%d\n", min(ans1,ans2));
    return 0;
}
