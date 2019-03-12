#include <bits/stdc++.h>

using namespace std;
int N_MAX = 100;
char inst[100];
int main(){
	ios::sync_with_stdio(false);

	vector<string> inst;

	int t = 0;
	cin >> t;
	while(1){
		int n = 0, pts = 0;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			string temp;
			cin >> temp;
			inst.push_back(temp);
		}
		for (int i = 0; i < n; ++i)
		{
			if (inst[i] == "LEFT")
				pts--;
			else if(inst[i] == "RIGHT")
				pts++;
			else{
				int tam = inst[i].size();
				char last = inst[i].at(tam - 1);
				cout << last;
			}
			
		}

	}


	return 0;
}