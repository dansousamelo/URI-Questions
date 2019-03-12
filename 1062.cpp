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
	int n = 0;
	while(cin >> n, n){
		cin.ignore();
		string vag;
		getline(cin , vag);
		stack<char>t1,t2, t3, comp_t1, comp_t2;

		string inv_vag =  reverseStr(vag);

		for(auto i : vag)
			t1.push(i);

		comp_t1 = t1;
		int tam1 = comp_t1.size();
		int tam2 = comp_t2.size();

		while(tam1){
			int ele = comp_t1.top();
			t2.push(ele);
			comp_t1.pop();
			tam1--;
		}

		while(tam2){
			int ele = comp_t2.top();
			t3.push(ele);
			comp_t2.pop();
			tam2--;
		}

		string res = (t1 == t3)? "Yes" : "No";
		cout << res << endl;

		
	}

	return 0;
}