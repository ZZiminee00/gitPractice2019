#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	char oper;
	cin >> n1 >> n2 >> oper;
	if (oper == '/') {
		cout << n1 / n2 << endl;
	}
}