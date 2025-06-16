#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, d, e, f, g;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;

    n -= g;

    cout << ((a+b+c-d-e-f == n)? 'N' : 'S') << endl;

    return 0;
}