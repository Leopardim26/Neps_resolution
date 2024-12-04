#include <iostream>

using namespace std;

int main(){
    int a, b = 0;
    cin >> a;

    char c[a], d[a];
    for(int i = 0; i < a; i++){
        cin >> c[i];
    }
    for(int i = 0; i < a; i++){
        cin >> d[i];
    }

    for(int i = 0; i < a; i++){
        if(c[i] == d[i]) b++;
    }
    cout << b;
    
    return 0;
}
