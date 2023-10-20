#include<iostream>
using namespace std;
class text1
{
	public:
	int a;
	void geta()
	{
		cout<<"\n enter the value of a :";
		cin>>a;
	}
};
class text2:public text1
{
	int b;
	public:
		void getb()
		{
			cout<<"\n enter the value of b :";
			cin>>b;
			
		}
		void cal()
		{
			cout<<"\n addition is="<<a+b;
		}
};
int main()
{
	text2 t2;
	t2.geta();
	t2.getb();
	t2.cal();
}
