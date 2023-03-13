#include<iostream>
using namespace std;

void opertion(int arr[10] )
{
	int  b  , count=0 ;
	
	cout<<"Enter the value you want to Insert";
	cin>>b;
	

	arr[9]=b;		
	for ( int j=0 ; j<10-1 ; j++ ){
		
		for ( int k=0 ; k<10-j-1 ; k++){
			
			if ( arr[k] > arr[k+1] ){
			
		      int temp = arr[k+1];
			  arr[k+1]=arr[k];
			  arr[k]=temp;
			  
			  count++;
		    }
		}
	}
	
	for ( int h=0 ; h <10; h++){
		
		cout<<arr[h]<<" ";
	}
    
    cout<<"\nNo. of swap"<<count;
}

int main(){
	
	int arr[10]={33,12,21,67,87,74,36,99,41};
	
	opertion( arr);
	
return 0 ;
}