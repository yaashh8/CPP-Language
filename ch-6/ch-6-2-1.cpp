#include<iostream>
using namespace std;

class RBI{
	public :
	int rate;
	public :
		void input(){
			cout<<"RBI rate : ";
			cin>>rate;
		}
		void output(){
			cout<<"Rate od RBI : "<<rate<<endl;
		}
};

class SBI : public RBI
{
	public :
	int rate1;
	public :
		void input(){
			cout<<"rate of SBI : ";
			cin>>rate1;
		}	
		void output(){
			cout<<"Rate of SBI : "<<rate1<<endl;
			cout<<"Rate of RBI : "<<rate<<endl;
		}
};

class BOB : public RBI{
	public :
	int rate2;
	public :
		void input(){
			cout<<"rate of BOB : ";
			cin>>rate2;
		}	
		void output(){
			cout<<"Rate of BOB : "<<rate2<<endl;
			cout<<"Rate of RBI : "<<rate<<endl;
		}
};

class ICICI : public  RBI{
	public :
	int rate3;
	public :
		void input(){
			cout<<"rate of ICICI : ";
			cin>>rate3;
		}	
		void output(){
			cout<<"Rate of ICICI : "<<rate3<<endl;
			cout<<"Rate of RBI : "<<rate<<endl;
		}
};

main(){
	SBI s;
	s.RBI :: input();
	s.SBI :: input();
	s.SBI :: output();
	BOB b;
	b.RBI :: input();
	
	b.BOB :: input();
	b.BOB :: output();
	ICICI i;
	i.RBI :: input();
	
	i.ICICI :: input();
	i.ICICI :: output();
}
