#include <bits/stdc++.h>

using namespace std;

int main(){
	int t = 0;
	cin >> t;
	vector<int> trem;
	vector<int> trem_comp;

	for (int i = 0; i < t; ++i)
	{
		int n = 0;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			int temp = 0;
			trem.push_back(temp);
		}
		trem_comp = trem;
		sort(trem.begin(),trem.end());
		
	}
	for (unsigned int i = 0; i < trem.size(); ++i)
	{
		for (int j = 0; j < trem.size() ; ++j)
		{
			if(trem[i] == trem_comp[j]){
				if(i == j) continue;
				else res+=j;
			}		
		}
	}

	return 0;
}