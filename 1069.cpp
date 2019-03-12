#include <bits/stdc++.h>

using namespace std;

int diamond(string expression){
	stack<char>no_sand;
	int count = 0;

	for(auto c : expression){
		if(c == '<'){ 
			no_sand.push(c);
		}
		else if(c == '>'){
			if(no_sand.empty() || no_sand.top() == '<')
			no_sand.pop();
			count++;
		}
	}
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t){
		string expression;
		cin >> expression;
		int res = diamond(expression); 
		cout << res << endl;
		t--;
	}

	return 0;
}