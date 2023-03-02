#include<iostream>
using namespace std;

class sum {
	int f1,f2,i1,i2,a,b;
	public :
	void input(int fe1,int fe2,int in1,int in2){
		f1=fe1;
		f2=fe2;
		i1=in1;
		i2=in2;
	}
	void output(){
		int a,b;
		
			if(i1>12){
			i1=i1-12;
			f1=f1+1;
			}
			if(i2>12){
			i2=i2-12;
			f2=f2+1;
		}
			a = f1+f2;
			b = i1+i2;
			if(b>12){
			b=b-12;
			a=a+1;
			cout<<"\nThe total sum  is "<<a<<" feet and "<<b<<" inch "<<endl;
		}
		
		
		
	}
};

main(){
	int fe1,fe2,in1,in2;
	sum s;
	cout<<"enter feet :";
	cin>>fe1;
	cout<<"enter inch :";
	cin>>in1;
	cout<<"enter feet :";
	cin>>fe2;
	cout<<"enter inch :";
	cin>>in2;
	s.input(fe1,fe2,in1,in2);
	s.output();
}
