#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v[10], a;
    vector<int> b;
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &a);
    int c = 0;
    for(int i = 0; i < 10; i++){
        if(a == v[i]){
            b.push_back(i);
            c += 1;
        }
    }
    if(c == 0){
        printf("%s", "Mia x");
    }else{
        printf("%d", c);
        for(int i = 0; i < b.size(); i++){
            printf("%d ", b[i]);
        }
    }
    return 0;
}
