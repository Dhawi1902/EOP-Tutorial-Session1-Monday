#include <iostream>

using namespace std;

int main(){
	int val[3][4] = { 
						{8,16,9,52},
			        	{3,15,27,6},
			        	{14,25,2,10} 
					};

	for(int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)	
		cout << val[i][j];
		cout << endl;
	}
	
	return 0;
}


