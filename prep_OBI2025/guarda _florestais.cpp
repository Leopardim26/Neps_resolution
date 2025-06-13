#include <iostream>
#include <vector>
using namespace std;

#define MAX 100100

vector<int> v[MAX];
bool vis[MAX];
int ans;

void dfs(int n){
    vis[n] = true;
    for(int i : v[n]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int aux1, aux2;
        cin >> aux1 >> aux2;
        v[aux1-1].push_back(aux2-1);
        v[aux2-1].push_back(aux1-1);
    }

    int c = 0;
    for(int i = 0; i  < n; ++i){
        if(!vis[i]){
            dfs(i);
            c++;
        }
    }

    cout << m - n + c;

    return 0;
}