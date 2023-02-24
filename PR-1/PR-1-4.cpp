#include<iostream>
using namespace std;

main(){
	char s;
	cout<<"enter char :";
	cin>>s;
	
	if(s=='A' || s=='a' || s=='E' || s=='e' || s=='I' || s=='i' || s=='O' || s=='o' || s=='U' || s=='u'){
		cout<<"it is a vowel";
	}
	else{
		cout<<"it is a consonant";
	}
}
