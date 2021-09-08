#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// output 'n' letters of the alphabet which repeats back to 'a'
		char letter = 'a';
		for (int i = 0; i < n; i++) {
			cout << letter;
			letter++;
			if (letter > 'z') {
				letter = 'a';
			}
		}
		cout << '\n';
	}
	return 0;
}
