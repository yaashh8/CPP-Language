#include<iostream>
using namespace std;

class shape{
	public :
		int w,h;
	public :
	void input(){
		cout<<"Enter the wigth(in meter) : ";
		cin>>w;
		cout<<"Enter the heigth(inmeter) : ";
		cin>>h;
	}	
};

class rec : public shape{
	public :
		void output(){
			cout<<"The size of rectangle is : "<<w*h<<"m^2"<<endl;
		}
};

class tri : public shape{
	public :
		void output(){
			cout<<"The size of triangle is : "<<(w*h)/2<<"m^2"<<endl;
		}
};

main(){
	rec r;
	r.shape :: input();
	r.rec :: output();
	tri t;
	t.shape :: input();
	t.tri :: output();
}