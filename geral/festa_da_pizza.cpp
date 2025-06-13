#include <iostream>
using namespace std;

#define MAX 200100

long long f[MAX];

int main(){
    int n, q;
    cin >> n >> q;

    for(int i = 0; i < q; ++i){
        int a, b;
        cin >> a >> b;
        
        f[b] += 1;
        f[(b + a) % n] -= 1;

        if ((b + a) % n <= b) {
            f[0] += 1;
        }
    }

    long long atual = 0;
    for (int i = 0; i < n; ++i) {
        atual += f[i];
        cout << atual + 1 << " ";
    }
    return 0;
}