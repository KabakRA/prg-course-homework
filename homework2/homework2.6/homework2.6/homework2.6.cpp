#include <iostream>
using namespace std;
int main() {
	int A, B, N;
	cin >> A >> B >> N;
	cout << A * N + B * N / 100 << ' ' << B * N % 100 << endl;
	cin.get();
	cin.get();
	return 0;
}