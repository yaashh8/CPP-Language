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
		void input(){
			
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
	int id,i,n;
	cout<<"enter no. of students : ";
	cin>>n;
	int age;
	string name;
	string course;
	string city;
	string collage;
	stud s[n];
	for(i=1;i<=n;i++){
		cout<<"\nstudent "<<i<<"/"<<n<<endl;
		s[i].input();
		s[i].output();
	}
}
