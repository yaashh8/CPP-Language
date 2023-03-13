#include<iostream>
using namespace std;

class sum{
	public :
		int a,b;
	public :
		sum(int a,int b){
			this->a=a;
			this->b=b;
		}
		
};

main(){
	int a,b;
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	cout<<"the sum is : "<<a+b<<endl;
	sum s(a,b);
}
