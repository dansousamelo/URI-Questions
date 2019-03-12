#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	cin.ignore();

	vector<string> expression;
	vector<string>::iterator it;
	while(N--){
		
		string temp;
		getline(cin , temp);
		expression.push_back(temp);

	}
	sort(expression.begin(), expression.end());
	it = unique(expression.begin(), expression.end());
	expression.resize(distance(expression.begin(), it));

	int res = expression.size();

	cout << "# de mensagens reais: " << res << endl;

	return 0;
}