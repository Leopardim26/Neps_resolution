#include <bits/stdc++.h> 
using namespace std;

char isLetra(char c){
    return (c >= 'A' && c <= 'Z');
}
char isNum(char c){
    return (c >= '0' && c <= '9');
}
char isHifen(char a){
    return (a == '-');
}

int main()
{
    string a;
    cin >> a;
    
    int b = a.length();
    char c[b];
    strcpy(c, a.c_str());
    
    if(b == 8){
        if(isLetra(c[0]) && isLetra(c[1]) && isLetra(c[2]) && isHifen(c[3]) && isNum(c[4]) && isNum(c[5]) && isNum(c[6]) && isNum(c[7])){
            cout << 1;
        }else{
            cout << 0;
        }
    }else if(b == 7){
        if(isLetra(c[0]) && isLetra(c[1]) && isLetra(c[2]) && isNum(c[3]) && isLetra(c[4]) && isNum(c[5]) && isNum(c[6])){
            cout << 2;
        }else{
            cout << 0;
        }
    }else{
        cout << 0;
    }
    
    return 0;
}
