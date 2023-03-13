#include<iostream>
using namespace std ;

void Array_insertion(  int arr[] ){
	
	 int pos ,b ;
	 
	 cout<<"Enter the no. you want insert";
	cin>>b ;
	cout<<"Enter the position where want insert";
	cin>>pos;
	
	for ( int i =9 ; i>pos-1 ; i--){
		
		arr[i] = arr[i-1];
    }
	arr[pos] = b ;
	
	for ( int j = 0 ; j <= 9; j ++ ){
		
		cout<<arr[j]<<" ";
	}
	
}

int main()
{
	
	 int arr[10]={12,45,78,85,42,61,24,31,49}   ;
		
Array_insertion( arr  )	;

return 0 ;	
}