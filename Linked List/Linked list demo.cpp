#include<iostream>
using namespace std ;

class node
{
	public:
		int data;
        node *next;
        node *head;
        
    void create(int);
    void search();
};

void create(int item)
{
  node *ptr = new node;
 if(ptr == NULL)
 {
 cout<<"\nOVERFLOW\n";
 }
 else
 {
 ptr->data = item;
 ptr->next = head;
 head = ptr;
 cout<<"\nNode inserted\n";
 }

}

void search()
{
 struct node *ptr;
 int item,i=0,flag=1;
 ptr = head;
 if(ptr == NULL)
 {
 printf("\nEmpty List\n");
 }
 else
 {
 printf("\nEnter item which you want to search?\n");
 scanf("%d",&item);
 while (ptr!=NULL)
 {
 if(ptr->data == item)
 {
 printf("item found at location %d ",i+1);
 flag=0;
 break;
 }
 i++;
 ptr = ptr -> next;
 }
 if(flag==1)
 {
 printf("Item not found\n");
 }
}

}



 
void main ()
{
  int choice,item,loc;
  do
  {
   cout<<"\n1.Create\n2.Search\n3.Exit\n4.Enter your choice?";
   cin>>choice;

switch(choice)
 {
  case 1:
    cout<<"\nEnter the item\n";
    cin>>item;
    create(item);
    break;

  case 2:
    search();

  case 3:
    exit(0);
    break;

    default:
    cout<<"\nPlease enter valid choice\n";
   }  

  }while(choice != 3);
}

