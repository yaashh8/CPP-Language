#include<iostream>
using namespace std;

class A{
	public :
	float a,b,r;
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			cout<<"Enter r : ";
			cin>>r;
		}
		virtual void area()=0;
};

class B : public A{
	public :
		void area(){
			cout<<"Area of rectangle is : "<<a*b<<endl;
			cout<<"Area of triangle is : "<<a*b*0.5<<endl;
			cout<<"Area of circle is : "<<22/7*r*r<<endl;
		}
};

main(){
	B s;
	s.A::input();
	cout<<"-----------------------------------------"<<endl;
	s.B::area();
}
