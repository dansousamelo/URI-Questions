#include <bits/stdc++.h>

using namespace std;

struct Alunos
{
	string nome;
	string assinatura;
};

int main(){
	int N = 0;
	while(cin >> N , N){
		Alunos original[N];
		string temp_1;
		string temp_2;

		for (int i = 0; i < N; ++i)
		{
			cin >> temp_1;
			cin >> temp_2;

			original[i].nome = temp_1;
			original[i].assinatura = temp_2;
		}

		int presentes;
		cin >> presentes;

		Alunos pres[presentes];
		for (int i = 0; i < presentes; ++i)
		{
			cin >> temp_1;
			cin >> temp_2;

			pres[i].nome = temp_1;
			pres[i].assinatura = temp_2;
		}

		int cont = 0;
		for (int i = 0; i < presentes; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if(pres[i].nome == original[j].nome){
					if(pres[i].assinatura != original[j].assinatura){
						cout << original[j].assinatura << endl;
						cont++;
					}
				}
			}
		}

		cout << cont << endl;
	}


	return 0;
}