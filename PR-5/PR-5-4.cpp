#include<iostream>
using namespace std;

class ceo{
	public :
		int sal;
	public :
		void input(){
			cout<<"Enter CEO given salary : ";
			cin>>sal;
		}	
		void output(){
			cout<<"CEO given salary : "<<sal<<endl;
		}
};

class man{
	public :
		int wag;
	public :
		void input(){
			cout<<"Enter Man given salary : ";
			cin>>wag;
		}	
		void output(){
			cout<<"Man given salary : "<<wag<<endl;
		}
};

class emp : public ceo , public man{
	public :
		int age,exp,s;
		string name;
	public :
		void input(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter age : ";
			cin>>age;
			cout<<"Enter experiance : ";
			cin>>exp;
			cout<<"Enter salary : ";
			cin>>s;
		}	
		void output(){
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Experiance : "<<exp<<endl;
			cout<<"Salary : "<<s<<endl;
		}
};

int main(){
	emp e;
	e.emp :: input();
	e.emp :: output();
	e.man :: input();
	e.man :: output();
	e.emp :: input();
	e.emp :: output();
	e.ceo :: input();
	e.ceo :: output();
}