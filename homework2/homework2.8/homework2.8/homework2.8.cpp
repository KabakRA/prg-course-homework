#include <iostream>
using namespace std;
int main() {
	int A;
	cin >> A;
	if (A%10==A/1000 && A/10%10==A/100%10) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}