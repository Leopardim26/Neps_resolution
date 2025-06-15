#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> c;
vector<float> ans;

float obis(float n){
    return ((n<0)? -n : n);
}

int main(){
    int t, n;
    cin >> t >> n;

    for(int i = 0; i < n; ++i){
        int aux = 0;
        cin >> aux;
        c.push_back(aux);
    }
    sort(c.begin(), c.end());

    for(int i = 0; i < n; ++i){
        float a = 0;
        a += obis(c[i]-((i==n-1)? t : c[i+1]))/((i==n-1)? 1 : 2);
        a += obis(c[i]-((i==0)? 0 : c[i-1]))/((i==0)? 1 : 2);
        ans.push_back(a);
    }
    sort(ans.begin(), ans.end());

    printf("%.2f\n", ans[0]);

    return 0 ;
}