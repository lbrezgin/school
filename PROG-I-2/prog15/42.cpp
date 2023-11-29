#include <iostream>
using namespace std;
int main(){
	system("clear");
	int a[7][9] = { { 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                    { 1, 0, 0, 0, 0, 0, 0, 0, 1 },
                    { 1, 0, 0, 1, 0, 1, 0, 0, 1 },
                   	{ 1, 0, 0, 0, 1, 0, 0, 0, 1 },
                    { 1, 0, 0, 1, 0, 1, 0, 0, 1 },
                    { 1, 0, 0, 0, 0, 0, 0, 0, 1 },
                    { 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    int i,j;
    for(i = 0; i < 7; i++){
    	for(j = 0; j < 9; j++){
    		if(a[i][j] == 1){
    			cout<<"x";
    		}else{
    			cout<<" ";
    		}
    	}
    	cout << "\n";  
    }
    return 0;
}
