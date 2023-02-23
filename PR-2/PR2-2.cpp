#include<iostream>
using namespace std;

inline void s(int[],int[],int);

int main()
{
	int n,i;
	
	cout << "ENter N : ";
	cin >> n;
	
	int p[n],q[n];
	
	for(i=0;i<n;i++)
	{
		cout << "p[" << i << "] :";
		cin >> p[i];
	}
	for(i=0;i<n;i++)
	{
		cout << "q[" << i << "] :";
		cin >> q[i];
	}
	s(p,q,n);
}

inline void s(int p[],int q[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		p[i]=p[i]+q[i];
		q[i]=p[i]-q[i];
		p[i]=p[i]-q[i];
	}
	for(i=0;i<n;i++)
	{
		cout << "\np[" << i << "] :" << p[i] << endl;
	}
	for(i=0;i<n;i++)
	{
		cout << "\nq[" << i << "] :" << q[i] << endl;
	}
}
