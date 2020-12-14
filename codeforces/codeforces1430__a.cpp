#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a = n / 3;
		int b = n / 5;
		int c = n / 7;

		int flag = 0;

		for (int i = 0; i <= a; i++) {
			for (int j = 0; j <= b; j++) {
				for (int k = 0; k <= c; k++) {
					if (3 * i + 5 * j + 7 * k == n) {
						flag = 1;
						cout << i << ' ' << j << ' ' << k << endl;
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}
			if (flag == 1) {
				break;
			}

		}

		if (flag == 0) {
			cout << -1 << endl;
		}
	}

}
