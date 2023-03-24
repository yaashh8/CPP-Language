#include<iostream>
using namespace std;

class admin{
	public :
		string c_name;
		int m_sal,e_sal,t_stf,t_rev;
	public :
		void access(){
			cout<<"Company Name : ";
			cin>>c_name;
			cout<<"Manager salary : ";
			cin>>m_sal;
			cout<<"Employee salary : ";
			cin>>e_sal;
			cout<<"Total staff : ";
			cin>>t_stf;
			cout<<"Total revenue : ";
			cin>>t_rev;
		}	
};

class man : public admin{
	public :
		void myaccess(){
			cout<<"Name of company : "<<c_name<<endl;
			cout<<"Manager's salary : "<<m_sal<<endl;
			cout<<"Employee's salary : "<<e_sal<<endl;
		}
};

class emp : public man{
	public :
		void myaccess(){
			cout<<"Total staff working : "<<t_stf<<endl;
			cout<<"Total revenue of the company : "<<t_rev<<endl;
		}
};

main(){
	emp e;
	e.access();
	cout<<"----------------------------------------"<<endl;
	e.man::myaccess();
	cout<<"----------------------------------------"<<endl;
	e.myaccess();
}
