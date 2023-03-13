#include<iostream>
using namespace std;

class cafe{
	int id,rate,s_con;
	string name,type,loc;
	static int e_y;
	public :
		cafe(){
			cout<<"-----------------------------------------"<<endl;
			cout<<"Enter the id :";
			cin>>id;
			cout<<"Enter the name :";
			cin>>name;
			cout<<"Enter the type :";
			cin>>type;
			cout<<"Enter the staf quantity  :";
			cin>>s_con;
			cout<<"Enter the city :";
			cin>>loc;
			cout<<"Enter the rating :";
			cin>>rate;
		}
		void output(){
			cout<<"the id :"<<id<<endl;
			cout<<"the name :"<<name<<endl;
			cout<<"the type :"<<type<<endl;
			cout<<"the staf quantity :"<<s_con<<endl;
			cout<<"the city :"<<loc<<endl;
			cout<<"the rating :"<<rate<<endl;
			cout<<"the estabishled year :"<<e_y<<endl;
		}
		~cafe(){
			cout<<"\nvisit again !!!!\n";
		}
};
int cafe :: e_y = 2023;
main(){
	int n,i;
	cout<<"enter no. of hotel : ";
	cin>>n;
	cout<<"\n";
	
	for(i=1;i<=n;i++){
		cafe c;
		cout<<"--------------------------------------------"<<endl;
		c.output();
		cout<<"--------------------------------------------"<<endl;
	}
	
}
