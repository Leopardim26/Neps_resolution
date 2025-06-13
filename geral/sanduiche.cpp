#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int N, D;
    scanf("%d %d", &N, &D);
    
    vector<int> V(N);
    for(int i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }
    
    int ans1 = 0, l = 0, r = 0, soma = 0;
    while(l < N){
        while(r < N && soma + V[r] <= D){
            soma += V[r];
            r++;
        }
        if(soma == D) ans1++;    
        soma -= V[l];
        l++;
    }
    
    vector<int> P(N), S(N);
    int acc = 0;
    for(int i = 0; i < N; i++){
        acc += V[i];
        P[i] = acc; 
    }
    acc = 0;
    for(int i = N-1; i >= 0; i--){
        acc += V[i];
        S[i] = acc;
    }
    
    int ans2 = 0;
    map<int, int> Suf;
    for(int i = N-2; i >= 0; i--){
        Suf[S[i+1]] += 1;
        if(P[i] > D) continue;
        ans2 += Suf[D - P[i]];
    }
    
    printf("%d", ans1 + ans2);
    return 0;
}
