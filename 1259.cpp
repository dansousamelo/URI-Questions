#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0;
	scanf("%d",&n);
	vector<int> par;
	vector<int> imp;

	for (int i = 0; i < n; ++i)
	{		
		int temp = 0;
		scanf("%d", &temp);

		(temp % 2 == 0)? par.push_back(temp) : imp.push_back(temp); 
		
	}

	sort(par.begin(), par.end());
	sort(imp.begin(),imp.end(),[](int a, int b){return a > b;});

	for (unsigned int i = 0; i < par.size() ; ++i)
		printf("%d\n",par[i]);
		
	for (unsigned int i = 0; i < imp.size() ; ++i)
		printf("%d\n",imp[i]);	

	return 0;
}