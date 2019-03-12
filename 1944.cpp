#include <bits/stdc++.h>

using namespace std;
string reverseStr(string& str) 
{ 
    int n = str.length(); 
   
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);

    return str;
} 

int main(){
	int t , count = 0;
	cin >> t;
	cin.ignore();
	stack<string>jogadas;
	string ini = "F A C E";
	jogadas.push(ini);

	while(t){
		string expression;
		getline(cin,expression);
		string inv = reverseStr(expression);
		cout << inv << " == " << jogadas.top() << endl;

		if(inv == jogadas.top()){
			count++;
			if(jogadas.top()!="F A C E"){
				jogadas.pop();
				cout << "Excluiu"<<endl;
			}
		}
		else{
			jogadas.push(expression);
			cout << "Adicionou " << endl;
		}
		t--;
	}

	cout << count << endl;
	cout << jogadas.size() << endl;

	return 0;
}