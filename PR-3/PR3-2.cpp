#include<iostream>
using namespace std;

class time {
	int s,m;
	public :
		void input(){
			cout<<"minutes \t:";
			cin>>m;
			cout<<"seconds \t:";
			cin>>s;
		}
		void output(){
			if(s>=60){
				m = m+1;
				s -= 60;
			}
			cout<<"Total time is "<<m<<" minutes "<<s<<" seconds "<<endl;
		}
};

main(){
	time t;
	t.input();
	t.output();
}
