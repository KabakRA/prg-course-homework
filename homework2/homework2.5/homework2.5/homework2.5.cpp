#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A + B > C && B + C > A && A + C > B) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}