#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<char> team;
    for(char i = 'A'; i <= 'P'; i++){
        team.push(i);
    }
    for(int i = 0; i < 15; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a > b){
            team.push(team.front());
            team.pop();
            team.pop();
        }else{
            team.pop();
            team.push(team.front());
            team.pop();
        }
    }
    printf("%c", team.front());
    return 0;
}
