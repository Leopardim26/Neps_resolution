#include <iostream>
using namespace std;

int abs(float a){
    return ((a>=0)? a : -a);
}

int main(){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << abs(x1-x2) + abs(y1-y2) << endl;
    return 0;
}