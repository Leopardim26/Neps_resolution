#include <iostream>
#include <vector>
using namespace std;

#define MAX 10010

int dist[MAX];
vector<int> o[MAX];

void dfs(int start, int inicial, int d){
    dist[start] = d;
    for(auto i : o[start]){
        if(i != inicial) dfs(i, start, d+1);
    }
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < n; ++i){
        int x1, x2;
        cin >> x1 >> x2;
        o[x1-1].push_back(x2-1);
        o[x2-1].push_back(x1-1);
    }
    dfs(a-1, a-1, 0);

    cout << dist[b-1] << endl;

    return 0;
}