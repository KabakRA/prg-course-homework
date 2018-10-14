#include <iostream>
using namespace std;
int main() {
	int N, i = 1;
	cin >> N;
	if (i <= N) {
		cout << i << " ";
	}
	while (i*2 <= N) {
		i = i * 2;
		cout << i << " ";
	}
	cin.get();
	cin.get();
	return 0;
}