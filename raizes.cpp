#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    float s[n];
    for(int i = 0; i < n; i++){ scanf("%f", &s[i]);}
    for(int i = 0; i < n; i++){ printf("%.4f\n", sqrt(s[i]));}
    return 0;
}
