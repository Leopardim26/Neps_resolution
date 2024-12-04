#include <iostream>
#include <queue>
#include <utility>
#define MAX 1123
#define F first
#define S second
using namespace std;
typedef pair<int, int> xy;

int toca[MAX][MAX];
int dist[MAX][MAX];
int a, b;

void bfs(int y, int x){
    queue<xy> q;
    for(int i = 0 ; i < a; i++)
        for(int j = 0; j < b; j++)
            dist[i][j] = -1;
    dist[y][x] = 1;
    q.push({y, x});
    while(q.size()){
        y = q.front().F;
        x = q.front().S;
        q.pop();
        if(y>0 && toca[y-1][x]!= 0 && dist[y-1][x] == -1){
            dist[y-1][x] = dist[y][x] + 1;
            q.push({y-1, x});
        }
        if(x>0 && toca[y][x-1]!= 0 && dist[y][x-1] == -1){
            dist[y][x-1] = dist[y][x] + 1;
            q.push({y, x-1});
        }
        if(y<a-1 && toca[y+1][x]!= 0 && dist[y+1][x] == -1){
            dist[y+1][x] = dist[y][x] + 1;
            q.push({y+1, x});
        }
        if(x<b-1 && toca[y][x+1]!= 0 && dist[y][x+1] == -1){
            dist[y][x+1] = dist[y][x] + 1;
            q.push({y, x+1});
        }
    }
}

int main(){
    cin >> a >> b;
    
    for(int i = 0; i < a; i++){
        for(int e = 0; e < b; e++){
            cin >> toca[i][e];
        }
    }
    
    for(int i = 0; i < a; i++){
        for(int e = 0; e < b; e++){
            if(toca[i][e] == 2) bfs(i,e);
        }
    }
    
    for(int i = 0; i < a; i++){
        for(int e = 0; e < b; e++){
            if(toca[i][e] == 3) cout << dist[i][e];
        }
    }

    return 0;     
}
