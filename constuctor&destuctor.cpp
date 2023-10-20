#include<iostream>
using namespace std;
class construct
{
	public:
		int a,b;
		construct()
		{
			cout<<"\nConstructor Called"<<endl;
			a=10;
			b=20;
		}
		~construct()
		{
			cout<<"\nDistructor Called";
		}
};
int main ()
{
	construct c;
	cout<<"a :"<<c.a<<endl<<"b:"<<c.b<<endl;
}
