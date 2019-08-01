#include <iostream>

using namespace std;

int main(){
	
	int multidimarray [2] [2];
	int l, c;
	
	 multidimarray [0] [0]=0;
	 multidimarray [0] [1]=1;
	 multidimarray [1] [0]=2;
	 multidimarray [1] [1]=3; 
	 
	 for(l=0;l<2;l++){
	 	
	 	for(c=0;c<2;c++){
	 		
	 		cout<<multidimarray [l] [c]<<" ";
	 		
		 }
	 	
	 }
	
	return 0;
}
