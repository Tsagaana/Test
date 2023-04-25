#include <bits/stdc++.h>
using namespace std;
string multiplyTwoNumbers(string a, string b) {
   if (a == "0" || b == "0") {
      return "0";
   }
   string p(a.size() + b.size(), 0);
   for (int i = a.size() - 1; i >= 0; i--) {
      for (int j = b.size() - 1; j >= 0; j--) {
            int n = (a[i] - '0') * (b[j] - '0') + p[i + j + 1];
            p[i + j + 1] = n % 10;
            p[i + j] += n / 10;
      }
   }
   for (int i = 0; i < p.size(); i++) {
      p[i] += '0';
   }
   if (p[0] == '0') {
      return p.substr(1);
   }
   return p;
}
int main() {
	string a = "111111111111";
	string b = "2222222222222";

	cout << multiplyTwoNumbers(a, b);
   return 0;
}