#include<iostream>
using namespace std;

main(){
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	try{
		if(age>=18){
			cout<<"You are aligible to vote..."<<endl;
		}
		else{
			throw age;
		}
	}
	catch(...){
		cout<<"You can not vote if you are below 18 years!!!"<<endl;
	}
}
