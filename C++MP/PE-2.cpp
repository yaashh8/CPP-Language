#include<iostream>
using namespace std;

class bank{
	public :
		int a_n,a_ba;
		string a_name,a_type,a_b;
	public :
		void input(){
			cout<<"Enter Acount Name : ";
			cin>>a_name;
			cout<<"Enter Acount Type : ";
			cin>>a_type;
			cout<<"Enter Acount Branch : ";
			cin>>a_b;
			cout<<"Enter Acount Number : ";
			cin>>a_n;
			cout<<"Enter Acount Balance : ";
			cin>>a_ba;
		}
		void output(){
			cout<<"The Acount Name : "<<a_name<<endl;
			cout<<"The Acount Type : "<<a_type<<endl;
			cout<<"The Acount Branch : "<<a_b<<endl;
			cout<<"The Acount Number : "<<a_n<<endl;
			cout<<"The Acount Balance : "<<a_ba<<endl;
		}
};

main(){
	int n,i;
	
	cout<<"Enter numbers of Acount : ";
	cin>>n;
	bank s[n];
	for(i=0;i<n;i++){
		cout<<"---------------------------------------"<<endl;
		s[i].input();
		cout<<"---------------------------------------"<<endl;
		s[i].output();
	}
}
