#include <bits/stdc++.h>

using namespace std;

#define maxn 100010
#define INF 0x3f3f3f3f
	
vector <int> v;

void ord(vector <int> &v) {
	if(v.size() == 1) return;
	
	vector <int> p1, p2;
	
	for(int i=0; i<v.size()/2; i++) p1.push_back(v[i]);
	for(int i=v.size()/2; i<v.size(); i++) p2.push_back(v[i]);
	
	ord(p1);
	ord(p2);
	
	p1.push_back(-INF);
	p2.push_back(-INF);
	
	int m1=0, m2=0;
	
	for(int i=0; i<v.size(); i++) {
		if(p1[m1] >= p2[m2]) {
			v[i] = p1[m1];
			m1++;
		}
		
		else {
			v[i] = p2[m2];
			m2++;
		}
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);	
	}

	ord(v);

	for(int i=0; i<n; i++) {
		cout << v[i] << " ";
	}
return 0;
}
