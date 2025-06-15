#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

vector<long long> l;
double ans[3];

double area(double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        long long aux;
        cin >> aux;
        l.push_back(aux);
    }
    sort(l.begin(), l.end());

    double a_max = 0;
    for(int i = 2; i < n; ++i){
        double a = double(l[i]), b = double(l[i-1]), c = double(l[i-2]);
        if(a < b+c){
            double area_t = area(a,b,c);
            if(a_max <= area_t){
                a_max = area_t;
                ans[0] = c;
                ans[1] = b;
                ans[2] = a;
            }
        }
    }

    for(int i = 0; i < 3; ++i){
        cout << int(ans[i]) << " ";
    }
   cout << endl;

    return 0;
}