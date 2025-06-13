#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    set<int> l;
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        if(l.find(a) == l.end()){
            l.insert(a);
        }
    }
    printf("%d", l.size());
    return 0;
}
