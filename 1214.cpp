#include <bits/stdc++.h>

using namespace std;

int main(){
	int t = 0;
	cin >> t;
	while(t--){
		int qtd = 0 , cont = 0;
		cin >> qtd;
		int q = qtd;

		vector<float> al, al_comp;

		while(q--){
			int temp = 0;
			cin >> temp;
			al.push_back(temp);
			cont+=temp;
		}
		float media = (float)cont/qtd;

		for (int i = 0; i < qtd; ++i)
		{
			if(al[i] > media)
				al_comp.push_back(al[i]);
		}
		unsigned int tam = al_comp.size();
		float por = ((float)tam/qtd) * 100.0;

		cout << fixed;
		cout.precision(3);
		cout <<por << "%" << endl;

	

	}
	return 0;
}