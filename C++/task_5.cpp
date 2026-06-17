#include<iostream>
using namespace std;


class A {
	public: 
		void show_a(){
			cout<<"\nThis is class A\n";
		}
};
class B{
	public : 
		void show_b(){
			cout<<"\nThis is class B\n";
		}
};

class C : public A,public B{
	public : 
		void show_c(){
			cout<<"\nThis is inheritated class C\n";
		}
};
int main(){
	C ob;
	
	ob.show_a();
	ob.	show_b();
	ob.show_c();
}
