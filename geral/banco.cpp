#include <bits/stdc++.h>
using namespace std;

int b, c;

int main(){
    scanf("%d %d", &b, &c);
    
    if(b >= c){
        printf("%d", 0);
        return 0;
    }
    
    priority_queue<int, vector<int>, greater<int>> box;
    int tempo = 0, ans = 0, t, d;
    for(int i = 0; i < b; i++){
        scanf("%d %d", &t, &d);
        box.push(t+d);
    }
    
    for(int i = b; i < c; i++){
        scanf("%d %d", &t, &d);
        
        tempo = box.top();
        box.pop();
        
        if(tempo - t > 20) ans++;
        
        box.push(max(tempo, t) + d);
    }
    
    printf("%d\n", ans);
    return 0;
}
