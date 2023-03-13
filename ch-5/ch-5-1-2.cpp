#include<iostream>
using namespace std;

class cus{
	int id;
	int age;
	string name;
	string com;
	string city;
	int mo_no;
	int s_va;
	public :
		void input(int id,int age,string name,string com,string city,int mo_no,int s_va){
			this->id=id;
			this->age=age;
			this->name=name;
			this->com=com;
			this->city=city;
			this->mo_no=mo_no;
			this->s_va=s_va;
			output();
		}
		void output(){
			cout<<"\n ID : "<<id;
			cout<<"\n Age : "<<age;
			cout<<"\n Name : "<<name;
			cout<<"\n company : "<<com;
			cout<<"\n City : "<<city;
			cout<<"\n moblie no. : "<<mo_no;
			cout<<"\n sim validity :"<<s_va<<endl;
			
		}
};

main(){
	int id,i,n=5;
	int age;
	string name;
	string com;
	string city;
	int mo_no;
	int s_va;
	for(i=1;i<=n;i++){
		cout<<"\nstudent "<<i<<"/5"<<endl;
		cout<<"\nenter id : ";
		cin>>id;
		cout<<"enter age : ";
		cin>>age;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter company : ";
		cin>>com;
		cout<<"enter city : ";
		cin>>city;
		cout<<"enter moblie no. : ";
		cin>>mo_no;
		cout<<"enter sim validity :";
		cin>>s_va;
		cus s;
		s.input(id,age,name,com,city,mo_no,s_va);
	}
}
