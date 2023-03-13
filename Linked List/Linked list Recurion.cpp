#include<iostream>
using namespace std;

class node{
	
	public:
		int data;
		node *next;
};

void display(node *n){
	
	while( n != NULL){
		cout<<n->data<<" ";
		display(n->next);
	}
}

int main(){
	
	
	node  *top;
	node* first ;
	node* second ;
	node* third;
	top=first;
	first=new node();
	second=new node();
	third=new node();
	
	
	first->data=0;
	first->next=second;
	
	second->data=1;
	second->next=third;
	
	third->data=2;
	third->next=NULL;	
	
	

	display(top);
	return 0;	
}