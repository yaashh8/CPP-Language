#include<iostream>
using namespace std;

class con{
	public :
		const int age=18;
	public :
		void input(){
			cout<<"AGE : "<<age;
		}	
};

main(){
	con c;
	c.input();
}