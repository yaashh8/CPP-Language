#include<iostream>
using namespace std;

class cricket{
	protected :
		int over;
	public :
		void inover()
		{
			cout << "Enter over : ";
			cin >> over; 
		}
};

class t20 : public cricket{
	public :
		void getover()
		{
			cout <<"t20 over is : "<<over<< endl;
		}
};

class test : public cricket{
	public :
		void getover()
		{
			cout << "test over is : "<<over << endl;
		}
};

int main()
{
	test t;
	t.inover();
	t.getover();
	
	t20 t1;
	t1.inover();
	t1.getover();
	 
}
