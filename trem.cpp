#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while(cin >> N, N){
		while(1){
			stack<int> est_A;
			for(int i = N; i>0; i--)
				est_A.push(i);

			stack<int> estacao;
			int aux = est_A.top(); 
			est_A.pop();
			estacao.push(aux);
			
			queue<int> est_B;
			for(int i=0; i<N; ++i){
				cin >> aux;

				if(aux==0){
					cabou = true;
					break;
				}

				est_B.push(aux);
			}
				
		}
	
	}
	return 0;
}
