#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int array [3];
	int answer;
	int repeat;
	
	restart:
	
	cout<<"Insert the value of the first slot (only numbers): ";
	
	cin>>array[0];
	
	cout<<"Insert the value of the second slot: ";
	
	cin>>array[1];
	
	cout<<"Insert the value of the third slot: ";
	
	cin>>array[2];
	
	cout<<endl;
	
	cout<<"This software was coded by a real smart coder, so I can do a lot of diferent things, please, tell me. What do you want me to do:"<<endl<<endl;
	
	getch();
	
	cout<<"1.Type you the sum between the values of the first and second slots."<<endl;

	cout<<"2.Type you the multiplication between the values of all the slots."<<endl; 
	
	cout<<"3.Type you the division between the values of all the slots."<<endl<<endl;

	cout<<"Answer (please, answer with the number of the question): ";
	
	invalid_start:
	
	cin>>answer;
	
	cout<<endl;
	
	switch(answer){
		
		case 1:
			
			cout<<"The sum between "<<array[0]<<" and "<<array[1]<<" is: "<<array[0] + array[1]<<endl<<endl;
			
			break;
		case 2:
			
			cout<<"The multiplication between "<<array[0]<<", "<<array[1]<<" and "<<array[2]<<" is: "<<array[0] * array[1] * array[2]<<endl<<endl;
			
			break;
		case 3:
			
			cout<<"The division between "<<array[0]<<", "<<array[1]<<" and "<<array[2]<<" is: "<<array[0] / array[1] / array[2]<<endl<<endl;
			
			break;
		default:
			
			cout<<"invalid answer, please type again:";
			
			goto invalid_start;
			
			break;
	}
	
	invalid_answer_two:
	
	cout<<"Do you wanna play again?(1 for yes, 2 for not): ";
	
	cin>>repeat;
	
	cout<<endl;
	
	if(repeat==1){
		
		goto restart;
		
	}else if(repeat==2){
	
		cout<<"Thanks for using this little system, soon we will have more of them :)";	
	
	}else{
		
		cout<<"invalid answer, please type again."<<endl<<endl;
		
		goto invalid_answer_two;
		
	}
	
	return 0;
	
}
