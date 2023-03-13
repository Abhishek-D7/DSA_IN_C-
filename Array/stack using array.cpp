#include<iostream>
using namespace std;

class Node{
   public:	
	int data ;
	Node *next;
};

void push(Node **top){
	int Data;
	cout<<"Enter the data for node";
	cin>>Data;
	Node* new_node=NULL;
	new_node=new Node();
	if ( top == NULL){
		new_node->data=Data;
		top=&new_node;
	}
	else{
		new_node->data=Data;
		new_node->next=top;
		top=&new_node;
	}
}

void pop(Node **top){
	Node *temp;
	if( top == NULL){
		cout<<"Linked list is empty";
	}
	else
	   temp=top;
	   top->next;
	   cout<<"Node is delete";
	   free(temp);
}

void display(Node **top){
        
		if( top !=NULL){
			cout<<top->data;
			display(top->next);
		}
		else
		cout<<"List is empty";	
}

int main(){
	int choice;
	Node **top
	printf("\n:: Stack using Linked List ::\n");
while(1){
cout<<"\n***** MENU ******\n";
cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
cout<<"Enter your choice: ";
cin>>choice;
switch(choice){
case 1: push(*top);
    break;
case 2: pop(*top); 
    break;
case 3: display(*top); 
    break;
case 4: exit(0);

default: cout<<"\nWrong selection!!! Please try again!!!\n";
}
}
}