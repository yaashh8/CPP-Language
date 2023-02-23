#include<iostream>
using namespace std;
inline void fa(int);

main(){
	int n,fact=1;
	cout<<"N :";
	cin>>n;
	
	int i;
	
	for(i=1;i<=n;i++){
		cout<<i;
		fact = fact*i;
	}
	fa(fact);
	
}

inline void fa(int fact){
	cout<<"\nfactorial is : "<<fact<<endl;
}


