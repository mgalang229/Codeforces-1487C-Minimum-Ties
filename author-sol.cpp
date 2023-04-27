#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n;
	cin >> n;
	if (n % 2 == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (j - i <= n / 2)
					cout << "1 ";
				else
					cout << "-1 ";
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (j - i < n / 2)
					cout << "1 ";
				else if (j - i == n / 2)
					cout << "0 ";
				else
					cout << "-1 ";
			}
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
