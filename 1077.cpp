#include <iostream>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	cin.ignore();
	while(n--){
		string expression;
		getline(cin, expression);
		res = posfixa(expression);

	}


	return 0;
}