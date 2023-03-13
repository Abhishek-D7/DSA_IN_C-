#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	
};

void max_fun(Node* p){
	
    int max=-32768;
    do{
    if ( p->data >max){
    	max=p->data;
    	p=p->next;	
	}
	else
	 p=p->next;
	}while(p != NULL); 
	
	cout<<"Maximum no. "<<max;
}

void min_fun(Node *p){
	
	int min=INT_MAX;
	do{
		if( p->data < min){
			min=p->data;
			p=p->next;
		}
		else
		p=p->next;
		
	}while( p != NULL);
	cout<<"\nmin no. is "<<min;
	
}

int main(){
	
	int arr[5];
	cout<<"Enter the Elements of Array ";
	for(int i=0 ; i<5; i++){
		
		cin>>arr[i];
	}
	Node* fr=NULL;
	Node* se=NULL;
	Node* th=NULL;
	Node* fo=NULL;
	Node* fv=NULL;
	
	fr=new Node();
	se=new Node();
	th=new Node();
	fo=new Node();
	fv=new Node();
	
	fr->data=arr[0];
	se->data=arr[1];
	th->data=arr[2];
	fo->data=arr[3];
	fv->data=arr[4];
	
	fr->next=se;
	se->next=th;
	th->next=fo;
	fo->next=fv;
	fv->next=NULL;
	Node** top=NULL;
	top=&fr;
	max_fun(*top);
	min_fun(*top);
	return 0;
}