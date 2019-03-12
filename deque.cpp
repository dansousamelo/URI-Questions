#include <bits/stdc++.h>

using namespace std;

int main(){
	deque<int>dq;
	deque<int>::iterator it, it2;
	int N = 0;

	cin >> N;
	for (int i = 0; i < N; ++i){
		int temp = 0;
		cin >> temp;
		dq.push_back(temp);
	}

	sort(dq.begin(), dq.end());
	it = unique(dq.begin(), dq.end());
	dq.resize(distance(dq.begin(),it));

	for (unsigned int i = 0; i < dq.size(); ++i)
		cout << dq[i] << endl;

	it2 = max_element(dq.begin(), dq.end());
	cout << "MAIOR ELEMENTO: " << *it2 << endl;


	return 0;
}