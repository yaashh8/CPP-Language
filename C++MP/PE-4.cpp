#include<iostream>
using namespace std;

class cricket{
	public :
		int over;
	public :
		void inover()
		{
			cout << "Enter over : ";
			cin >> over; 
		}
};

class culb : public cricket{
	public :
		void getover()
		{
			cout <<"Culb over is : "<<over<< endl;
		}
};

class odi : public cricket{
	public :
		void getover()
		{
			cout << "Odi over is : "<<over << endl;
		}
};

int main()
{
	odi t;
	t.inover();
	t.getover();
	
	culb t1;
	t1.inover();
	t1.getover();
	 
}
