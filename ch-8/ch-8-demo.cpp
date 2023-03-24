#include<iostream>
using namespace std;

class A{
	int a,b;
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		virtual void output(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
};

class B : public A{
	int a,b;
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void output(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
};

main(){
	B b;
	b.A::input();
	b.B::input();
	b.output();
	b.output();
}
