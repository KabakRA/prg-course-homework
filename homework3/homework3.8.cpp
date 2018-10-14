#include <iostream>
using namespace std;
int main() {
	int N = -1, i = 0, x=0;
	while (N != 0) {
		cin >> N;
		if (N > i) {
			i = N;
			x = 1;
		}
		else {
			if (i==N) {
				x = x + 1;
			}
		}
	}
	cout << x;
	cin.get();
	cin.get();
	return 0;
}