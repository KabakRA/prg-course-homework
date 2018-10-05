#include <iostream>
using namespace std;
int main() {
	int H, A, B, Q;
	cin >> H >> A >> B;
	if ((H - A) % (A - B) == 0) {
		Q = (H - A) / (A - B) + 1;
	}
	else {
		Q = (H - A) / (A - B) + 2;
	}
	cout << Q << endl;
	cin.get();
	cin.get();
	return 0;
}