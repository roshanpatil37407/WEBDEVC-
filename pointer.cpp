#include<iostream>
using namespace std;
int main()
{
	int var=10;
	int *ptr;
	ptr=&var;
	cout<<"\n value of ptr :"<<ptr;
	cout<<"\n value of var :" <<var;
	cout<<"\n value of *ptr :"<<*ptr;
}
