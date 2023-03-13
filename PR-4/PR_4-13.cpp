#include<iostream>
using namespace std;

class Train{
	private :
		int num;
		string name,depature,arraivel,time;
	public :
		void input()
		{
			cout << "Enter Train Number : ";
			cin >> num;
			cout << "Enter Train Name : ";
			cin >> name;
			cout << "Enter Source : ";
			cin >> depature;
			cout << "Enter Destination : ";
			cin >> arraivel;
			cout << "Enter Train time : ";
			cin >> time;
		}
		void output()
		{
			cout << "Train Number : " << num << endl;
			cout << "Train Name : " << name << endl;
			cout << "Source : " << depature << endl;
			cout << "Destination : " << arraivel << endl;
			cout << "Train time : " << time << endl;
		}	
		friend void notice(Train []);	
};
void notice(Train t[])
{
	int n;
	cout << "Eneter Number : ";
	cin >> n;
	cout<<"----------------------------------------\n";
	for(int i=0;i<3;i++)
	{
		if(t[i].num==n)
		{
			t[i].output();
		}
	}
}

int main()
{
	Train t[3];
	int i;
	
	for(i=0;i<3;i++){
		cout<<"----------------------------------------\n";
		t[i].input();	
		cout<<"\n----------------------------------------\n";
	} 
	
	for(i=0;i<3;i++){
		cout<<"----------------------------------------\n";
		t[i].output();	
		cout<<"\n----------------------------------------\n";
	} 
	
	notice(t);
}
