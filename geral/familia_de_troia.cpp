#include <iostream>
#include <vector>
using namespace std;

#define MAX 500100

vector<int> g[MAX];
bool vis[MAX];

void dfs(int n){
    vis[n] = true;
    for(auto i : g[n]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(!vis[i]){
            ++ans;
            dfs(i);
        }
    }

    cout << ans << endl;
    return 0;
}