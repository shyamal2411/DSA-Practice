#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
	int ans = 0;
	int x = 1;
	while (n > 0) {
		int y = n % 10; // y = lastdigit of n
		ans += x * y;
		x *= 2;
		n /= 10;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	cout << binaryToDecimal(n);
	return 0;
}