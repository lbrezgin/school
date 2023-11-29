#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main(){
	srand(time(0));
	int a[12][12],i,j,r=1,k=1;
	for(i = 0; i < 12; i++ ) a[i][0] = 0;
   	for(j = 0; j < 12; j++ ) a[0][j] = 0;
   	for(i = 0; i < 12; i++ ) a[i][11] = 0;
   	for(j = 0; j < 12; j++ ) a[11][j] = 0;
   	for(i = 1; i < 11; i++ )
   		for ( j = 1; j < 11; j++ ) a[i][j] = rand()%9 + 1;
   	a[r][k] = 10;
   	system("clear");   
   	cout << "\n";
   	for ( i = 0; i < 12; i++ ) {
    	for ( j = 0; j < 12; j++ ) 
        	switch ( a[i][j] ) {
            	case 0: cout << " ▦"; break;
            	case 10: cout << "👾"; break;
            	default: cout << " " << a[i][j];
         	}
      	cout << "\n";
   	}
   	sleep(2);   
   	do {
      a[r][k] = -1;
      if (a[r][k+1] >= a[r][k-1] && a[r][k+1] >= a[r+1][k] && a[r][k+1] >= a[r-1][k]) k++;
      else if ( a[r][k-1] >= a[r+1][k] && a[r][k-1] >= a[r-1][k]) k--;
                else if (a[r+1][k] >= a[r-1][k]) r ++;
                          else r--;
      a[r][k] = 10;
      system("clear");   
      cout << "\n";
      for ( i = 0; i < 12; i++ ) {
         for ( j = 0; j < 12; j++ ) 
            switch ( a[i][j] ) {
               case 0: cout << " ▦"; break;
               case 10: cout << "👾"; break;
               case -1: cout << "  "; break;
               default: cout << " " << a[i][j];
            }
         cout << "\n";
      }
      sleep(2);  
   } while (a[r][k+1] > 0 || a[r][k-1] > 0 || a[r+1][k] > 0 || a[r-1][k] > 0);
   cout << "\n\t  Robots TUPIKĀ!\n";
} 

