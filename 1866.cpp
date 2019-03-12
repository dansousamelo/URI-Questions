#include <iostream>

using namespace std;

int main(){
int t, n;
cin >> t;
int res[t];

if(t < 1000 && t > 0){
	for (int i = 0; i < t; ++i){
		cin >> n;
		res[i] = ((n % 2) == 0)? 0 : 1;
	}
}

for(int i = 0; i < t; ++i)
	cout << res[i] << endl;

return 0;
}