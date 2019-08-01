#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int number;
	
	cout<<"Hi! This program is for you to typing the multiplication table of the number you want, convecionally going from 1 to 10"<<endl<<endl;
	
	getch();
	
	cout<<"Type the value: ";
	
	cin>>number;
	
	cout<<endl;
	
	cout<<"Here is the multiplication table of  "<<number<<endl;
	
	for(int multiplier=1; multiplier<10; multiplier++){
		
		cout<<number<<" x "<<multiplier<<" = "<<number * multiplier<<endl;
		
	}
	
	return 0;
	
}
