#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);

	int a = 0, b = 0, c = 0, d = 0;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	int op1 = a * b;
	int op2 = c * d;

	int res = op1 - op2;

	cout << "DIFERENCA = " << res << endl;

	return 0;
}