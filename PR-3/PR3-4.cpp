#include<iostream>
using namespace std;

class home {
	int n_far;
	char r_name[20];
	char color[20];
	int size;
	int n_wids;
	
	public :
		void input(){
			cout<<" Enter room name \t:";
			cin>>r_name;
			cout<<"Enter no. of farnitures \t:";
			cin>>n_far;
			cout<<" Enter color \t:";
			cin>>color;
			cout<<" Enter room size \t:";
			cin>>size;
			cout<<" Enter no. of windows  \t:";
			cin>>n_wids;
			
		}
		void output(){
			cout<<"\n room name :"<<r_name;
			cout<<"\n no. of farnituers :"<<n_far;
			cout<<"\n Color :"<<color;
			cout<<"\n room size :"<<size;
			cout<<"\n no. of windows  :"<<n_wids;
			
		}
};

main(){
	home h;
	int i,n;
	cout<<"enter room no. : ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"\n\nroom "<<i<<"/"<<n<<endl;
		h.input();
		h.output();
	}
		
}
