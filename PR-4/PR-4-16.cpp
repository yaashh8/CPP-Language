#include<iostream>
using namespace std;

class Bank
{
	public :
	long long int c;
	int a;
	long long int d;
	string e,f;
		
	public :
		Bank(){
			cout<< "\t\t:- Bank Managment System -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t    Yash Bhakta" <<endl;
			cout<<endl;
			cout<< "\t\t        :- Trainer -:       "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t\tSimren Maam         "<<endl;
			cout<<endl;
			cout<<endl;
		}
		void display()
		{
			system("cls");
			cout<<" :- Press to login as administrator or to login as staff"<<endl;
			cout<<endl;
			cout<< "press any num to next : ";
			cin >> a;
			system("cls");
			
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t\t\t:- welcome to staff -:" <<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << "\t   Enter The Name Of Staff \t\t:" ;
			cin >> e;
			cout << "\t   Enter The Amount Number Of Staff \t:" ;
			cin >> c;
			cout << "\t   Enter The Phone Number Of Staff \t:" ;
			cin>> d;
			cout << "\t   Enter The Email Of Staff \t\t:";
			cin >>f;
			
			system("cls");
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t Name \t\t:" <<e << endl;
			cout << "\t Amount Number\t:"<<c <<endl;
			cout << "\t Phone Number \t:"<<d <<endl;
			cout << "\t Email \t\t:"<<f<<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "\t\tPress [1] To withdraw Money" << endl;
			cout << "\t\tPress [3] To Transfer Money" << endl;
			cout << "\t\tPress [2] To deposite Money" << endl;
			cin >> a;
				
			system("cls");
				switch(a)
				{
					int w,d;
					;
					case 1: cout<<"------------------------------------------------------------" <<endl;
							cout<<"\t\tWithdraw The Money : ";
							cin>>w;
							cout<<"------------------------------------------------------------" <<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
							cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully "<<endl<<endl;
							cout<<"\t\t\tYour Accout Balance Is : "<<200000-w;
							break;
					case 2: cout<<"------------------------------------------------------------" <<endl;
							cout<<"Diposite The Money : ";
							cin>>d;	
							cout<<"------------------------------------------------------------" <<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
							cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully "<<endl<<endl;
							cout<<"\t\t\tYour Accout Balance Is : "<<200000+d;
							break;	
				}
						
		}
};

int main(){
	Bank b;
	int a;
	cout<< "press any num to next : ";
	cin >> a;
	b.display();
	
}
