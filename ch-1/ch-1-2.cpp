#include<iostream>
using namespace std;

main(){
	char s[20];
	cout<<"string :";
	gets(s);
	
	int i;
	
	for(i=0;i<20;i++){
		if(s[0]>=97 && s[0]<=122){
		s[0] -= 32;
	}
		else if(s[i]>=65 && s[i]<=90){
			s[i] += 32; 
		}
	}
	
	cout<<"string is :"<<s;
	
}
