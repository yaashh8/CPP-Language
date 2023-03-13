#include<iostream>
using namespace std;

class sum {
	public :
	int a,b;
	public :
		sum(const sum &s){
			cout<<"enter the a : ";
			cin>>a;
			cout<<"enter the b : ";
			cin>>b;
			cout<<"------------------------------------";
			cout<<"\nTotal is : "<<a+b<<endl;
		}
};

main(){
	sum s(s);
}