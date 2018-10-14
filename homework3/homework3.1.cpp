#include <iostream>
using namespace std;
int main() {
	int N, i=1;
	cin >> N;
	while (i*i <= N) {
		cout << i * i << " " ;
		i = i + 1;
	}
	cin.get();
	cin.get();
	return 0;
}