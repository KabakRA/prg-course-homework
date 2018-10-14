#include <iostream>
using namespace std;
int main() {
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	if ((x1 <= x2) && (x1 <= x3)) {
		cout << x1<<" ";
		if (x2 <= x3) {
			cout << x2<<" "<<x3;
		}
		else {
			cout << x3<<" "<<x2;
		}
	}
	else {
		if ((x2 <= x1) && (x2 <= x3)) {
			cout << x2<<" ";
			if (x1 <= x3) {
				cout << x1<<" "<<x3;
			}
			else {
				cout << x3<<" "<<x1;
			}
		}
		else {
			cout << x3<<" ";
			if (x1 <= x2) {
				cout << x1<<" "<<x2;
			}
			else {
				cout << x2<<" "<<x1;
			}
		}
	}
	cin.get();
	cin.get();
	return 0;
}