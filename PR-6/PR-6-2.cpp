#include<iostream>
using namespace std;

class Y{
	public :
		void print(){
			cout<<"Wellcome ..."<<endl;
		}
		void print(int a){
			cout<<a<<endl;
		}
		void print(int a, int b){
			cout<<a<<"\t"<<b<<endl;
		}
		void print(int a,int b,int c){
			cout<<a<<"\t"<<b<<"\t"<<c<<endl;
		}
};

main(){
	Y s;
	s.print();
	s.print(20);
	s.print(20,30);
	s.print(20,30,40);
}
