#include<iostream>
#include<exception>
using namespace std;
class A: public exception{
	public:
		const char* what() const throw() {
		return ("value not divide by 0\n");
		 }
};
int main(){
	try{
		int x,y;
		cout<<"enter 2 num :\n";
		cin>>x>>y;
		if(y==0){
			A obj;
			throw obj;
		}
		else{
			cout<<"x/y="<<x/y;
		}
	}
	catch (exception& e){
	//	cout<<e.show();
	}
}
