#include <iostream>
using namespace std;
int main() {
	int N, i = 1;
	cin >> N;
	while (i < N) {
		i = i * 2;
	}
	if ((i == N)||(1==N)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cin.get();
	cin.get();
	return 0;
}