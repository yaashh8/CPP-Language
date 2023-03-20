#include<iostream>
using namespace std;

class calculator{
	public :
		void get(float a,float b)
		{
			cout << "Division : " << a/b << endl;
		}
		void get(int a,int b,int c)
		{
			cout << "Subtraction : " << a-b-c << endl;
		}
		void get(int a,int b,int c,int d)
		{
			cout << "Multiplication : " << a*b*c*d << endl;
		}
		void get(int a,int b,int c,int d,int e)
		{
			cout << "Addition : " << a+b+c+d+e << endl;
		}
};


int main()
{	int a,b,c,d,e;

	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	cout<<"enter c : ";
	cin>>c;
	cout<<"enter d : ";
	cin>>d;
	cout<<"enter e : ";
	cin>>e;
	calculator c1;
	c1.get(a,b);
	c1.get(a,b,c);
	c1.get(a,b,c,d);
	c1.get(a,b,c,d,e);
}
 
