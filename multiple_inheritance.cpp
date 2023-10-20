#include<iostream>
using namespace std;
class text1
{
	protected:
	 int n1;
	public:

	void get1();
	void disp1();
	

};
void text1::get1()

		{
		cout<<"\n enter the value of first number:";
		cin>>n1;
	    }
void text1::disp1()
{
	cout<<"\n the first number is:"<<n1;
};

class text2
{
	protected:
	int n2;
	public:
			void get2();
	void disp2();
};
void text2::get2()
{
	cout<<"\n enter the value of second number:";
		cin>>n2;
}
			
		void text2::disp2()
		{
			cout<<"\n  the second number is:"<<n2;
		};
class mul:public text1,public text2
{
	public:
	 void disp3()
	 {
	 	disp1();
	 	disp2();
	 	cout<<"\n multiplication="<<n1*n2;
	 	
	 }
};

int main()
{
mul m1;
m1.get1();
m1.get2();
m1.disp3();

}
