#include <iostream>
#include <vector>
using namespace std;

#define MAX 10010

int dist[MAX];
int gen_pres[MAX];
int gen_max[MAX];
int max_gen;
vector<int> f[MAX];

void dfs(int pos, int d){
    dist[pos] = d;
    max_gen = max(max_gen, d);
    for(auto i : f[pos]){
        if(dist[i] == -1) dfs(i, d+1);
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i < n+1; ++i){
        int x;
        cin >> x;
        f[x].push_back(i);
        f[i].push_back(x);
    }
    for(int i = 0; i < n+1; ++i) dist[i] = -1;
    dfs(0, 0);

    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        ++gen_pres[dist[x]];
    }

    for(int i = 1; i < n+1; ++i){
        ++gen_max[dist[i]];
    }

    for(int i = 1; i < max_gen+1; ++i){
        printf("%.2f ", double(gen_pres[i])/double(gen_max[i])*100);
    }
    cout << endl;
    return 0; 
}