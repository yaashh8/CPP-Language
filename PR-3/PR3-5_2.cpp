#include<iostream>
using namespace std;

class sum{
	int a,b;
	public :
		void input(int c, int d){
			a=c;
			b=d;
		}
		void output(){
			cout<<"the sum of "<< a << " and "<< b << " : "<< a+b;
		}
};

main(){
	int c,d;
	sum s;
	cout<<"enter valur of c :";
	cin>>c;
	cout<<"enter valur of d :";
	cin>>d;
	s.input(c,d);
	s.output();
}
