#include<iostream>
using namespace std;

main(){
	int n;
	cout<<"enter the value of a :";
	cin>>n;
	
	int a[n],i;
	for(i=0;i<n;i++){
		cout<<"a[i] :";
		cin>>a[i];
		
	}
	for(i=0;i<n;i++){
    	if(a[i]%2==0){
		cout<<a[i]<<endl;
	    }
    }
	
	
}
