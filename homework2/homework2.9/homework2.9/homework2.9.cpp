#include <iostream>
using namespace std;
int main() {
	char x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1-x2==0 || y1-y2==0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
//�������, � ������� ������. �� (4;4) � (5;5) �� ��������� ��� ����������� ����� ����� �� ������, �� �� ������ YES.