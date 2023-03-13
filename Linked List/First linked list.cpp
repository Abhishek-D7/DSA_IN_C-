#include<iostream>
using namespace std ;

class node{
	
	public:
		
		int data ;
		node *next ;
};

void printList(node *p ){
	
	while ( p != NULL )
	{
		cout<<p->data<<" ";
		printList(p->next);
	}
	
}
int main(){
	node** n=NULL;
	
	node* node1=NULL ;
	node* node2=NULL ;
	node* node3=NULL ;
	
	node1 = new node();
	node2 = new node();
	node3 = new node();
	
	node1->data =1;
	node1->next = node2;
	
	node2->data =2;
	node2->next = node3;

	node3->data =3;
	node3->next = NULL;
	n=&node1;
	printList(*n);

return 0;	
}