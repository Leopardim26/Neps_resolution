#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int med_p = 0, med_h = 0;
    for(int i = 0; i < n; ++i){
        int p, h;
        cin >> p >> h;
        med_p += p;
        med_h += h;
    }
    med_p /= n, med_h /= n;
    
    if(med_p < med_h){
        cout << ":0 <- Gohan e Feijao" << endl;
    }else if(med_p > med_h){
        cout << ":0 <-X- Gohan e Feijao" << endl;
    }else{
        cout << "Ïmpasse" << endl;
    }

    return 0;
}