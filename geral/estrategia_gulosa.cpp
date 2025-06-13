#include <iostream>

using namespace std;

int main(){
    int v;
    cin >> v;
    int coin = 0;
    int m[6] = {100, 50, 25, 10, 5, 1};
    for(int i = 0; i < 6; i++){
        while(v >= m[i]){
            coin += 1;
            v -= m[i];
        }
    }
    cout << coin;
    return 0;
}
