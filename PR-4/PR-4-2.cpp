#include<iostream>
using namespace std;

class A{
	public :
		int id,std;
		string name,f_sub;
	public :
		void input(){
			cout<<"enter id : ";
			cin>>id;
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter standard : ";
			cin>>std;
			cout<<"enter favourite subject : ";
			cin>>f_sub;
		}
};
class B{
	public :
		int id,std;
		string name,f_sub;
	public :
		void output(A a){
			a.input();
			cout<<"---------------------------------------------------------------------------------------";
			cout<<"id : "<<a.id<<endl;
			cout<<"name : "<<a.name<<endl;
			cout<<"std : "<<a.std<<endl;
			cout<<"favourite subject : "<<a.f_sub<<endl;
		}
};

main(){
	A a;
	B b;
	b.output(a);
}
