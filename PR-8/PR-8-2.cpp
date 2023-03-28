#include<iostream>
using namespace std;

class X{
	public :
		int a,b;
	public :
		void input(int a,int b){
				try{
			if(b==0)
			{
				throw b;	
			}
			else {
				cout << "ANS : " << a/b << endl;
			}
		}
			catch(int c)
			{
				cout << "can not divied " << c << endl;
			}
		}
};

int main()
{
	int a,b;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	
	X s;
	s.input(a,b);
}
