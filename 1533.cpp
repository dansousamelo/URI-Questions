#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

vector<int>suspeito;

int flag = 1;
while(flag != 0){
	int t;
	cin >> t;

	if(t != 0){
		vector<int> v;
		vector<int> v_comp;

		for (int i = 0; i < t; ++i)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		v_comp = v;
		sort(v_comp.begin(), v_comp.end());

		int tam = v_comp.size();

		int pos_sus = tam - 2;
		for (int i = 0; i < tam; ++i)
		{
			if(v_comp[pos_sus] == v[i]){
				int k = i +1;
				suspeito.push_back(k);
			}
		}
		
	}

	else flag = 0;
}
int tam_sus = suspeito.size();
	for (int i = 0; i < tam_sus; ++i)
		cout << suspeito[i] << endl;

	return 0;
}