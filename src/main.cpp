#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto t = 0;
	auto c = 1;
	while (0 < n) {
		if (n < c) {
			c = 1;
		}

		n -= c;
		++c;
		++t;
	}

	cout << t;

	return 0;
}