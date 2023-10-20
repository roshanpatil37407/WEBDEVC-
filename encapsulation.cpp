#include<iostream>
using namespace std;
class Roshan
{
	int No;
	char name[10];
	public:
		int read()
		{
			cout<<"\n Enter the student information :";
			cin>>No;
			cin>>name;
		}
		int print()
		{
			cout<<"\n enter the No :"<<No;
			cout<<"\n enter the name :"<<name;
			
		}
};
int main()
{
  Roshan obj;
  obj.read();
  obj.print();
  return 0;	
}
