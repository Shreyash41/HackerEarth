#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {


	long long int x , n;
	cin >> x >> n;
    x = x%10;
	if (n <= 4) {

		int fact = 1;
		for (int i = 1; i <= n; ++i) {
			fact = fact * i;
		}

		fact = fact % 10;
		cout << (ll)pow(x , fact) % 10 << '\n';

	}
	else {
		cout << 1 << '\n';
	}

	return 0;
}
