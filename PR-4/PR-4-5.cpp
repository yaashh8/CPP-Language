#include<iostream>
using namespace std;

class India{
	public :
		static int totel;
		static void state();		
};
int India :: totel = 28;
void India :: state ()
{
	string state[]={"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
	cout << "Totel state : " << totel <<endl ;
	
	for(int i=0;i<28;i++)
	{
		cout << i+1 << " " << state[i] << endl;
	}
}

int main()
{
	India ::state();
	
}
