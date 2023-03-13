#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		void N_Queue();
		void DeQueue();
}*in=NULL,*out=NULL,*temp=NULL;

void Node::N_Queue(){
	int Data;
	//Node *temp;
	cout<<"Enter the Data in node";
	cin>>Data;
	Node* new_node=new Node();
	new_node->data=Data;
	if( in == NULL){
		new_node->next=NULL;
		in=new_node;
		temp[0]=new_node;
	}
	else{
		new_node->next=in;
		in=NULL;
		in=new_node;
		for(int i=1;i<=100;i++){
		temp[i]	=new_node;	
		}
	}
	cout<<new_node->data;
}

void Node::DeQueue(){
	if( in == NULL){
		cout<<"Linked list is empty";
	}
	else{
	    for(int j=0 ; j<=100 ; j++){
	        temp[j]->data;
	        free(temp[j]);
		out=&temp[j+1];
		}
	}
}

int main(){
	
int ch;
Node n;
cout<<"\n  Stack using Linked List \n";
while(1){
cout<<"\n***** MENU ******\n";
cout<<"1. NQueue\n2. DeQueue\n3.  Exit\n";
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