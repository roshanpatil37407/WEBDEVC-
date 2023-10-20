#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int(*ptr)(int,int);
	ptr=add;
	int sum=ptr(5,6);
	cout<<"\nValue of sum is :"<<sum<<endl;
}
