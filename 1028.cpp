#include <bits/stdc++.h>

using namespace std;
int MDC(int a, int b) {            
    if (b==0) return a;

    return MDC(b,a%b);
}

int main(){
	int t = 0;
	cin >> t;

	while(t--){
		int n1 = 0, n2 = 0;
		cin >> n1;
		cin >> n2;
		int res = MDC(n1,n2);

		cout << res << endl;

	}

	return 0;
}