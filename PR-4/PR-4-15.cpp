#include <iostream>
using namespace std;

class D;

class C {
    public:
        int a;
    public:
        void setData() {
           	cout << "Enter a : ";
        	cin >> a;
        }
        friend int add(C a1,D b1);
};


class D {
    public:
        int b;
    public:
        void setData() {
            cout << "Enter B : ";
            cin >> b;
        }
        friend int add(C,D);
};


int add(C a1, D b1){
	int sum;
	sum = a1.a + b1.b;
    cout << "SUM : " << sum  ;
}

int main() {
    C a;
    D b;
    
    a.setData();
    b.setData();
    
    add(a,b); 
}
