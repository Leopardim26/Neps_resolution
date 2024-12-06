#include <iostream>
using namespace std;

int main(){
    int x, y;
    scanf("%d\n%d", &x, &y);
    if(x == 0 || y == 0) printf("%s", "eixos");
    if(x > 0 && y > 0) printf("%s", "Q1");
    if(x < 0 && y > 0) printf("%s", "Q2");
    if(x < 0 && y < 0) printf("%s", "Q3");
    if(x > 0 && y < 0) printf("%s", "Q4");
    return 0;
}
