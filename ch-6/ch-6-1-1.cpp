#include<iostream>
using namespace std;

class  X{
	public :
	int a,b,c,d;
};
class Y : public X
{
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			cout<<"Enter c : ";
			cin>>c;
			
		}
		void output(){
			cout<<"cube of A : "<<a*a*a<<endl;
			cout<<"cube of B : "<<b*b*b<<endl;
			cout<<"cube of C : "<<c*c*c<<endl;
			d = (a*a*a)+(b*b*b)+(c*c*c);
			cout<<"The summ of cubes is : "<<d<<endl;
		}
};

main(){
	Y s;
	s.input();
	s.output();
}
