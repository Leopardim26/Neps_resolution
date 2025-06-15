#include <iostream>
using namespace std;

int main(){
    int n[4];
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    
    bool ans = false;
    for(int i = 0; i < 4; i++){
        if(n[i] < n[(i+1)%4]+n[(i+2)%4] && n[(i+1)%4] < n[(i+2)%4]+n[i] && n[(i+2)%4] < n[(i+1)%4]+n[i]) ans = true;
    }

    cout << ((ans)? "S" : "N") << endl;
    return 0;
}