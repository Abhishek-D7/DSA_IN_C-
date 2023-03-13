#include<iostream>
using namespace std ;

void bubbleSort( int arr[] , int n , int swapcount){
	
	int temp ;
	for (int i=0 ; i<n-1; i++){
		for(int j=0 ; j<n-i-1 ; j++){
			
			if ( arr[j] > arr[j+1] ){
				
			temp = arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			//flag++;
			swapcount++;
			}	
		}
	}
	}  
    for ( int k=0 ; k<=n-1 ;k++ ){
		cout<<arr[k]<<" ";
		cout<<swapcount;
	}

}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0,} , n , swapcount ;
	
bubbleSort(arr , 10 , 0);	
	
}