#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> v;
    v.push_back(1);
    for(int i = 1; i <= n; i++){
        if(n%i == 0) v.push_back(i); 
    }
    for(int i = 1; i < v.size(); i++){
        printf("%d ", v[i]);
    }
    return 0;
}
