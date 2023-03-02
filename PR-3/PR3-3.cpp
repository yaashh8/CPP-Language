#include<iostream>
using namespace std;

class time{
	int h,m,s;
	public :
		void input(){
			cout<<"seconds :";
			cin>>s;
		}
		void output(){
			m = s/60;
			s = m+24;
			if(s>=60){
				m = m+1;
				s-=60;
			}
			
			if(m>=60){
				h = h+1;
				m-=60;
				s-=60;
			}
			
			cout<<"\nTotal time is "<<h<<" hours "<<m<<" minutes "<<s<<" seconds "<<endl;
		}
};

main(){
	time t;
	t.input();
	t.output();
}

