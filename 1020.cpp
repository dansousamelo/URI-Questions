#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned int dia = 0, ano = 0, mes = 0, dias = 0;
	cin >> dia;

	if(dia >=365){
		ano = dia/365;
		mes = (dia - (ano * 365))/30;
		dias = (dia - (ano * 365)) - (mes * 30);
	}else{
		ano = 0;
		mes = dia/30;
		dias = dia - (mes * 30);
	}

	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;

	return 0;
}