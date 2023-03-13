#include<iostream>
using namespace std;

class stud{
	int id;
	int age;
	string name;
	string course;
	string city;
	string collage;
	public :
		void input(int id,int age,string name,string course,string city,string collage){
			this->id=id;
			this->age=age;
			this->name=name;
			this->course=course;
			this->city=city;
			this->collage=collage;
			output();
		}
		void output(){
			cout<<"\n ID : "<<id;
			cout<<"\n Age : "<<age;
			cout<<"\n Name : "<<name;
			cout<<"\n Course : "<<id;
			cout<<"\n City : "<<city;
			cout<<"\n Collage : "<<collage<<endl;
		}
};

main(){
	int id,i,n=5;
	int age;
	string name;
	string course;
	string city;
	string collage;
	for(i=1;i<=n;i++){
		cout<<"\nstudent "<<i<<"/5"<<endl;
		cout<<"\nenter id : ";
		cin>>id;
		cout<<"enter age : ";
		cin>>age;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter course : ";
		cin>>course;
		cout<<"enter city : ";
		cin>>city;
		cout<<"enter collage : ";
		cin>>collage;
		stud s;
		s.input(id,age,name,course,city,collage);
	}
}
