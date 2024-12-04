#include <iostream>
using namespace std;
#include <vector>
#define MAX 1000

vector <int> adj[MAX];
bool vis[MAX];

void dfs(int a){
    vis[a] = true;
    for(int i = 0; i < adj[a].size(); i++){
        if(!vis[adj[a][i]]){
            dfs(adj[a][i]);
        }
    }
}

int main(){
    
    int a, b;
    cin >> a >> b;
    
    int c, d;
    for(int i = 0; i < b; i++){
        cin >> c >> d;
        adj[c-1].push_back(d-1);
        adj[d-1].push_back(c-1);
    }
    
    dfs(0);
    int n = 1;
    for(int i = 0; i < a; i++){
        if(!vis[i]){
            n+=1;
            dfs(i);
        }
    }
    cout << n <<endl;
    
    return 0;
}
