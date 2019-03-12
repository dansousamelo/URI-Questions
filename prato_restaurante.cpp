#include <bits/stdc++.h>

using namespace std;

int main(){
	int N = 0;
	cin >> N;
	int amigos = N - 2;

	vector<int>pratos;
	for(int i = 1; i<=N; ++i){
		pratos.push_back(i);
	}

	queue<int>p_ami;
	while(amigos--){
		int aux = pratos.front();
		pratos.erase(pratos.begin());
		pratos.push_back(aux);
		pratos.erase(pratos.begin());
	}
	int res = pratos.front();

	cout << res << endl;



	return 0;
}