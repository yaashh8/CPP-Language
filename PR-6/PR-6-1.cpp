#include<iostream>
using namespace std;

class massage{
	string m;
	public :
		massage(){
			cout<<"Enter massage : ";
			cin>>m;
		}
		void print(){
			cout<<"Massage : "<<m<<endl;
		}
		void print(string n){
			cout<<m<<" "<<n<<endl;
		}
};

main(){
	massage s;
	s.print();
	s.print("by...Yash Bhakta");
}
