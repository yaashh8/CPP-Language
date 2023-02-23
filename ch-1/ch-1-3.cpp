#include<iostream>
using namespace std;

main (){
	int sy,ey;
	cout<<"staring year :";
	cin>>sy;
	cout<<"ending year :";
	cin>>ey;
	int n;
	cout<<"enter the value of a :";
	cin>>n;
	
	int a[n],i;
	for(i=sy;i<=ey;i++){
		if(i%4==0){
		a[(i-sy)/4] = i;
	    }
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
