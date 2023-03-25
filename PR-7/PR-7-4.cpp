#include<iostream>
using namespace std;

class shape{
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
};
class circle : public shape{
	public :
		virtual void area()=0;
};

class triangle : public circle{
	public :
		void area(){
			cout<<"Area of circle : "<<3.14*r*r<<endl;
			cout<<"Area of triangle : "<<a*b*0.5<<endl;
		}
}; 

main(){
	triangle s;
	s.input();
	s.area();
}
