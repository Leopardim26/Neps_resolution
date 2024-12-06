#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a;
    int b;
    for(int i = 0; i < n; i++){
        scanf("%d", &b);
        a.push_back(b);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
