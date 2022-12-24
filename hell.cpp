#include<iostream>
using namespace std;
namespace A
{
void show(){
	cout<<"Hello";
}
}
namespace B{
	void put(){
		cout<<"\nc++";
	}
}
using namespace A;
using namespace B;

int main(){
	A ::show();
	B::put();
}


