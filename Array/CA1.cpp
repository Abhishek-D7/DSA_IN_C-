#include<iostream>
using namespace std;

void sort_String( char arr[] , int n){
	
	int temp ;
	for (int ii=0 ; ii<n-1; ii++){
		for(int jj=0 ; jj<n-ii-1 ; jj++){
			
			if( arr[jj] > arr[jj+1] ){
				temp = arr[jj+1];
			arr[jj+1]=arr[jj];
			arr[jj]=temp;
			}
		}
    }
    cout<<"Sorted Array ";
    for ( int hh=0 ; hh<n ; hh++){
    	cout<<arr[hh];
	}
}
int main()
{

	
	char a=0,b=1,c=2,d=3,e=4,f=5,g=6,h=7,i=8,j=9,k=10,l=11,m=12,n=13,o=14,p=15,q=16,r=17,s=18,t=19,u=20,v=21,w=22,x=23,y=24,z=25;
	char arr[10];
	cout<<"Enter the alphabets ";
	for ( int kk=0 ; kk<10 ; kk++  ){
	
	cin>>arr[10];
	}
  sort_String( arr , 10);
   return 0;  	
}