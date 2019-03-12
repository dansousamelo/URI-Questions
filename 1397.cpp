#include <bits/stdc++.h>

using namespace std;

int main(){
	int flag = 1;
	while(flag!=0){
		int n = 0, A = 0, B = 0;
		cin >> n;
		if(n != 0){
			int ptos_a = 0;
			int ptos_b = 0;

			for (int i = 0; i < n; ++i)
			{
				cin >> A; 
				cin >> B;
				
				if(A >B) ptos_a++; 
				else if(B > A) ptos_b++;
				else{
					ptos_a = 0;
					ptos_b = 0;
				}
			}
			if(ptos_a!=ptos_b){
				cout << ptos_a << " " << ptos_b << endl;
			}
			else{
				ptos_b = 0;
				ptos_a = 0;
				cout << ptos_a << " " << ptos_b << endl;
			}
		}else flag = 0;
		
	}

	return 0;
}