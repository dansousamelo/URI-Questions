#include <bits/stdc++.h>
using namespace std;

int main(){

int N;
int A, B;

scanf("%d",&N);
vector<string> res;
vector<double>split;

for (int i = 0; i < N; ++i)
{	
	scanf("%d",&A);
	scanf("%d",&B);

	A = ((A%10) == 0)?(A/10):A;
	B = ((B%10) == 0)?(B/10):B;

	double div =(double) A/10;
	int k = 1, flag = 1;

	while(flag!=0){
		int ref = (int)(div);
		double op =(double) div - ref;
		op = (double)op * (double)(pow(10,k));
		div /= (double)10.0;
		k++;
		split.push_back(op);
		if(ref == 0)
			flag = 0;
	}
	
	int neg = 0;
	for (unsigned int i = 0; i < split.size(); ++i)
	{
		if (B == (int)split[i]){
			res.push_back("encaixa");
			neg = 1;
		}			
	}
	if(neg!= 0)
		res.push_back("nao encaixa");
	split.clear();
	
}

for (unsigned int i = 0; i < res.size(); ++i)
	cout << res[i] << endl;

return 0;
}