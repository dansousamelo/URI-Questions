#include <bits/stdc++.h>

using namespace std;

int economia(int n){
	vector<string>num;
	for(int i = 0; i < n; i++){
		string temp;
		num.push_back(temp);
		}
	string comp = n[0];
	for (int i = 0; i < comp.lenght() / 2; i++) 
        swap(comp[i], comp[n - i - 1]);
	
}

int main(){
	int n = 0;
	while(cin >> n){
		int qtd_tel = 0;
		cin >> qtd_tel;
		int res = economia(qtd_tel);
		cout << res << endl;
 	}


	return 0;
}