#include <iostream>
using namespace std;

int main(){
    int k, l;
    cin >> k >> l;

    --k, --l;

    if(k/2 == l/2) cout << "oitavas" << endl;
    else if(k/4 == l/4) cout << "quartas" << endl;
    else if(k/8 == l/8) cout << "semifinal" << endl;
    else if(k/16 == l/16) cout << "final" << endl;

    return 0;
}