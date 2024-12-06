#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(){
    scanf("%d %d", &n, &k);
    
    priority_queue<pair<int, string>> p;
    vector<string> t[k];
    
    for(int i = 0; i < n; i++){
       int l;
       char name[101];
       scanf("%s %d", name, &l);
       p.push(make_pair(l, string(name)));
    }
    
    int cur = 0;
    while(!p.empty()){
        t[cur].push_back(p.top().second);
        p.pop();
        cur = (cur+1)%k;
    }
    
    for(int i = 0; i < k; i++){
        sort(t[i].begin(), t[i].end());
        
        printf("Time %d\n", i+1);
        for(int j = 0; j < t[i].size(); j++){
            printf("%s\n", t[i][j].c_str());
        }
        printf("\n");
    }
    return 0;
}
