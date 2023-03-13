#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		void N_Queue();
		void DeQueue();
}*out=NULL,*in=NULL;

void Node::N_Queue(){
	Node *t;
	int Data;
	cout<<"Enter the data in node";
	cin>>Data;
	Node *new_node=new Node();
	new_node->data;
	new_node->next=NULL;
	if ( in == NULL){
	in=out=new_node;
    }
    else
   in->next=new_node;
   in=new_node;
}

void Node::DeQueue(){
	Node *temp;
	if( in == NULL){
		cout<<"Linked list is empty";
	}
	else{
		temp=out;
		out=out->next;
		free(temp);	
		}
}

int main(){
	
int ch;
Node n;
cout<<"\n  Enqueue and Dequeue using Linked List \n";
while(1){
cout<<"\n MENU \n";
cout<<"1. EnQueue\n2. DeQueue\n3.  Exit\n";
cout<<"Enter your choice: ";
cin>>ch;
switch(ch){
case 1: n.N_Queue();
    break;
case 2: n.DeQueue(); 
    break;
case 3: exit(0);

default: cout<<"\nWrong selection!!! Please try again!!!\n";
}
}
}