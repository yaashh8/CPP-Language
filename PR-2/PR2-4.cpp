#include<iostream>
using namespace std;

inline void ta(int,int);

int main()
{
	int n,i;
	cout << "Enter your number : ";
	cin >> n;
	for(i=1;i<=10;i++){
		ta(n,i);
	}
	
}

inline void ta(int n,int i)
{
	cout << n << "X" << i << "=" << n*i << endl;
}
