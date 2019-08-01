#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	char word [30], letter[1], secret[30];
	int size, index, tries, hits;
	bool hit;
	
	tries=6;
	size=0;
	index=0;
	hit=false;
	hits=0;
	
	cout<<"Say to your friend to close his eyes and type de secret word: ";
	
	cin>>word;
	
	system("cls");
	
	while(word[index] != '\0'){
		
		index++;
		size++;	
		
	}
	
	for(index=0;index<30;index++){
		
		secret[index]='-';
		
	}
	
	while((tries>0)&&(hits<6)){
		
		 cout<<"Remaining tries: "<<tries<<endl<<endl;
		 cout<<"secret word: ";
		 
		 for(index=0; index<size; index++){
		 	
		 	cout<<secret[index];
		 	
		 }
	
		cout<<endl<<endl<<"Type a letter: ";
		
		cin>>letter[0];
	
	}
	
	return 0;
	
}
