#include <iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B;
	if (A >= B) {
		if (A > B) {
			cout << '1' << endl;
		} 
		else {
			cout << '0' << endl;
		}
	
	}
	else {
		cout << '2' << endl;
	}
	cin.get();
	cin.get();
	return 0;
}