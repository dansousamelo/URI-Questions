#include <iostream>

using namespace std;

int main(){
	long long int h, o, res;

	while(cin >>h){
	cin >> o;
	res = h - o;
	if (res < 0)
		res =- res;

	cout << res << endl;
	}
}