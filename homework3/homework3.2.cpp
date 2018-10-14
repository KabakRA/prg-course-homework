#include <iostream>
using namespace std;
int main() {
	int N, i=2;
	cin >> N;
	while (N%i != 0) {
		i = i + 1;
	}
	cout << i << endl;
	cin.get();
	cin.get();
	return 0;
}