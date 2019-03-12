#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		int n;
		cin >> n;
		vector<int> p;
		for (int i = 1; i <= n; ++i)
			p.push_back(i);

		unsigned int tam = p.size();

		for(auto i : p)
			cout << i << " ";
		cout <<endl;
		
		unsigned int k = 0;
		cin >> k;
		k = k - 1;
		while(p.size() != 1){
			if(k<=p.back()){
				remove(p.begin(),p.end(),p[k]);
				p.resize(p.size()-1);
				p.shrink_to_fit();

				k+=2;
				
				for(auto i : p)
					cout << i << " ";
				cout <<endl;
				cout << "K: " << k << endl; 
			}else{
				k = k - tam;
				cout << "K: " << k << endl << endl;
			} 
			
		}

	cout << "Case " << i <<": " << p.front() << endl;
	}
}