#include <bits/stdc++.h>

using namespace std;

struct Produtos
{
	string nome;
	float valor;
};

int main(){
	int N;
	cin >> N;
	while(N--){
		int qtd_prod;
		cin >> qtd_prod;
		Produtos prod[qtd_prod];

		string temp_1;
		float temp_2;

		for(int i = 0; i< qtd_prod; i++){
			cin >> temp_1;
			cin >> temp_2;

			prod[i].nome = temp_1;
			prod[i].valor = temp_2;
		}

		int prod_comprados;
		cin >> prod_comprados;
		Produtos feira[prod_comprados];
		float pagar = 0;

		for (int i = 0; i < prod_comprados; ++i)
		{
			cin >> temp_1;
			cin >> temp_2;

			feira[i].nome = temp_1;
			feira[i].valor = temp_2;
		}
		for (int i = 0; i < prod_comprados; ++i)
		{
			for (int j = 0; j < qtd_prod; ++j)
				{
					if(feira[i].nome == prod[j].nome)
						pagar+=(prod[j].valor * feira[i].valor);
				}	
		}
		cout.precision(2);
		cout <<"R$ "<< fixed <<pagar << endl;

	}


	return 0;
}