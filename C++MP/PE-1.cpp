#include<iostream>
using namespace std;

main(){
	int n,f=1,i;
	
	cout<<"Enter number : ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		cout<<f<<" X "<<i<<endl;
		f=f*i;
	}
	cout<<"The factorial series of "<<n<<" is : "<<f;
}
