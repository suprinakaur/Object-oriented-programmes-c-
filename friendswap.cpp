#include<iostream>
using namespace std;
class B;
class A
{

 friend class B;
	int x;
	public:
		void get()
		{
			cin>>x;
		}
		void show()
		{
			cout<<x;
		}
		
};
class B
{
	int y;
	public:
		void get()
		{
			cin>>y;
		}
		void show()
		{
			cout<<y;
		}
		void swap(A &a)
		{
		
		int temp=a.x;
		a.x=y;
		y=temp;
	}

};
int main()
{
	A a;
	B b;
	a.get();
	b.get();
	b.swap(a);
	a.show();
	b.show();
	}



