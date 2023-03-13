#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	
};
void push(Node **s){
	 int Data;
	 cout<<"Enter data in node";
	 cin>>Data;
	 Node *new_node,*t;
	 new_node= new Node();
	 new_node->data=Data;
	 if(*s==NULL)
	 {
	   new_node->next=NULL;
	   *s=new_node;
	 } 
	 else
	 {
	 	t=*s;
	 	while(t->next!=NULL)
	 	   t=t->next;
	 	t->next=new_node;
	 	new_node->next=NULL;
	 	
	 }
	 	
}

void sum_fun(Node *top)
{
   int add=0;
   while( top->next!=NULL)
   {
   	  add=add+top->data;
   }	
   cout<<"Sum is "<<add;	
}

int main(){
}
  
  Node *top=NULL;
  push(&top);
  sum_fun(top); 
  return 0;
}