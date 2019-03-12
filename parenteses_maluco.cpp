#include <bits/stdc++.h>

using namespace std;

bool armandoLang(string expression){
	map <char,char> open { {')','('}, {']','['} , {'}','{'} };
	stack<char>s;
	for(auto c : expression){
		switch(c){
			case '(':
			case '[':
			case '{':
				s.push(c);
				break;

			case ')':
			case ']':
			case '}':
				if(s.empty() || s.top() != open[c])
					return false;

				s.pop();
		}

	}
	return s.empty();
}

int main(){
	int N = 0;
	cin >> N;
	cin.ignore();
	while(N--){
		string expression;
		getline(cin , expression);
		bool possible = armandoLang(expression);
		(possible)? cout << "Compilou\n" : cout << "Erro de compilacao\n";
	}

	return 0;
}