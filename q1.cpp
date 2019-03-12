#include <iostream>
#include <string>

using namespace std;

int main(){
	int num_test = 0;
	cin >> num_test;

	int i = 0;
	int num_caso = 0;
	int position_final = 0;

	while(i<num_test)
	{
		int z = 0;
		cin >> num_caso;
		string caso[num_caso];
		int pos[num_caso];

		for (int j = 0; j < num_caso; j++){
			cin >> caso[j];
			cin.ignore(256,'\n');
		}
		
		for (int k = 0; k < num_caso; k++)
		{
			if (caso[k] == "LEFT"){
				pos[z] = -1;
				z++;
			}
			else if(caso[k] == "RIGHT"){
				pos[z] = 1;
				z++;
			}
			else{
				int flag = 1;
					while(flag){
						char number = caso[k].back();
						int rule = (int)number;
						rule = rule - 49;
						if(caso[rule] == "LEFT"){
							pos[z] = -1;
							z++;
							flag = 0;
						}
						else if(caso[rule] == "RIGHT"){
							pos[z] = 1;
							z++;
							flag = 0;
						}
						else{
		 					caso[k] = caso[rule];
		 					continue;
						}
					}
				}

		}
		for (int i = 0; i < num_caso; i++){
			position_final = position_final + pos[i];  
		};
		if(num_caso == z){
			cout << position_final << endl;
			z = 0;
		}
						
	i++;
	}
	
	
	return 0;
}