#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t = 0;
	cin >> t;
	vector<int> resul;

	for (int i = 0; i < t; ++i)
	{
		int qte_alu; 
		cin >> qte_alu;
		vector<int> m;
		vector<int> m_comp;
		for (int i = 0; i < qte_alu; ++i)
		{
			int temp = 0;
			cin >> temp;
			m.push_back(temp);
		}
		m_comp = m;
		sort(m_comp.begin(),m_comp.end(),[](int a, int b){return a > b;});

		int res = 0;

		for (int i = 0; i < qte_alu; ++i)
		{
			if(m[i] == m_comp[i])
				res++;
			
		}

		resul.push_back(res);

	}
	for(int i : resul)
		cout << i << endl;

	return 0;
}
