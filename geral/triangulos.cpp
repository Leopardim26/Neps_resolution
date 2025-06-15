#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> l;

int main(){
    for(int i = 0; i < 3; ++i){
        int aux;
        cin >> aux;
        l.push_back(aux);
    }
    sort(l.begin(), l.end());
    int a = l[2], b = l[1], c = l[0];

    if(a < b+c && b < a+c && c < a+b){
        if(a*a == b*b + c*c) cout << 'r' << endl;
        if(a*a > b*b + c*c) cout << 'o' << endl;
        if(a*a < b*b + c*c) cout << 'a' << endl;
    }else{
        cout << 'n' << endl;
    }

    return 0;
}