#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B && A == C) {
		cout << '3' << endl;
	}
	else {
		if (A != B && A != C && B != C) {
			cout << '0' << endl;
		}
		else {
			cout << '2' << endl;
		}
	}
	cin.get();
	cin.get();
	return 0;
}