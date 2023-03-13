#include<iostream>
#include<conio.h>
using namespace std;

int main()
{  int j,x,a1,a,i[10];
    float k; 

   cout<<"Enter 10 No. : ";
    
   for( j=0 ; j<=9 ; j++)
   {
   cin>>i[j];
   }
 
    k=(i[0]+i[1]+i[2]+i[3]+i[4]+i[5]+i[6]+i[7]+i[8]+i[9]) / 10;
    
    for( x=0 ; x<=9 ;x++)
	{
	    if( i[x] >= k ) 
	    {
	    	a1=i[x] ;
		}
	    else
	    {
	    }
    }
    
    cout<<a<<endl;
getch ();	
}