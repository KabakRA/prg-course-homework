#include <iostream>
using namespace std;
int main() {
	int V, T;
	cin >> V >> T;
	if (V < 0) {
		cout << V * T % 109 + 109 << endl;
	}
	else {
		cout << V * T % 109 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}