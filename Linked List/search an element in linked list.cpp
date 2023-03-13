#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		void push();
		int search();
		void display();
}*top=NULL;

void Node::push(){
	int Data;
	cin>>Data;
	Node* new_node=new Node();
	new_node->data=Data;
	if(top == NULL){
		new_node->next=NULL;
		top =new_node;
	}
	else{
	new_node->next=top;
	top=NULL;
	top=new_node;
    }
//	cout<<new_node->data;
}

int Node::search(){
	int b;
	Node *temp;
	temp=top;
	cout<<"Enter the Value you want search";
	cin>>b;
	while( temp->next!= NULL){
		if ( b == temp->data){
			return temp->data;
		}
			temp=temp->next;	
	}
return -1 ;
}

void Node::display(){
	Node *t;
	t=top;
	while(t != NULL){
	if( t != NULL){
		cout<<t->data;
		t=t->next;
	}		
	}
	
	
}
	

int main(){
int ch;
Node n;
while(1){
cin>>ch;
switch(ch){
	case 1 :
		n.push();
		break;
	case 2:
	    n.display()	;
		break;  			
    }
  }
 cout<<n.search();
return 0;
}