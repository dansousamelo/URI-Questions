#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool finish = false;

	int N;
	
	while(cin>>N, N){
		queue<char>est_A;
		vector<char> add_res;
		char aux;
			

		for(int i = 0; i < N; ++i){
			cin >> aux;

			if (aux == 0)
			{
				finish = true;
				break;
			}
			est_A.push(aux);

		}

		stack<char>estation;
		aux = est_A.front();
		est_A.pop();
		estation.push(aux);
		add_res.push_back('I');

		queue<char>est_B;
		for (int i = 0; i < N; ++i)
		{
			cin >> aux;

			if (aux == 0)
			{
				finish = true;
				break;
			}
			est_B.push(aux);
		}

		if(finish) break;

		bool posible = true;
		while(!est_B.empty()){
	
			if(estation.top()!=est_B.front()){
				if(!est_A.empty()){
					aux = est_A.front();
					est_A.pop();
					estation.push(aux);
					add_res.push_back('I');
				}
				else{
					posible = false;
					break;
					}

			}

			else if(estation.top() == est_B.front()){
					est_B.pop();
					estation.pop();
					add_res.push_back('R');
				

			}
			if(!est_A.empty() and estation.empty()){
				aux = est_A.front();
				est_A.pop();
				estation.push(aux);
				add_res.push_back('I');
			}
			
		}
		for (auto i : add_res)
				cout << i;			
		if(posible) cout << endl;
		else cout << " Impossible" << endl;
	}

	return 0;
}