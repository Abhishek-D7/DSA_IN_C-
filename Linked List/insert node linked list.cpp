#include<iostream>
using namespace std ;

class Node {
	
	public:
		int data;
		Node *next;	
} ;


void display(Node* n){
	
	while( n != NULL){
		
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
	Node* top;
	
	Node* s_insert = NULL;	
	s_insert =new Node();
	
	Node* first =NULL;
	Node* second =NULL;
	Node* third =NULL;
	
	Node* m_insert =NULL;
	m_insert =new Node();
	
	Node* l_insert =NULL;
   l_insert =new Node();
	
	first = new Node();
	second = new Node();
	third = new Node();
	
	first->data=1;
	first->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	top=first;
	
//insert at Start of linked list
	s_insert->data=0;
	s_insert->next=first;
	top=s_insert;

//insert at end of linked list
   l_insert->data=4;
   l_insert->next=NULL;
   third->next=l_insert;
   
//insert at mid of linked list
   m_insert->data=2;
   m_insert->next=third;
   second->next=m_insert;
   	
display( top);
	
}
