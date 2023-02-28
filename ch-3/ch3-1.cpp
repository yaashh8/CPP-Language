#include<iostream>
using namespace std;

class employ {
	int id;
	char name[20];
	char role[20];
	int age;
	int salary;
	int exp;
	char city[20];
	char cm[20];
	public :
		void input(){
			cout<<"Enter id \t:";
			cin>>id;
			cout<<" Enter NAME \t:";
			cin>>name;
			cout<<" Enter Role \t:";
			cin>>role;
			cout<<" Enter Age \t:";
			cin>>age;
			cout<<" Enter Wage \t:";
			cin>>salary;
			cout<<" Enter Experince \t:";
			cin>>exp;
			cout<<" Enter City \t:";
			cin>>city;
			cout<<"Enter Company Name :";
			cin>>cm;
		}
		void output(){
			cout<<"\nID :"<<id;
			cout<<"\nName :"<<name;
			cout<<"\nRole :"<<role;
			cout<<"\nAge :"<<age;
			cout<<"\nWage :"<<salary;
			cout<<"\nExperince :"<<exp;
			cout<<"\nCity :"<<city;
			cout<<"\nC M :"<<cm;
		}
};

main(){
	employ e;
	
	cout<<"Employ 1/5\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 2/5\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 3/5\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 4/5\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 5/5\n";
	e.input();
	e.output();
	
}
