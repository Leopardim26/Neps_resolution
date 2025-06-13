#include <iostream>
using namespace std;

bool par(int n){
    return (n%2 == 0)? true : false;
}

int main(){
    int n;
    cin >> n;
    int m[n];
    for(int i = 0; i < n; ++i){
        cin >> m[i];
        if(par(m[i])) cout << m[i];
    }
    return 0;
}