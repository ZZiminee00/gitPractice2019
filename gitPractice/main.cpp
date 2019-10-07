#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	char oper;
	cin >> n1 >> n2 >> oper;
	if (oper == '/') {
		if (n2 != 0) {
			cout << n1 / n2 << endl;
		}
		else {
			cout << "Error!" << endl;
		}
	}
	else if (oper == '+') {
		cout << n1 + n2 << endl;
	}
}