#include <iostream>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    int q = n/p;
    int r = n%p;

    for(int i = 0; i < r; ++i){
        cout << q+1 << endl;
    }

    for(int i = 0; i < p-r; ++i){
        cout << q << endl;
    }

    return 0;
}