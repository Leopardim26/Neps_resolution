#include <iostream>
using namespace std;

int main(){
    long long l, n;
    cin >> l >> n;

    cout << (l-n+1)*(l-n+1)+n-1 << endl;
    return 0;
}