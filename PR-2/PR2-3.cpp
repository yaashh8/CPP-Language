#include<iostream>
using namespace std;

int f(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else 
	{
		return a*f(a-1);
	}
}

int main()
{
	int a;
	cout<<"Enter N :";
	cin>>a;
	cout<<"factorial is : "<<f(a);
}
