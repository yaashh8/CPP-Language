#include<iostream>
using namespace std;

class hotel{
	int id,rate,s_con,r_con;
	string name,type,loc;
	static int e_y;
	public :
		void input(int id,string name,string type,int s_con,int r_con,string loc,int rate){
			this->id=id;
			this->name=name;
			this->type=type;
			this->s_con=s_con;
			this->r_con=r_con;
			this->loc=loc;
			this->rate=rate;
		}
		void output(){
			cout<<"the id :"<<id<<endl;
			cout<<"the name :"<<name<<endl;
			cout<<"the type :"<<type<<endl;
			cout<<"the staf quantity :"<<s_con<<endl;
			cout<<"the romm quantity :"<<r_con<<endl;
			cout<<"the city :"<<loc<<endl;
			cout<<"the rating :"<<rate<<endl;
			cout<<"the estabishled year :"<<e_y<<endl;
		}
};
int hotel :: e_y = 2023;
main(){
	int n,i;
	cout<<"enter no. of hotel : ";
	cin>>n;
	cout<<"\n";
	int id,rate,s_con,r_con;
	string name,type,loc;
	
	hotel s[n];
	for(i=0;i<n;i++){
		cout<<"Enter the id :";
		cin>>id;
		cout<<"Enter the name :";
		cin>>name;
		cout<<"Enter the type :";
		cin>>type;
		cout<<"Enter the staf quantity  :";
		cin>>s_con;
		cout<<"Enter the romm quantity :";
		cin>>r_con;
		cout<<"Enter the city :";
    	cin>>loc;
		cout<<"Enter the rating :";
		cin>>rate;
		s[i].input(id,name,type,s_con,r_con,loc,rate);
		cout<<"----------------------------------"<<endl;
		s[i].output();
		cout<<"----------------------------------"<<endl;
	}
	
}
