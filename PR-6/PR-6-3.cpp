#include<iostream>
using namespace std;

class X{
	protected :
	int a,b;
	public :
		void set(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
};
class Y : public X{
	public :
		void set(int x,int y){
			a=x;
			b=y;
		}
		void get(){
			cout<<"A + B is : "<<a+b<<endl;
		}
};

main(){
	int x,y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter y : ";
	cin>>y;
	
	Y s;
	s.X :: set();
	s.Y :: set(x,y);
	s.get();
		
}
