#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A >= B && A >= C) {
		cout << A << endl;
	}
	else {
		if (B >= C) {
			cout << B << endl;
		}
		else {
			cout << C << endl;
		}
	}
		
	cin.get();
	cin.get();
	return 0;
}