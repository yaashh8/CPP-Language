#include<iostream>
using namespace std;

class P{
	public :
	float c;
	public :
		void cle(){
			cout<<"Enter celsius : ";
			cin>>c;
		}
};
class Q : public P
{
	public :
	float f;
	public :
		void fer(){
			f=(c*9/5)+32;
			cout<<"Fahrenheit is : "<<f<<endl;	
		}
	
};
class R : public Q
{
	public :
	float k;
	public :
		void kev(){
			k=(f*5/9)+459.67;
			cout<<"Kelvin is : "<<k<<endl;
		}	
};

main(){
	R s;
	s.cle();
	s.fer();
	s.kev();
}
