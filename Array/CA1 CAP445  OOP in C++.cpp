#include<iostream>
using namespace std ;

class product
{
	private:
		int sales , sold ;
	public:
		
		void shirts()
		{   
		    float s ;
			
			cout<<"Enter no. of Shirts in stock ";
			cin>>sales;
			cout<<"Enter the no. of shirts sold ";
			cin>>sold;
		
			
			s= sold*100;
			s=s/sales;
			cout<<"persentage of sold shirts "<<s<<endl;
			
			}	
		
		void paints()
		{ 
			float p;
			cout<<"Enter no. of paints in stock ";
			cin>>sales;
			cout<<"Enter the no. of paints sold ";
			cin>>sold;
			
			p= sold*100;
			p=p/sales;
			cout<<"persentage of sold paints "<<p<<endl;
			
			}
		
		void t_shirts()
		{ 
			float ts;
			cout<<"Enter no. of T_Shirts in stock  ";
			cin>>sales;
			cout<<"Enter the no. of T_shirts sold ";
			cin>>sold;
			
			ts= sold*100;
			ts=ts/sales; 
			
			cout<<"persentage of sold T_shirts"<<ts<<endl;
			
			}	
		
		void sweaters()
		{
			float sw;
			cout<<"Enter no. of sweaters in stock  ";
			cin>>sales;
			cout<<"Enter the no. of sweaters sold ";
			cin>>sold;
			
			sw= sold*100;
			sw=sw/sales;
			cout<<"persentage of sold sweaters "<<sw<<endl;
			
			}
			
		void hats()
		{
			float h;
			cout<<"Enter no. of hats in stock ";
			cin>>sales;
			cout<<"Enter the no. of hats sold ";
			cin>>sold;
			
			h= sold*100;
			h=h/sales;
			cout<<"persentage of sold hats "<<h<<endl;
			
			}		
					
		void bages()
		{
			float b;
			cout<<"Enter no. of bages in stock ";
			cin>>sales;
			cout<<"Enter the no. of bages sold ";
			cin>>sold;
			
			b= sold*100;
			b=b/sales;
			cout<<"persentage of sold bages "<<b<<endl;
			
			}				
			
		void total()
		{
			int total;
			
			cout<<"Enter total products in stocks ";
			cin>>sales;
			cout<<"Enter total products sold out ";
			cin>>sold;
			
			total= sold*100;
			total=total/sales;
			
			cout<<"persentage of total sold products :"<<total<<endl;
			}	
};

int main()
{
	product ob1;
	char products;
cout<<"Welcome....  To  My   Store : \n";	
cout<<"\nIf you want check Shirts press 1 :\n";
cout<<"If you want check paints press 2 :\n";
cout<<"If you want check T-Shirts press 3 :\n";
cout<<"If you want check sweaters press 4 :\n";
cout<<"If you want check Hates press 5 :\n";
cout<<"If you want check Bags press 6 :\n";
cout<<"If you want check Total products press 7 :\n";



cin>>products;
	
switch (products)
{
		
	
	case '1' :
	
	ob1.shirts();
	cout<<"\nwould you like to check other product details"<<endl;
	   break;
	
	case '2':
	ob1.paints();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
	case '3':
	ob1.t_shirts();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
	case'4':
	ob1.sweaters();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
	case'5':
	ob1.hats();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
	case '6':
	ob1.bages();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
		
	case '7':
	ob1.total();
	cout<<"\nwould you like to check other product details"<<endl;
	break;
	
	default :
	cout<<"\ninvalid!!!  Use valid Entery"<<endl;
}
return 0;	
}