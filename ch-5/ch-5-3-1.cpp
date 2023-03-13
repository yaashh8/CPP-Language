#include<iostream>
using namespace std;

class time1{
	int h,m,s;
	public :
		void input(){
			cout<<"enter the time in hours : ";
			cin>>h;
			cout<<"enter the time in minutes : ";
			cin>>m;
			cout<<"enter the time in seconds : ";
			cin>>s;
		}
		void output(){
			cout<<"Time is :- "<<h<<":"<<m<<":"<<s<<endl;
		}
		friend class time2;
};
class time2{
	int h1,m1,s1,th,tm,ts;
	public :
		void set(){
			cout<<"enter the time in hours : ";
			cin>>h1;
			cout<<"enter the time in minutes : ";
			cin>>m1;
			cout<<"enter the time in seconds : ";
			cin>>s1;
		}
		void get(){
			cout<<"Time is :- "<<h1<<":"<<m1<<":"<<s1<<endl;
		}
		void total(time1 t){
			th=t.h+h1;
			tm=t.m+m1;
			ts=t.s+s1;
			if(ts>=60){
				tm++;
				ts-=60;
			}
			if(tm>=60){
				th++;
				tm-=60;
			}
			cout<<"The total time is :- "<<th<<":"<<tm<<":"<<ts<<endl;
		}
};

main(){
	time1 t;
	t.input();
	t.output();
	time2 t1;
	t1.set();
	t1.get();
	t1.total(t);
}
