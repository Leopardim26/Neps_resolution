#include <iostream>

using namespace std;

int main(){
    double A, B;
    cin >> A >> B;

    double med = (A+B)/2;

    if(med >= 7){
        cout << "Aprovado";
    }else if(med < 7 && med >= 4){
        cout << "Recuperacao";
    }else{
        cout << "Reprovado";
    }

    return 0;
}
