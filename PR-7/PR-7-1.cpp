#include<iostream>
using namespace std;

class A{
	public :
		void phone(){
			cout<<"Phone is calling...."<<endl;
		}
		virtual void call()=0;
};

class B : public A{
	public :
		void call(){
			cout<<"Calling ...."<<endl;
		}
};

main(){
	B s;
	s.phone();
	s.call();
}
