#include<iostream>
using namespace std;

main(){
	
	
	char s[20],i;
	cout<<"string :";
	cin>>s;
	
	for(i=0;i<=20;i++){
	
		if(s[i]<=57 && s[i]>=48){
			cout<<"it is numeric";
		}
	}
	
}

