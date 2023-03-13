#include<iostream>
#define Size 10
using namespace std;

class Stack{
	
	public:
		int stack[Size] , top= -1;
		
void push(){
	
	int b ;
    
	if ( top == Size-1 ){
		
		cout<<"Stcak is full can't push more elements";
	}
    else{
    	cout<<"Enter the element you want insert ";
    	cin>>b;
    	top++;
    	stack[top]=b;
	}
}

void pop(){
	
	if ( top == -1 ){
		cout<<"Stack is empty , can't remove elements"<<endl;
	}
	else{
		cout<<stack[top]<<" is deleted ";
		top--;
	}
}

void display(){
	
	if( top == -1){
		cout<<"Stack is empty"<<endl;	
	}
	else{
	for ( int i =top ; i>= 0 ;i--){
		
		cout<<stack[i]<<" ";
	}	
	cout<<endl;	
	}
}		
};

int main(){
	
	int select ;
	Stack s;
	do{
	cout<<"Press 1.Push  2.Pop  3.Display  4.exit"<<endl;	
	cin>>select;	
	switch(select){
		
	case 1:
	   	s.push();
	    break;
	case 2:
	    s.pop();
		break;
	case 3:
	    s.display();
		break;
	case 4:
	    exit(0); 
	    break;
		
	default :
	    cout<<"you entered wrong key ,try again"<<endl;			   	
	}	
	}while( select <=4 && select > 0 );
	
return 0;	
}