#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
#define F first
#define S second
#define pb push_back

using namespace std;

int x, y = 1;
map<int, int > a;
void solve() {
	for (int i = 2; i <= 1000; i++) {
		if (a[i] == 1) continue ;
		y *= i; x++; if (y > 1000000) {cout << x; return ;}
		for (int j = i * i; j <= 1000000; j += i) a[j] = 1;
	}
}
signed main(){IOS solve(); return 0;}