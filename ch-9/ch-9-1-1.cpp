#include<iostream>
using namespace std;

main(){
	float a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	try{
		if(b!=0){
			cout<<a<<"/"<<b<<": "<<a/b<<endl;
		}
		else{
			throw a/b;
		}
	}
	catch(float i){
		cout<<"A number can not be divisible by zero!!!"<<endl;
	}
}
