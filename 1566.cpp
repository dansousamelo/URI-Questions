#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	//300000

	for (int i = 0; i < t; ++i){
		int n;		
		scanf("%d", &n);
		int h[n];

		for (int i = 0; i < n; ++i)
			scanf("%d",&h[i]);


		sort(h, h + n);

		for (int i = 0; i < n - 1; ++i)
			printf("%d ", h[i]);

		printf("%d\n", h[n - 1]);
		
}


	return 0;
}