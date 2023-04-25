#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
#define F first
#define S second
#define pb push_back

using namespace std;

int n;

int fastpow(int a, int b, int n) {
  if (b == 0) return 1 % n;
  if (b % 2 == 0) {
    int r = fastpow(a, b / 2, n);
    return (r * r) % n;
  } else {
    int r = fastpow(a, b - 1, n);
    return (r * a) % n;
  }
}
void is_Prime(int n) {
	srand(time(NULL));
	for (int i = 1; i <= 1000; i++) {
		int a = ((rand() % 1000) * (rand() % 1000)) % n;
		if (a == 0) continue ;
		int x = fastpow(a, n - 1, n);
		if (x < 0) x = -x;
		if (x % n != 1) {cout << x << " Not Prime"; return ;}
	}
	cout << "Prime";
}
void solve() {
	cin >> n;
	is_Prime(n);
}
signed main(){IOS solve(); return 0;}