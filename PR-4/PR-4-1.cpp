#include<iostream>
using namespace std;

class emp{
	int id,exp,salary,con;
	string name,role,email;
	public :
		void input(){
			cout<<"enter name : ";
			cin>>name;
			cout<<"enter id : ";
			cin>>id;
			cout<<"enter role : ";
			cin>>role;
			cout<<"enter salary : ";
			cin>>salary;
			cout<<"enter contact : ";
			cin>>con;
			cout<<"enter email : ";
			cin>>email;
			cout<<"enter experiance : ";
			cin>>exp;
		}
		void output(){
			cout<<"name : "<<name<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"role : "<<role<<endl;
			cout<<"salary : "<<salary<<endl;
			cout<<"contact : "<<con<<endl;
			cout<<"email : "<<email<<endl;
			cout<<"experiance : "<<exp<<endl;
		}
};

main(){
	int n=5,i;
	emp e;
	for(i=1;i<=n;i++){
		e.input();
		cout<<"-------------------------------------------------------------------\n";
		e.output();
		cout<<"-------------------------------------------------------------------\n";
	}
}
