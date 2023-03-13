#include<iostream>
using namespace std;

class Node{
	
	int data;
	Node* next;
}

void search(){
	
	
}


int main(){
	
	int arr[5];
	cout<<"Enter the Elements of Array";
	for(int i=0 ; i<5; i++){
		
		cin>>arr[i];
	}
	
	Node* head;
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
	Node *head=&fr;
}