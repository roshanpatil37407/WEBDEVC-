#include<iostream>
using namespace std;
class A
{
	private:
		int a;
		public:
			void set_a();
			void get_a();
			friend A operator*(A,A);
			
};
void A::set_a()
{
	a=5;
}
void A::get_a()
{
	cout<<a<<"\n";
	
}
A operator*(A ob1,A ob2)
{
	A temp;
	temp.a=ob1.a*ob2.a;
	return temp;
}
int main()
{
	A ob1,ob2;
	ob1.set_a();
	ob2.set_a();
	cout<<"\nthe value of first object :";
	ob1.get_a();
	cout<<"\nthe value of second object :";
	ob2.get_a();
	A ob3=ob1*ob2;
	cout<<"\n value of after calling operator overloading function*is :";
	ob3.get_a();
}
