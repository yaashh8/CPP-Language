#include<iostream>
using namespace std;

class A{
	public :
		int a;
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Value of a : "<<a<<endl;
		}	
};

class B : public A{
	public :
		int b,ab;
	public :
		void input(){
			cout<<"Enter b : ";
			cin>>b;
			ab = a+b;
			cout<<"sum of a and b is : "<<ab<<endl;
		}	
};

class C{
	public :
		int c;
	public :
		void input(){
			cout<<"Enter c : ";
			cin>>c;
			cout<<"Value of c : "<<c<<endl;
		}	
};

class D : public C{
	public :
		int d,cd;
	public :
		void input(){
			cout<<"Enter d : ";
			cin>>d;
			cd = c+d;
			cout<<"sum of c and d is : "<<cd<<endl;
		}	
};

class E : public B , public D{
	
	public :
		void input(){
			cout<<"The sum of four diffrent no. are : "<<ab+cd<<endl;
		}
};

main(){
	B s;
	s.A :: input();
	s.B :: input();
	D f;
	f.C :: input();
	f.D :: input();
	E e;
	e.E:: input();
}
