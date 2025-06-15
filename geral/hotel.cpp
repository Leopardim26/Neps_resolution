#include <iostream>
using namespace std;

int main(){
    int d, a, n;
    cin >> d >> a >> n;

    int v = d + a*((n < 16)? n-1 : 15);

    cout << v * (31 - n + 1) << endl;

    return 0;
}