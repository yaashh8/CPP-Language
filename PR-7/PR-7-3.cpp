#include<iostream>
using namespace std;

class A{
	public :
		virtual void me(){
			cout<<"This is myslef...."<<endl;
		}
};
class B : public A
{
	public : 
		void me(){
			cout<<"That's y phine...."<<endl;
		}	
};

main(){
	B s;
	s.me();
	s.me();
	
}
