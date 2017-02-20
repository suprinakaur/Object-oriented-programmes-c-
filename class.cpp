#include<iostream>
using namespace std;
class num{
	int a[100],i,n;
	public:
		void get(){
			cout<<"enter the number of inputs:";
			cin>>n;
			cout<<"enter the number:";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		
		void put(){
			for(i=0;i<n;i++){
				cout<<a[i]<<'\n';
			}
		}
		num operator+(num &obj)
		{
			num res;
			for(i=0;i<n;i++){
				res.a[i]=a[i]+obj.a[i];			
		}
		return res;
	}
	
};
int main()
{
	num o1,o2,o3;
	o1.get();
	o2.get();
	o3.get();
	o3=o1+o2;
   
	}
