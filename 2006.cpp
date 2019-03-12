#include <bits/stdc++.h>

using namespace std;

int main(){
	int answer = 0;
	cin >> answer;

	vector<int> v(5);
	for (int i = 0; i < 5; ++i)
		cin >> v[i];

	int apar = count(v.begin(),v.end(),answer);
	cout << apar << endl;


	return 0;
}