#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000

vector <int> adj[MAX];
bool vis[MAX];

void dfs(int a){
    vis[a] = true;
    for(int e = 0 ; e < adj[a].size(); e++){
        if(!vis[adj[a][e]]){
            dfs(adj[a][e]);
        }
    }
}

int main()
{
    int n = 0;
    while(true){
        n+=1;
        int a, b;
        cin >> a >> b;
        if((a + b) == 0) break;
    
        int c, d;
        for(int i = 0; i < b; i++){
            cin >> c >> d;
            adj[c-1].push_back(d-1);
            adj[d-1].push_back(c-1);
        }
        
        dfs(0);
        bool s = false;
        for(int i = 0; i < a; i++){
            if(!vis[i]){ 
                s = true;
            }
            vis[i] = false;
            adj[i].clear();
        }
        
        cout << "Teste " << n << endl;
        if(!s){
            cout << "normal" << endl;
        }else{
            cout << "falha" << endl;
        }
        cout << endl;
    }
    
    return 0;
}
