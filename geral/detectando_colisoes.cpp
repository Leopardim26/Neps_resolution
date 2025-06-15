#include <iostream>
#include <utility>
using namespace std;

#define x first
#define y second

struct rect{
    pair<int,int> l_i, d_s;
};

int main(){
    rect a, b;
    cin >> a.l_i.x >> a.l_i.y >> a.d_s.x >> a.d_s.y;
    cin >> b.l_i.x >> b.l_i.y >> b.d_s.x >> b.d_s.y;

    if( a.l_i.x > b.d_s.x ||
        a.d_s.x < b.l_i.x ||
        a.l_i.y > b.d_s.y ||
        a.d_s.y < b.l_i.y){

        cout << '0' << endl;
    }else{
        cout << '1' << endl;
    }
    return 0;
}