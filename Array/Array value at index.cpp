#include <iostream>

using namespace std;

int main()
{  int a[10]={ 1,2,3,4,5,6,7,8,9};
   int b , c, i,j ;
    cout<<"Enter thr INTEx";
    cin>>b;
    cout<<"Enter the no. to add";
    cin>>c;
    
    for( i=10 ; i >= b-1 ; i-- )
    {
        a[i] = a[i - 1];
    }
    
    a[b]=c;
    
    cout<<"Index at " <<b <<" value ="<<c<<endl;
    for(  j=0 ; j<=10 ; j++)
    {
    	cout<<" "<<a[j];
	}
	
	return 0;
}