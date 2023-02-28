#include<iostream>
using namespace std;

class car {
	int id;
	char cm[20];
	char color[20];
	int modal;
	int relyear;
	
	public :
		void input(){
			cout<<"Enter id \t:";
			cin>>id;
			cout<<" Enter Company \t:";
			cin>>cm;
			cout<<" Enter color \t:";
			cin>>color;
			cout<<" Enter Modal \t:";
			cin>>modal;
			cout<<" Enter Released Year \t:";
			cin>>relyear;
			
		}
		void output(){
			cout<<"\n ID :"<<id;
			cout<<"\n CM :"<<cm;
			cout<<"\n Color :"<<color;
			cout<<"\n Modal :"<<modal;
			cout<<"\n Released Year :"<<relyear;
			
		}
};

main(){
	car e;
	
	cout<<"Employ 1/4\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 2/4\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 3/4\n";
	e.input();
	e.output();
	cout<<"\n\nEmploy 4/4\n";
	e.input();
	e.output();
	
}
