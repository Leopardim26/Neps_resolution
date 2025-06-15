#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int ans = 0;
    while(n > 0){
        ++ans;
        n -= (n&-n);
    }

    cout << ans << endl;
    return 0;
}