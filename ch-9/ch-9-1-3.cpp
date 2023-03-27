#include<iostream>
using namespace std;

main(){
	int n;
	cout<<"Enter N : ";
	cin>>n;
	string p;
	cout<<"Enter your password : ";
	cin>>p;
	string s;
	int a=0;
	try{
		for(int i=0;i<n;i++){
			if(p[i]>=65 && p[i]<=90){
				a++;
			}
		}
		if(a>0){
			cout<<"Your password is aligible...."<<endl;
		}
		else{
				throw p;
			}
		
	}
	catch(...){
		cout<<"Your passwoed shoul contain an uppercase letter!!!";
	}
}
