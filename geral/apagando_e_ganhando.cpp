#include <bits/stdc++.h>

using namespace std;

int n, d;
string ans, digit;

int main(){
    while(cin >> n >> d){
        if(n == 0 && d == 0) return 0;
        
        cin >> digit;
        
        int erased = 0;
        for(char cur : digit){
            while(ans.size() > 0 && cur > ans.back() && erased < d){
                ans.pop_back();
                erased++;
            }
            
            if(ans.size() < n-d) ans.push_back(cur);
        }
        
        cout << ans << '\n';
        
        ans.clear();
        digit.clear();
    }
    
    return 0;
}
