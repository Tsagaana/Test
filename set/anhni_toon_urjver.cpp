#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
#define F first
#define S second
#define pb push_back

using namespace std;

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
bool is_Prime(int n) {
	srand(time(NULL));
	for (int i = 1; i <= 500; i++) {
		int a = ((rand() % 10000) * (rand() % 10000) * (rand() % 10000) + (rand() % 10000)) % n;
		if (a == 0) continue ;
		int x = fastpow(a, n - 1, n);
		if (x % n != 1) return 0;
	}
	return 1;
}
int sq;
int go (int n, int a) {
	int x = a, y = 1;
	while (n % x == 0) {
		y++; x *= a;
	}
	return y - 1;
}
void solve() {
	int n; cin >> n;
	if (is_Prime(n)) {cout << n << " " << 1; return ;}
	if (n > 999999000000) sq = 1000000;
	else sq = sqrt(n);
	while (n > 1) {
		if (n % 2 == 0) {
			int x = go(n, 2); cout << 2 << " " << x << endl;
			x = pow(2, x); n /= x;
			if (n == 1) break ;
			if (is_Prime(n)) {cout << n << " " << 1; return ;}
		}
		for (int i = 3; i <= sq; i += 2) {
			if (n % i == 0) {
				int x = go(n, i); cout << i << " " << x << endl;
				x = pow(i, x); n /= x;
				if (n == 1) break ;
				if (is_Prime(n)) {cout << n << " " << 1; return ;}
			}
		}
	}
}
signed main(){IOS solve(); return 0;}