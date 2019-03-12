#include<bits/stdc++.h>

using namespace std;

typedef struct Brinquedo
{
	string nome;
	float peso;
}brinquedo;
int main(){
	int N = 0;
	cin >> N;
	cin.ignore();
	while(N--){
		int qtd_brin = 0;
		float pp = 0;
		string np;

		cin >> qtd_brin;
		brinquedo total[qtd_brin];

		for (int i = 0; i < qtd_brin; ++i)
		{
			getline(cin , np);
			cin >> pp;

			total[i].nome = np;
			total[i].peso = pp;

		}

		deque<brinquedo>presentes;
		while(1){
			getline(cin , np);
			cin >> pp;

			if(np == "-" and pp == 0)
				break;
			brinquedo brin;
			brin.nome = np;
			brin.peso = pp;
			presentes.push_back(brin); 
		}

		cout << presentes[0].nome << endl;

	}



	return 0;
}